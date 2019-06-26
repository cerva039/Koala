#pragma once
//this is to contain basic mappers

#ifdef KA_PLATFORM_WINDOWS
	#ifdef KA_BUILD_DLL
		#define KOALA_API __declspec(dllexport)
	#else
		#define KOALA_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows...
#endif