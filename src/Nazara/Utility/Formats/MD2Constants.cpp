// Copyright (C) 2015 Jérôme Leclercq
// This file is part of the "Nazara Engine - Utility module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Utility/Formats/MD2Constants.hpp>
#include <Nazara/Utility/Debug.hpp>

namespace Nz
{
	const UInt32 md2Ident = 'I' + ('D'<<8) + ('P'<<16) + ('2'<<24);

	const Vector3f md2Normals[162] =
	{
		Vector3f(-0.525731f, 0.000000f, 0.850651f),
		Vector3f(-0.442863f, 0.238856f, 0.864188f),
		Vector3f(-0.295242f, 0.000000f, 0.955423f),
		Vector3f(-0.309017f, 0.500000f, 0.809017f),
		Vector3f(-0.162460f, 0.262866f, 0.951056f),
		Vector3f(0.000000f, 0.000000f, 1.000000f),
		Vector3f(0.000000f, 0.850651f, 0.525731f),
		Vector3f(-0.147621f, 0.716567f, 0.681718f),
		Vector3f(0.147621f, 0.716567f, 0.681718f),
		Vector3f(0.000000f, 0.525731f, 0.850651f),
		Vector3f(0.309017f, 0.500000f, 0.809017f),
		Vector3f(0.525731f, 0.000000f, 0.850651f),
		Vector3f(0.295242f, 0.000000f, 0.955423f),
		Vector3f(0.442863f, 0.238856f, 0.864188f),
		Vector3f(0.162460f, 0.262866f, 0.951056f),
		Vector3f(-0.681718f, 0.147621f, 0.716567f),
		Vector3f(-0.809017f, 0.309017f, 0.500000f),
		Vector3f(-0.587785f, 0.425325f, 0.688191f),
		Vector3f(-0.850651f, 0.525731f, 0.000000f),
		Vector3f(-0.864188f, 0.442863f, 0.238856f),
		Vector3f(-0.716567f, 0.681718f, 0.147621f),
		Vector3f(-0.688191f, 0.587785f, 0.425325f),
		Vector3f(-0.500000f, 0.809017f, 0.309017f),
		Vector3f(-0.238856f, 0.864188f, 0.442863f),
		Vector3f(-0.425325f, 0.688191f, 0.587785f),
		Vector3f(-0.716567f, 0.681718f, -0.147621f),
		Vector3f(-0.500000f, 0.809017f, -0.309017f),
		Vector3f(-0.525731f, 0.850651f, 0.000000f),
		Vector3f(0.000000f, 0.850651f, -0.525731f),
		Vector3f(-0.238856f, 0.864188f, -0.442863f),
		Vector3f(0.000000f, 0.955423f, -0.295242f),
		Vector3f(-0.262866f, 0.951056f, -0.162460f),
		Vector3f(0.000000f, 1.000000f, 0.000000f),
		Vector3f(0.000000f, 0.955423f, 0.295242f),
		Vector3f(-0.262866f, 0.951056f, 0.162460f),
		Vector3f(0.238856f, 0.864188f, 0.442863f),
		Vector3f(0.262866f, 0.951056f, 0.162460f),
		Vector3f(0.500000f, 0.809017f, 0.309017f),
		Vector3f(0.238856f, 0.864188f, -0.442863f),
		Vector3f(0.262866f, 0.951056f, -0.162460f),
		Vector3f(0.500000f, 0.809017f, -0.309017f),
		Vector3f(0.850651f, 0.525731f, 0.000000f),
		Vector3f(0.716567f, 0.681718f, 0.147621f),
		Vector3f(0.716567f, 0.681718f, -0.147621f),
		Vector3f(0.525731f, 0.850651f, 0.000000f),
		Vector3f(0.425325f, 0.688191f, 0.587785f),
		Vector3f(0.864188f, 0.442863f, 0.238856f),
		Vector3f(0.688191f, 0.587785f, 0.425325f),
		Vector3f(0.809017f, 0.309017f, 0.500000f),
		Vector3f(0.681718f, 0.147621f, 0.716567f),
		Vector3f(0.587785f, 0.425325f, 0.688191f),
		Vector3f(0.955423f, 0.295242f, 0.000000f),
		Vector3f(1.000000f, 0.000000f, 0.000000f),
		Vector3f(0.951056f, 0.162460f, 0.262866f),
		Vector3f(0.850651f, -0.525731f, 0.000000f),
		Vector3f(0.955423f, -0.295242f, 0.000000f),
		Vector3f(0.864188f, -0.442863f, 0.238856f),
		Vector3f(0.951056f, -0.162460f, 0.262866f),
		Vector3f(0.809017f, -0.309017f, 0.500000f),
		Vector3f(0.681718f, -0.147621f, 0.716567f),
		Vector3f(0.850651f, 0.000000f, 0.525731f),
		Vector3f(0.864188f, 0.442863f, -0.238856f),
		Vector3f(0.809017f, 0.309017f, -0.500000f),
		Vector3f(0.951056f, 0.162460f, -0.262866f),
		Vector3f(0.525731f, 0.000000f, -0.850651f),
		Vector3f(0.681718f, 0.147621f, -0.716567f),
		Vector3f(0.681718f, -0.147621f, -0.716567f),
		Vector3f(0.850651f, 0.000000f, -0.525731f),
		Vector3f(0.809017f, -0.309017f, -0.500000f),
		Vector3f(0.864188f, -0.442863f, -0.238856f),
		Vector3f(0.951056f, -0.162460f, -0.262866f),
		Vector3f(0.147621f, 0.716567f, -0.681718f),
		Vector3f(0.309017f, 0.500000f, -0.809017f),
		Vector3f(0.425325f, 0.688191f, -0.587785f),
		Vector3f(0.442863f, 0.238856f, -0.864188f),
		Vector3f(0.587785f, 0.425325f, -0.688191f),
		Vector3f(0.688191f, 0.587785f, -0.425325f),
		Vector3f(-0.147621f, 0.716567f, -0.681718f),
		Vector3f(-0.309017f, 0.500000f, -0.809017f),
		Vector3f(0.000000f, 0.525731f, -0.850651f),
		Vector3f(-0.525731f, 0.000000f, -0.850651f),
		Vector3f(-0.442863f, 0.238856f, -0.864188f),
		Vector3f(-0.295242f, 0.000000f, -0.955423f),
		Vector3f(-0.162460f, 0.262866f, -0.951056f),
		Vector3f(0.000000f, 0.000000f, -1.000000f),
		Vector3f(0.295242f, 0.000000f, -0.955423f),
		Vector3f(0.162460f, 0.262866f, -0.951056f),
		Vector3f(-0.442863f, -0.238856f, -0.864188f),
		Vector3f(-0.309017f, -0.500000f, -0.809017f),
		Vector3f(-0.162460f, -0.262866f, -0.951056f),
		Vector3f(0.000000f, -0.850651f, -0.525731f),
		Vector3f(-0.147621f, -0.716567f, -0.681718f),
		Vector3f(0.147621f, -0.716567f, -0.681718f),
		Vector3f(0.000000f, -0.525731f, -0.850651f),
		Vector3f(0.309017f, -0.500000f, -0.809017f),
		Vector3f(0.442863f, -0.238856f, -0.864188f),
		Vector3f(0.162460f, -0.262866f, -0.951056f),
		Vector3f(0.238856f, -0.864188f, -0.442863f),
		Vector3f(0.500000f, -0.809017f, -0.309017f),
		Vector3f(0.425325f, -0.688191f, -0.587785f),
		Vector3f(0.716567f, -0.681718f, -0.147621f),
		Vector3f(0.688191f, -0.587785f, -0.425325f),
		Vector3f(0.587785f, -0.425325f, -0.688191f),
		Vector3f(0.000000f, -0.955423f, -0.295242f),
		Vector3f(0.000000f, -1.000000f, 0.000000f),
		Vector3f(0.262866f, -0.951056f, -0.162460f),
		Vector3f(0.000000f, -0.850651f, 0.525731f),
		Vector3f(0.000000f, -0.955423f, 0.295242f),
		Vector3f(0.238856f, -0.864188f, 0.442863f),
		Vector3f(0.262866f, -0.951056f, 0.162460f),
		Vector3f(0.500000f, -0.809017f, 0.309017f),
		Vector3f(0.716567f, -0.681718f, 0.147621f),
		Vector3f(0.525731f, -0.850651f, 0.000000f),
		Vector3f(-0.238856f, -0.864188f, -0.442863f),
		Vector3f(-0.500000f, -0.809017f, -0.309017f),
		Vector3f(-0.262866f, -0.951056f, -0.162460f),
		Vector3f(-0.850651f, -0.525731f, 0.000000f),
		Vector3f(-0.716567f, -0.681718f, -0.147621f),
		Vector3f(-0.716567f, -0.681718f, 0.147621f),
		Vector3f(-0.525731f, -0.850651f, 0.000000f),
		Vector3f(-0.500000f, -0.809017f, 0.309017f),
		Vector3f(-0.238856f, -0.864188f, 0.442863f),
		Vector3f(-0.262866f, -0.951056f, 0.162460f),
		Vector3f(-0.864188f, -0.442863f, 0.238856f),
		Vector3f(-0.809017f, -0.309017f, 0.500000f),
		Vector3f(-0.688191f, -0.587785f, 0.425325f),
		Vector3f(-0.681718f, -0.147621f, 0.716567f),
		Vector3f(-0.442863f, -0.238856f, 0.864188f),
		Vector3f(-0.587785f, -0.425325f, 0.688191f),
		Vector3f(-0.309017f, -0.500000f, 0.809017f),
		Vector3f(-0.147621f, -0.716567f, 0.681718f),
		Vector3f(-0.425325f, -0.688191f, 0.587785f),
		Vector3f(-0.162460f, -0.262866f, 0.951056f),
		Vector3f(0.442863f, -0.238856f, 0.864188f),
		Vector3f(0.162460f, -0.262866f, 0.951056f),
		Vector3f(0.309017f, -0.500000f, 0.809017f),
		Vector3f(0.147621f, -0.716567f, 0.681718f),
		Vector3f(0.000000f, -0.525731f, 0.850651f),
		Vector3f(0.425325f, -0.688191f, 0.587785f),
		Vector3f(0.587785f, -0.425325f, 0.688191f),
		Vector3f(0.688191f, -0.587785f, 0.425325f),
		Vector3f(-0.955423f, 0.295242f, 0.000000f),
		Vector3f(-0.951056f, 0.162460f, 0.262866f),
		Vector3f(-1.000000f, 0.000000f, 0.000000f),
		Vector3f(-0.850651f, 0.000000f, 0.525731f),
		Vector3f(-0.955423f, -0.295242f, 0.000000f),
		Vector3f(-0.951056f, -0.162460f, 0.262866f),
		Vector3f(-0.864188f, 0.442863f, -0.238856f),
		Vector3f(-0.951056f, 0.162460f, -0.262866f),
		Vector3f(-0.809017f, 0.309017f, -0.500000f),
		Vector3f(-0.864188f, -0.442863f, -0.238856f),
		Vector3f(-0.951056f, -0.162460f, -0.262866f),
		Vector3f(-0.809017f, -0.309017f, -0.500000f),
		Vector3f(-0.681718f, 0.147621f, -0.716567f),
		Vector3f(-0.681718f, -0.147621f, -0.716567f),
		Vector3f(-0.850651f, 0.000000f, -0.525731f),
		Vector3f(-0.688191f, 0.587785f, -0.425325f),
		Vector3f(-0.587785f, 0.425325f, -0.688191f),
		Vector3f(-0.425325f, 0.688191f, -0.587785f),
		Vector3f(-0.425325f, -0.688191f, -0.587785f),
		Vector3f(-0.587785f, -0.425325f, -0.688191f),
		Vector3f(-0.688191f, -0.587785f, -0.425325f)
	};
}