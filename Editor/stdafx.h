/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    stdafx.h
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

//
// OS + Qt includes
//

#include <windows.h>
#include <assert.h>
#include <QtGui>

//
// Global defines
//
#define SAFE_DELETE(p) { if (p) { delete (p); (p) = NULL; } }

//
// Project includes
//

#include <CEditor.h>
#include <CCrashHandler.h>
#include <CRegistry.h>
#include <CSystemTray.h>
#include <CFirstRun.h>
