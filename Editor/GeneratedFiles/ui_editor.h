/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created: Sat Jan 1 18:34:21 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorClass
{
public:
    QAction *actionClose;
    QAction *actionScripting_Help;
    QAction *actionAbout;
    QAction *actionMTA_Wiki;
    QAction *actionMTA_Forum;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionSave_all;
    QAction *actionOpen;
    QAction *actionMTA_Homepage;
    QAction *actionMTA_Bugs;
    QAction *actionPreferences;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QMenu *menuEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EditorClass)
    {
        if (EditorClass->objectName().isEmpty())
            EditorClass->setObjectName(QString::fromUtf8("EditorClass"));
        EditorClass->resize(800, 600);
        actionClose = new QAction(EditorClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionScripting_Help = new QAction(EditorClass);
        actionScripting_Help->setObjectName(QString::fromUtf8("actionScripting_Help"));
        actionAbout = new QAction(EditorClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionMTA_Wiki = new QAction(EditorClass);
        actionMTA_Wiki->setObjectName(QString::fromUtf8("actionMTA_Wiki"));
        actionMTA_Forum = new QAction(EditorClass);
        actionMTA_Forum->setObjectName(QString::fromUtf8("actionMTA_Forum"));
        actionNew = new QAction(EditorClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionSave = new QAction(EditorClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(EditorClass);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionSave_all = new QAction(EditorClass);
        actionSave_all->setObjectName(QString::fromUtf8("actionSave_all"));
        actionOpen = new QAction(EditorClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionMTA_Homepage = new QAction(EditorClass);
        actionMTA_Homepage->setObjectName(QString::fromUtf8("actionMTA_Homepage"));
        actionMTA_Bugs = new QAction(EditorClass);
        actionMTA_Bugs->setObjectName(QString::fromUtf8("actionMTA_Bugs"));
        actionPreferences = new QAction(EditorClass);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        centralWidget = new QWidget(EditorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        EditorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EditorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        EditorClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(EditorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EditorClass->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMenu->addAction(actionNew);
        menuMenu->addAction(actionOpen);
        menuMenu->addSeparator();
        menuMenu->addAction(actionSave);
        menuMenu->addAction(actionSave_as);
        menuMenu->addAction(actionSave_all);
        menuMenu->addSeparator();
        menuMenu->addAction(actionClose);
        menuHelp->addAction(actionMTA_Homepage);
        menuHelp->addAction(actionMTA_Bugs);
        menuHelp->addAction(actionMTA_Wiki);
        menuHelp->addAction(actionMTA_Forum);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuSettings->addAction(actionPreferences);

        retranslateUi(EditorClass);

        QMetaObject::connectSlotsByName(EditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *EditorClass)
    {
        EditorClass->setWindowTitle(QApplication::translate("EditorClass", "Multi Theft Auto - Script Editor", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("EditorClass", "Close", 0, QApplication::UnicodeUTF8));
        actionScripting_Help->setText(QApplication::translate("EditorClass", "Scripting Help", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("EditorClass", "About", 0, QApplication::UnicodeUTF8));
        actionMTA_Wiki->setText(QApplication::translate("EditorClass", "MTA Wiki", 0, QApplication::UnicodeUTF8));
        actionMTA_Forum->setText(QApplication::translate("EditorClass", "MTA Forum", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("EditorClass", "New...", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("EditorClass", "Save", 0, QApplication::UnicodeUTF8));
        actionSave_as->setText(QApplication::translate("EditorClass", "Save As...", 0, QApplication::UnicodeUTF8));
        actionSave_all->setText(QApplication::translate("EditorClass", "Save All", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("EditorClass", "Open...", 0, QApplication::UnicodeUTF8));
        actionMTA_Homepage->setText(QApplication::translate("EditorClass", "MTA Homepage", 0, QApplication::UnicodeUTF8));
        actionMTA_Bugs->setText(QApplication::translate("EditorClass", "MTA Bugs", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("EditorClass", "Preferences...", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("EditorClass", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("EditorClass", "Help", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("EditorClass", "Settings", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("EditorClass", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditorClass: public Ui_EditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
