#pragma once

#ifdef BN_PLATFORM_WINDOWS
	#ifdef BN_BUILD_DLL
		#define BAININ_API __declspec(dllexport)
	#else 
		#define BAININ_API __declspec(dllimport)
	#endif
#else
	#error Bainin only supports windows!
#endif 

