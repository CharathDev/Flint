#pragma once

#ifdef FL_PLATFORM_WINDOWS
	#ifdef FL_BUILD_DLL
		#define LEMON_API __declspec(dllexport)
	#else 
		#define LEMON_API __declspec(dllimport)
	#endif // FL_BUILD_DLL
#else
	#error Flint only supports Windows!
#endif // FL_PLATFORM_WINDOWS
