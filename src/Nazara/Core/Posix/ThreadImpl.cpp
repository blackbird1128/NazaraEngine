// Copyright (C) 2015 Alexandre Janniaux
// This file is part of the "Nazara Engine - Core module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Core/Posix/ThreadImpl.hpp>
#include <Nazara/Core/Error.hpp>
#include <Nazara/Core/Functor.hpp>
#include <Nazara/Core/String.hpp>
#include <errno.h>
#include <sched.h>
#include <time.h>
#include <Nazara/Core/Debug.hpp>

namespace Nz
{
	ThreadImpl::ThreadImpl(Functor* functor)
	{
		int error = pthread_create(&m_handle, nullptr, &ThreadImpl::ThreadProc, functor);
		if (error != 0)
			NazaraInternalError("Failed to create thread: " + Error::GetLastSystemError());
	}

	void ThreadImpl::Detach()
	{
		pthread_detach(m_handle);
	}

	void ThreadImpl::Join()
	{
		pthread_join(m_handle, nullptr);
	}

	void ThreadImpl::SetName(const Nz::String& name)
	{
#ifdef __GNUC__
		pthread_setname_np(m_handle, name.GetConstBuffer());
#else
		NazaraWarning("Setting thread name is not supported on this platform");
#endif
	}

	void ThreadImpl::SetCurrentName(const Nz::String& name)
	{
#ifdef __GNUC__
		pthread_setname_np(pthread_self(), name.GetConstBuffer());
#else
		NazaraWarning("Setting current thread name is not supported on this platform");
#endif
	}

	void ThreadImpl::Sleep(UInt32 time)
	{
		if (time == 0)
			sched_yield();
		else
		{
			struct timespec ts;
			ts.tv_sec = time / 1000;
			ts.tv_nsec = (time - ts.tv_sec * 1000) * 1'000'000;

			int r;
			do
			{
				r = nanosleep(&ts, &ts);
			}
			while (r == -1 && errno == EINTR);
		}
	}

	void* ThreadImpl::ThreadProc(void* userdata)
	{
		Functor* func = static_cast<Functor*>(userdata);
		func->Run();
		delete func;

		return nullptr;
	}
}
