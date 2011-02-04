/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CFirstRun.cpp
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#include <stdafx.h>

CFirstRun::CFirstRun ( void )
{
    //if ( !QFile::exists ( "license.txt" ) ) _asm int 3

    CreateWindows ();

    // Init wizard window.
    m_pWizard = new QWizard;

    m_pWizard->setWindowTitle ( "Multi Theft Auto : Script Editor" );
    m_pWizard->addPage ( m_pIntroPage );
    m_pWizard->addPage ( m_pLicensePage );
    //m_pWizard->addPage ( m_pSettingsPage );
    m_pWizard->addPage ( m_pRegisterPage );
    m_pWizard->addPage ( m_pDonePage );
}

CFirstRun::~CFirstRun ( void )
{
    SetVisible ( false );
    
    // Bye.
    SAFE_DELETE ( m_pIntroPage );
    SAFE_DELETE ( m_pLicensePage );
    SAFE_DELETE ( m_pSettingsPage );
    SAFE_DELETE ( m_pRegisterPage );
    SAFE_DELETE ( m_pDonePage );
    SAFE_DELETE ( m_pWizard );
}

void CFirstRun::SetVisible ( bool bVisible )
{
    ( ( bVisible == true ) ? m_pWizard->show () : m_pWizard->hide () );
}

void CFirstRun::CreateWindows ( void )
{
    //
    // Intro page..
    //
    m_pIntroPage = new QWizardPage;
    m_pIntroPage->setTitle ( "Introduction" );

    QLabel * pIntrolabel = new QLabel (
        "Hello!\n\n"
        "blaaa....\n"
        "This Script Editor was made by:\nSebas \"x86\" Lamers <x86dev@gmx.com>\n\n"
        "-- More Information is coming soon. --"
    );
    pIntrolabel->setWordWrap ( true );

    QVBoxLayout* pIntroLayout = new QVBoxLayout;
    pIntroLayout->addWidget ( pIntrolabel );
    m_pIntroPage->setLayout ( pIntroLayout );

    //
    // License page..
    //
    m_pLicensePage = new QWizardPage;
    m_pLicensePage->setTitle ( "Open Source License" );
 
    //QFile* pLicenseFile = new QFile ( "license.txt" );

    QPlainTextEdit * pLicenseText = new QPlainTextEdit (
        "-- License goes here.. --"
    );
    pLicenseText->setReadOnly ( true );

    QCheckBox * pLicenseCheckBox = new QCheckBox ( "I've read the license, and I agree with this shit." );

    /*m_pWizard->connect(pLicenseCheckBox, SIGNAL(toggled(bool)),
             NULL, SLOT(setEnabled(bool)));*/

    QVBoxLayout* pLicenseLayout = new QVBoxLayout;
    pLicenseLayout->addWidget ( pLicenseText );
    pLicenseLayout->addWidget ( pLicenseCheckBox );

    m_pLicensePage->setLayout ( pLicenseLayout );

    //
    // Settings page..
    //

    // TODO 

    //
    // Registration page..
    //

    m_pRegisterPage = new QWizardPage;
    m_pRegisterPage->setTitle ( "Registration" );
    m_pRegisterPage->setSubTitle ( "Please fill both fields." );

    QLabel *nameLabel = new QLabel("Name:");
    QLineEdit *nameLineEdit = new QLineEdit;

    QLabel *emailLabel = new QLabel("Email address:");
    QLineEdit *emailLineEdit = new QLineEdit;

    QGridLayout * pRegLayout = new QGridLayout;
    pRegLayout->addWidget(nameLabel, 0, 0);
    pRegLayout->addWidget(nameLineEdit, 0, 1);
    pRegLayout->addWidget(emailLabel, 1, 0);
    pRegLayout->addWidget(emailLineEdit, 1, 1);
    m_pRegisterPage->setLayout(pRegLayout);

    //
    // Last page..
    //
    m_pDonePage = new QWizardPage;
    m_pDonePage->setTitle ( "Done" );

    QLabel * pDoneLabel = new QLabel ( "You are now successfully registered. Have a nice day!" );
    pDoneLabel->setWordWrap ( true );

    QVBoxLayout * pDoneLayout = new QVBoxLayout;
    pDoneLayout->addWidget ( pDoneLabel );
    m_pDonePage->setLayout ( pDoneLayout );
}

