// Copyright (C) 2015 Jérôme Leclercq
// This file is part of the "Nazara Engine - Utility module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Utility/Formats/MD5AnimLoader.hpp>
#include <Nazara/Utility/Formats/MD5AnimParser.hpp>
#include <Nazara/Utility/Debug.hpp>

namespace Nz
{
	namespace
	{
		bool IsSupported(const String& extension)
		{
			return (extension == "md5anim");
		}

		Ternary Check(InputStream& stream, const AnimationParams& parameters)
		{
			NazaraUnused(parameters);

			MD5AnimParser parser(stream);
			return parser.Check();
		}

		bool Load(Animation* animation, InputStream& stream, const AnimationParams& parameters)
		{
			///TODO: Utiliser les paramètres
			MD5AnimParser parser(stream);

			if (!parser.Parse())
			{
				NazaraError("MD5Anim parser failed");
				return false;
			}

			const MD5AnimParser::Frame* frames = parser.GetFrames();
			unsigned int frameCount = parser.GetFrameCount();
			unsigned int frameRate = parser.GetFrameRate();
			const MD5AnimParser::Joint* joints = parser.GetJoints();
			unsigned int jointCount = parser.GetJointCount();

			// À ce stade, nous sommes censés avoir assez d'informations pour créer l'animation
			animation->CreateSkeletal(frameCount, jointCount);

			Sequence sequence;
			sequence.firstFrame = 0;
			sequence.frameCount = frameCount;
			sequence.frameRate = frameRate;
			sequence.name = stream.GetPath().SubStringFrom(NAZARA_DIRECTORY_SEPARATOR, -1, true);

			animation->AddSequence(sequence);

			SequenceJoint* sequenceJoints = animation->GetSequenceJoints();

			// Pour que le squelette soit correctement aligné, il faut appliquer un quaternion "de correction" aux joints à la base du squelette
			Quaternionf rotationQuat = Quaternionf::RotationBetween(Vector3f::UnitX(), Vector3f::Forward()) *
										 Quaternionf::RotationBetween(Vector3f::UnitZ(), Vector3f::Up());

			for (unsigned int i = 0; i < jointCount; ++i)
			{
				int parent = joints[i].parent;
				for (unsigned int j = 0; j < frameCount; ++j)
				{
					SequenceJoint& sequenceJoint = sequenceJoints[j*jointCount + i];

					if (parent >= 0)
					{
						sequenceJoint.position = frames[j].joints[i].pos;
						sequenceJoint.rotation = frames[j].joints[i].orient;
					}
					else
					{
						sequenceJoint.position = rotationQuat * frames[j].joints[i].pos;
						sequenceJoint.rotation = rotationQuat * frames[j].joints[i].orient;
					}

					sequenceJoint.scale.Set(1.f);
				}
			}

			return true;
		}
	}

	namespace Loaders
	{
		void RegisterMD5Anim()
		{
			AnimationLoader::RegisterLoader(IsSupported, Check, Load);
		}

		void UnregisterMD5Anim()
		{
			AnimationLoader::UnregisterLoader(IsSupported, Check, Load);
		}
	}
}