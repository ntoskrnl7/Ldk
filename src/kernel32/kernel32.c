﻿#include "winbase.h"

#include "../ldk.h"



NTSTATUS
LdkpInitializeThreadpoolApiset (
	VOID
	);

VOID
LdkpTerminateThreadpoolApiset (
	VOID
	);



#pragma warning(disable:4152)
LDK_FUNCTION_REGISTRATION LdkpKernel32FunctionRegistration[] = {
	{
		"CreateThread",
		CreateThread
	},
	{
		"CloseHandle",
		CloseHandle
	},
	{
		"GetSystemTime",
		GetSystemTime
	},
	{
		"GetLocalTime",
		GetLocalTime
	},
	{
		"GetSystemInfo",
		GetSystemInfo
	},
	{
		"GetSystemTimeAsFileTime",
		GetSystemTimeAsFileTime
	},
	{
		"GetTickCount",
		GetTickCount
	},
	{
		"GetTickCount64",
		GetTickCount64
	},
	{
		"GetThreadTimes",
		GetThreadTimes
	},
	{
		"QueryPerformanceCounter",
		QueryPerformanceCounter
	},
	{
		"QueryPerformanceFrequency",
		QueryPerformanceFrequency
	},
	{
		"GetLastError",
		GetLastError
	},
	{
		"SetLastError",
		SetLastError
	},
	{
		"GlobalMemoryStatusEx",
		GlobalMemoryStatusEx
	},
	{
		"InitializeConditionVariable",
		InitializeConditionVariable
	},
	{
		"SleepConditionVariableCS",
		SleepConditionVariableCS
	},
	{
		"SleepConditionVariableSRW",
		SleepConditionVariableSRW
	},
	{
		"WakeConditionVariable",
		WakeConditionVariable
	},
	{
		"WakeAllConditionVariable",
		WakeAllConditionVariable
	},
	{
		"InitializeCriticalSection",
		InitializeCriticalSection
	},
	{
		"InitializeCriticalSectionAndSpinCount",
		InitializeCriticalSectionAndSpinCount
	},
	{
		"DeleteCriticalSection",
		DeleteCriticalSection
	},
	{
		"EnterCriticalSection",
		EnterCriticalSection
	},
	{
		"LeaveCriticalSection",
		LeaveCriticalSection
	},
	{
		"InitOnceExecuteOnce",
		InitOnceExecuteOnce
	},
	{
		"WaitForSingleObject",
		WaitForSingleObject
	},
	{
		"WaitForSingleObjectEx",
		WaitForSingleObjectEx
	},
	{
		"WaitForMultipleObjects",
		WaitForMultipleObjects
	},
	{
		"WaitForMultipleObjectsEx",
		WaitForMultipleObjectsEx
	},
	{
		"Sleep",
		Sleep
	},
	{
		"TerminateProcess",
		TerminateProcess
	},
	{
		"ExitProcess",
		ExitProcess
	},
	{
		"IsProcessorFeaturePresent",
		IsProcessorFeaturePresent
	},
	{
		"GetCurrentProcess",
		GetCurrentProcess
	},
	{
		"GetCurrentProcessId",
		GetCurrentProcessId
	},
	{
		"GetCurrentThread",
		GetCurrentThread
	},
	{
		"GetCurrentThreadId",
		GetCurrentThreadId
	},
	{
		"GetProcAddress",
		GetProcAddress
	},
	{
		"LoadLibraryA",
		LoadLibraryA
	},
	{
		"LoadLibraryW",
		LoadLibraryW
	},
	{
		"FreeLibrary",
		FreeLibrary
	},
	{
		"LoadLibraryExA",
		LoadLibraryExA
	},
	{
		"LoadLibraryExW",
		LoadLibraryExW
	},
	{
		"GetVersion",
		GetVersion
	},
	{
		"GetVersionExA",
		GetVersionExA
	},
	{
		"IsDebuggerPresent",
		IsDebuggerPresent
	},

	{
		"OutputDebugStringA",
		OutputDebugStringA
	},
	{
		"OutputDebugStringW",
		OutputDebugStringW
	},
	{
		NULL
	}
};
#pragma warning(default:4152)

LDK_MODULE LdkpKernel32Module = {
    RTL_CONSTANT_STRING("KERNEL32.DLL"),
    RTL_CONSTANT_STRING("\\SystemRoot\\system32\\KERNEL32.DLL"),
    LdkpKernel32FunctionRegistration,
    NULL
};

NTSTATUS
Kernel32Initialize (
    VOID
    )
{
	return LdkpInitializeThreadpoolApiset();
}

VOID
Kernel32Terminate (
    VOID
    )
{
	LdkpTerminateThreadpoolApiset();
}