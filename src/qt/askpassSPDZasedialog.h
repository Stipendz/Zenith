// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSSPDZASEDIALOG_H
#define BITCOIN_QT_ASKPASSSPDZASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPassSPDZaseDialog;
}

/** Multifunctional dialog to ask for passSPDZases. Used for encryption, unlocking, and changing the passSPDZase.
 */
class AskPassSPDZaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passSPDZase twice and encrypt */
        UnlockAnonymize, /**< Ask passSPDZase and unlock only for anonymization */
        Unlock,          /**< Ask passSPDZase and unlock */
        ChangePass,      /**< Ask old passSPDZase + new passSPDZase twice */
        Decrypt          /**< Ask passSPDZase and decrypt wallet */
    };

    explicit AskPassSPDZaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPassSPDZaseDialog();

    void accept();

private:
    Ui::AskPassSPDZaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSSPDZASEDIALOG_H
