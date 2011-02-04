/*----------------------------------------------------------------**
**
** Project:     Multi Theft Auto - Script Editor.
** Filename:    CFirstRun.h
** Developers:  x86 <x86dev@gmx.com>
**
**----------------------------------------------------------------*/

#ifndef _C_FIRSTRUN_H
#define _C_FIRSTRUN_H

class CFirstRun
{
public:
                    CFirstRun               ( void );
                   ~CFirstRun               ( void );
            void    CreateWindows           ( void );
            void    SetVisible              ( bool bVisible );
private:
    QWizard*        m_pWizard;
    QWizardPage*    m_pIntroPage;
    QWizardPage*    m_pLicensePage;
    QWizardPage*    m_pSettingsPage;
    QWizardPage*    m_pRegisterPage;
    QWizardPage*    m_pDonePage;
};

#endif
