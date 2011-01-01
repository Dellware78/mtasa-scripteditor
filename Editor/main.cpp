/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    main.cpp
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#include "stdafx.h"
#include <QtGui/QApplication>

int main ( int argc, char *argv[] )
{
    QApplication a ( argc, argv );

    CEditor w;
    w.show ();

    return a.exec ();
}
