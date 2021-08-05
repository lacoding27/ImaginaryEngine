#pragma once

#ifdef IMAGINARY_PLATFORM_WINDOWS
	#ifdef IMAGINARY_BUILD_DLL
		#define IMAGINARY_API __declspec(dllexport)
	#else
		#define IMAGINARY_API __declspec(dllimport)
	#endif
#endif
