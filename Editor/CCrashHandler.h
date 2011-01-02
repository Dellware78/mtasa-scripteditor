/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CCrashHandler.h
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#ifndef _C_CRASHHANDLER_H
#define _C_CRASHHANDLER_H

#include <dbghelp.h>
#include <tlhelp32.h>

class CCrashHandler
{
public:
                    CCrashHandler               ( void );
                    ~CCrashHandler              ( void );

    static bool            CreateMiniDump              ( _EXCEPTION_POINTERS * eExceptionPointers );
    static long WINAPI     ExceptionHandler            ( _EXCEPTION_POINTERS * eExceptionInfo );

private:

};

#endif
