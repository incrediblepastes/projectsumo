//pretty much everything here can be replaced by miraka's driver
//i've only removed my work on the r0 part but the implementation stays the same
#include <Windows.h>

namespace driver
{
	auto guarded_region()->uintptr_t
	{
		//removed.
	}

	template <typename T>
	T readguarded(uintptr_t src, size_t size = sizeof(T))
	{
		//removed.
	}

	template <typename T>
	T readv(uintptr_t src, size_t size = sizeof(T))
	{
		//removed.
	}

	inline static bool isguarded(uintptr_t pointer) noexcept
	{
		// written by bluefire1337 @ unknowncheats.me
		// all credits to him on this part.
		static constexpr uintptr_t filter = 0xFFFFFFF000000000;
		uintptr_t result = pointer & filter;
		return result == 0x8000000000 || result == 0x10000000000;
	}

	template <typename T>
	T read(T src)
	{
		T buffer = readv< uintptr_t >(src);

		if (isguarded((uintptr_t)buffer))
		{
			return readguarded< uintptr_t >(src);
		}

		return buffer;
	}
}