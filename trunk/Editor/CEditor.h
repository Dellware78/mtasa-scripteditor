/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CEditor.h
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#ifndef _C_EDITOR_H
#define _C_EDITOR_H

#include <QtGui/QMainWindow>
#include "ui_editor.h"

class CEditor : public QMainWindow
{
    Q_OBJECT

public:
            CEditor             ( QWidget* parent = NULL, Qt::WFlags flags = NULL );
            ~CEditor            ( void );

    void    closeEvent          ( QCloseEvent* pQevent );

private:
    Ui::EditorClass ui;
};

#endif // EDITOR_H
