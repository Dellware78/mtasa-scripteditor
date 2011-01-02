/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CCrashHandler.cpp
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#include "stdafx.h"

CCrashHandler::CCrashHandler ( void )
{
    SetUnhandledExceptionFilter ( &CCrashHandler::ExceptionHandler );
}

CCrashHandler::~CCrashHandler ( void )
{

}

bool CCrashHandler::CreateMiniDump ( _EXCEPTION_POINTERS * eExceptionPointers )
{
    //
    // Current time
    //
    SYSTEMTIME sTime;
    GetLocalTime ( &sTime );

    //
    // TODO: crash-time.day-version.dmp
    //
    std::string strFileName = "crash.dmp";

    HANDLE hFile = CreateFileA ( strFileName.c_str (), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL );
    if ( hFile )
    {
        // Set information.
        MINIDUMP_EXCEPTION_INFORMATION exInfo;

        memset ( &exInfo, 0, sizeof ( MINIDUMP_EXCEPTION_INFORMATION ) );
        exInfo.ThreadId = GetCurrentThreadId ();
        exInfo.ExceptionPointers = eExceptionPointers;
        exInfo.ClientPointers = FALSE;

        // Write.
        bool bDone = (
                        MiniDumpWriteDump (
                                GetCurrentProcess (),
                                GetCurrentProcessId (),
                                hFile,
                                MiniDumpNormal, 
                                &exInfo,
                                NULL,
                                NULL 
                        ) != NULL
                     );

        // Close.
        CloseHandle ( hFile );

        return bDone;
    }

    return false;
}

long WINAPI CCrashHandler::ExceptionHandler ( _EXCEPTION_POINTERS * eExceptionInfo )
{
    //
    // Write minidump.
    //
    CreateMiniDump ( eExceptionInfo );

    //
    // Exit.
    //
    SetForegroundWindow ( HWND_DESKTOP );
    TerminateProcess ( GetCurrentProcess (), 1 );

    return 1;
}
