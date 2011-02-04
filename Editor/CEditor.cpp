/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CEditor.cpp
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#include <stdafx.h>

CEditor::CEditor ( QWidget *parent, Qt::WFlags flags ) : QMainWindow ( parent, flags )
{
    ui.setupUi ( this );
}

CEditor::~CEditor ( void )
{

}

void CEditor::closeEvent ( QCloseEvent* pQevent )
{
    // Save file?
    QMessageBox messageBox;
    //messageBox.setTitle ( "Leaving..." );
    messageBox.setText ( "Do you want to save your changes?" );
    messageBox.setStandardButtons ( QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel );
    messageBox.setDefaultButton ( QMessageBox::Save );
    const int iResult = messageBox.exec ();

    if ( iResult == QMessageBox::Cancel )
    {
        pQevent->ignore ();
        return;
    }

    if ( iResult == QMessageBox::Save )
    {
        // TODO:
        //QMessageBox::
        //Save ();
    }

    pQevent->accept ();
}