/********************************************************************************
** Form generated from reading ui file 'dane_firmy.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DANE_FIRMY_H
#define UI_DANE_FIRMY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Dane_Firmy
{
public:
    QLineEdit *imie_lineEdit;
    QLineEdit *nazwisko_lineedit;
    QLineEdit *nazwa_firmy_lineEdit;
    QLineEdit *adres_lineEdit;
    QLineEdit *nip_lineEdit;
    QLineEdit *regon_lineEdit;
    QLineEdit *nr_konta_lineEdit;
    QLabel *imie_label;
    QLabel *nazwisko_label;
    QLabel *nazwa_firmy_label;
    QLabel *adres_label;
    QLabel *nip_label;
    QLabel *regon_label;
    QLabel *nr_konta_label;
    QDialogButtonBox *buttonBox;
    QLabel *logo_label;
    QToolButton *logo_toolButton;
    QLineEdit *logo_lineEdit;
    QLabel *telefon_kontaktowy_label;
    QLineEdit *telefon_kontaktowy_lineEdit;

    void setupUi(QDialog *Dane_Firmy)
    {
        if (Dane_Firmy->objectName().isEmpty())
            Dane_Firmy->setObjectName(QString::fromUtf8("Dane_Firmy"));
        Dane_Firmy->resize(500, 330);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dane_Firmy->sizePolicy().hasHeightForWidth());
        Dane_Firmy->setSizePolicy(sizePolicy);
        Dane_Firmy->setMinimumSize(QSize(500, 330));
        Dane_Firmy->setMaximumSize(QSize(500, 330));
        Dane_Firmy->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/dane_firmy.png")), QIcon::Normal, QIcon::Off);
        Dane_Firmy->setWindowIcon(icon);
        imie_lineEdit = new QLineEdit(Dane_Firmy);
        imie_lineEdit->setObjectName(QString::fromUtf8("imie_lineEdit"));
        imie_lineEdit->setGeometry(QRect(120, 10, 371, 27));
        nazwisko_lineedit = new QLineEdit(Dane_Firmy);
        nazwisko_lineedit->setObjectName(QString::fromUtf8("nazwisko_lineedit"));
        nazwisko_lineedit->setGeometry(QRect(120, 40, 371, 27));
        nazwa_firmy_lineEdit = new QLineEdit(Dane_Firmy);
        nazwa_firmy_lineEdit->setObjectName(QString::fromUtf8("nazwa_firmy_lineEdit"));
        nazwa_firmy_lineEdit->setGeometry(QRect(120, 70, 371, 27));
        adres_lineEdit = new QLineEdit(Dane_Firmy);
        adres_lineEdit->setObjectName(QString::fromUtf8("adres_lineEdit"));
        adres_lineEdit->setGeometry(QRect(120, 100, 371, 27));
        nip_lineEdit = new QLineEdit(Dane_Firmy);
        nip_lineEdit->setObjectName(QString::fromUtf8("nip_lineEdit"));
        nip_lineEdit->setGeometry(QRect(120, 130, 371, 27));
        nip_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        regon_lineEdit = new QLineEdit(Dane_Firmy);
        regon_lineEdit->setObjectName(QString::fromUtf8("regon_lineEdit"));
        regon_lineEdit->setGeometry(QRect(120, 160, 371, 27));
        nr_konta_lineEdit = new QLineEdit(Dane_Firmy);
        nr_konta_lineEdit->setObjectName(QString::fromUtf8("nr_konta_lineEdit"));
        nr_konta_lineEdit->setGeometry(QRect(120, 190, 371, 27));
        imie_label = new QLabel(Dane_Firmy);
        imie_label->setObjectName(QString::fromUtf8("imie_label"));
        imie_label->setGeometry(QRect(0, 20, 73, 19));
        nazwisko_label = new QLabel(Dane_Firmy);
        nazwisko_label->setObjectName(QString::fromUtf8("nazwisko_label"));
        nazwisko_label->setGeometry(QRect(0, 50, 81, 19));
        nazwa_firmy_label = new QLabel(Dane_Firmy);
        nazwa_firmy_label->setObjectName(QString::fromUtf8("nazwa_firmy_label"));
        nazwa_firmy_label->setGeometry(QRect(0, 80, 101, 19));
        adres_label = new QLabel(Dane_Firmy);
        adres_label->setObjectName(QString::fromUtf8("adres_label"));
        adres_label->setGeometry(QRect(0, 110, 121, 19));
        nip_label = new QLabel(Dane_Firmy);
        nip_label->setObjectName(QString::fromUtf8("nip_label"));
        nip_label->setGeometry(QRect(0, 140, 73, 19));
        regon_label = new QLabel(Dane_Firmy);
        regon_label->setObjectName(QString::fromUtf8("regon_label"));
        regon_label->setGeometry(QRect(0, 170, 73, 19));
        nr_konta_label = new QLabel(Dane_Firmy);
        nr_konta_label->setObjectName(QString::fromUtf8("nr_konta_label"));
        nr_konta_label->setGeometry(QRect(0, 200, 81, 19));
        buttonBox = new QDialogButtonBox(Dane_Firmy);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(300, 290, 189, 34));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        logo_label = new QLabel(Dane_Firmy);
        logo_label->setObjectName(QString::fromUtf8("logo_label"));
        logo_label->setGeometry(QRect(0, 260, 73, 19));
        logo_toolButton = new QToolButton(Dane_Firmy);
        logo_toolButton->setObjectName(QString::fromUtf8("logo_toolButton"));
        logo_toolButton->setGeometry(QRect(460, 250, 31, 27));
        logo_toolButton->setMinimumSize(QSize(31, 27));
        logo_toolButton->setMaximumSize(QSize(31, 27));
        logo_lineEdit = new QLineEdit(Dane_Firmy);
        logo_lineEdit->setObjectName(QString::fromUtf8("logo_lineEdit"));
        logo_lineEdit->setGeometry(QRect(120, 250, 341, 27));
        telefon_kontaktowy_label = new QLabel(Dane_Firmy);
        telefon_kontaktowy_label->setObjectName(QString::fromUtf8("telefon_kontaktowy_label"));
        telefon_kontaktowy_label->setGeometry(QRect(0, 230, 151, 19));
        telefon_kontaktowy_lineEdit = new QLineEdit(Dane_Firmy);
        telefon_kontaktowy_lineEdit->setObjectName(QString::fromUtf8("telefon_kontaktowy_lineEdit"));
        telefon_kontaktowy_lineEdit->setGeometry(QRect(120, 220, 371, 27));
        QWidget::setTabOrder(imie_lineEdit, nazwisko_lineedit);
        QWidget::setTabOrder(nazwisko_lineedit, nazwa_firmy_lineEdit);
        QWidget::setTabOrder(nazwa_firmy_lineEdit, adres_lineEdit);
        QWidget::setTabOrder(adres_lineEdit, nip_lineEdit);
        QWidget::setTabOrder(nip_lineEdit, regon_lineEdit);
        QWidget::setTabOrder(regon_lineEdit, nr_konta_lineEdit);
        QWidget::setTabOrder(nr_konta_lineEdit, telefon_kontaktowy_lineEdit);
        QWidget::setTabOrder(telefon_kontaktowy_lineEdit, logo_lineEdit);
        QWidget::setTabOrder(logo_lineEdit, logo_toolButton);
        QWidget::setTabOrder(logo_toolButton, buttonBox);

        retranslateUi(Dane_Firmy);

        QMetaObject::connectSlotsByName(Dane_Firmy);
    } // setupUi

    void retranslateUi(QDialog *Dane_Firmy)
    {
        Dane_Firmy->setWindowTitle(QApplication::translate("Dane_Firmy", "Dane firmy", 0, QApplication::UnicodeUTF8));
        imie_label->setText(QApplication::translate("Dane_Firmy", "Imi\304\231", 0, QApplication::UnicodeUTF8));
        nazwisko_label->setText(QApplication::translate("Dane_Firmy", "Nazwisko", 0, QApplication::UnicodeUTF8));
        nazwa_firmy_label->setText(QApplication::translate("Dane_Firmy", "Nazwa firmy", 0, QApplication::UnicodeUTF8));
        adres_label->setText(QApplication::translate("Dane_Firmy", "Adres", 0, QApplication::UnicodeUTF8));
        nip_label->setText(QApplication::translate("Dane_Firmy", "NIP", 0, QApplication::UnicodeUTF8));
        regon_label->setText(QApplication::translate("Dane_Firmy", "Regon", 0, QApplication::UnicodeUTF8));
        nr_konta_label->setText(QApplication::translate("Dane_Firmy", "Nr konta", 0, QApplication::UnicodeUTF8));
        logo_label->setText(QApplication::translate("Dane_Firmy", "Logo", 0, QApplication::UnicodeUTF8));
        logo_toolButton->setText(QApplication::translate("Dane_Firmy", "...", 0, QApplication::UnicodeUTF8));
        telefon_kontaktowy_label->setText(QApplication::translate("Dane_Firmy", "Tel kontaktowy", 0, QApplication::UnicodeUTF8));
        telefon_kontaktowy_lineEdit->setText(QString());
        Q_UNUSED(Dane_Firmy);
    } // retranslateUi

};

namespace Ui {
    class Dane_Firmy: public Ui_Dane_Firmy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANE_FIRMY_H
