/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    main.cpp
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#include <stdafx.h>
#include <QtGui/QApplication>
#include <tlhelp32.h> //  related to: bool IsWindowsXPSP2OrLater ()

//
CEditor* g_pWindow;
bool TerminateIfRunning     ( void );
BOOL IsWindowsXPSP2OrLater  ( void );
void SetEditorVisible       ( bool bVisible );
//

int main ( int argc, char *argv[] )
{
    // Some checks here..
    {
        //
        // Check if the Script Editor isn't running twice.
        //
        if ( TerminateIfRunning () )
        {
            MessageBoxA ( NULL, "The MTA Script Editor is already running!", "ERROR", MB_ICONEXCLAMATION | MB_OK );
            TerminateProcess ( GetCurrentProcess (), 1 );
        }

        //
        // Check the OS version.
        //
        if ( IsWindowsXPSP2OrLater () == FALSE )
        {
            // Outdated Windows version.
            MessageBoxA ( NULL, "Sorry, but to run the MTA Script Editor you need at least Windows XP SP2!\n\nIf you have Windows XP SP2 or higher, please submit a bugreport at: bugs.mtasa.com", "ERROR", MB_ICONEXCLAMATION | MB_OK );
            TerminateProcess ( GetCurrentProcess (), 1 );
        }
    }

    QApplication a ( argc, argv );

    //
    // Init crash handler.
    //
    new CCrashHandler;

    g_pWindow = new CEditor;
    SetEditorVisible ( true );

    //
    // Is this our first run ?
    //
    //if ( CRegistry::GetBool ( "firstRun" ) == true )
    {
        CFirstRun* pFirstWindow = new CFirstRun;
        pFirstWindow->SetVisible ( true );
    }

    return a.exec ();
}


void SetEditorVisible ( bool bVisible )
{
    ( ( bVisible == true ) ? g_pWindow->show () : g_pWindow->hide () );
}


bool TerminateIfRunning ( void )
{
    bool bAlreadyRunning = false;
    unsigned int index = 0;

    DWORD dwOwnPID   = GetProcessId ( GetCurrentProcess () );
    HANDLE hSnapShot = CreateToolhelp32Snapshot ( TH32CS_SNAPPROCESS, 0 );

    PROCESSENTRY32* processInfo = new PROCESSENTRY32;
    processInfo->dwSize = sizeof ( PROCESSENTRY32 );

    while ( Process32Next ( hSnapShot, processInfo ) != 0 )
    {
        // Convert WCHAR to const char *
        const char * strFileName = reinterpret_cast < const char * >( processInfo->szExeFile );

        if ( !strcmp ( strFileName, "_TODO_EXE_NAME_.exe" ) )
        {
            if ( processInfo->th32ProcessID != dwOwnPID )
            {
                bAlreadyRunning = true;
                break;
            }
        }
    }

    CloseHandle ( hSnapShot );
    delete processInfo;

    return bAlreadyRunning;
}


BOOL IsWindowsXPSP2OrLater ( void ) 
{
   OSVERSIONINFOEX osvi;
   DWORDLONG dwlConditionMask = 0;
   int op = VER_GREATER_EQUAL;

   // Initialize the OSVERSIONINFOEX structure.
   memset ( &osvi, 0, sizeof ( OSVERSIONINFOEX ) );
   osvi.dwOSVersionInfoSize = sizeof ( OSVERSIONINFOEX );
   osvi.dwMajorVersion = 5;
   osvi.dwMinorVersion = 1;
   osvi.wServicePackMajor = 2;
   osvi.wServicePackMinor = 0;

   // Initialize the condition mask.
   VER_SET_CONDITION ( dwlConditionMask, VER_MAJORVERSION, op );
   VER_SET_CONDITION ( dwlConditionMask, VER_MINORVERSION, op );
   VER_SET_CONDITION ( dwlConditionMask, VER_SERVICEPACKMAJOR, op );
   VER_SET_CONDITION ( dwlConditionMask, VER_SERVICEPACKMINOR, op );

   // Perform the test.
   return VerifyVersionInfo (
      &osvi, 
      VER_MAJORVERSION | VER_MINORVERSION | 
      VER_SERVICEPACKMAJOR | VER_SERVICEPACKMINOR,
      dwlConditionMask
   );
}

