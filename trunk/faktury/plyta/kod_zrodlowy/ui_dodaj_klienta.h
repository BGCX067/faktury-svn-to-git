/********************************************************************************
** Form generated from reading ui file 'dodaj_klienta.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DODAJ_KLIENTA_H
#define UI_DODAJ_KLIENTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_Klienta
{
public:
    QLineEdit *Imie_lineEdit;
    QLineEdit *Nazwisko_lineedit;
    QLineEdit *Nazwa_Firmy_lineEdit;
    QLineEdit *Adres_lineEdit;
    QLineEdit *NIP_lineEdit;
    QLineEdit *Regon_lineEdit;
    QLineEdit *Nr_Konta_lineEdit;
    QLabel *Imie_label;
    QLabel *Nazwisko_label;
    QLabel *Nazwa_Firmy_label;
    QLabel *Adres_label;
    QLabel *NIP_label;
    QLabel *Regon_label;
    QLabel *Nr_Konta_label;
    QDialogButtonBox *buttonBox;
    QLabel *telefon_kontaktowy_label;
    QLineEdit *telefon_kontaktowy_lineEdit;

    void setupUi(QDialog *Dodaj_Klienta)
    {
        if (Dodaj_Klienta->objectName().isEmpty())
            Dodaj_Klienta->setObjectName(QString::fromUtf8("Dodaj_Klienta"));
        Dodaj_Klienta->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dodaj_Klienta->sizePolicy().hasHeightForWidth());
        Dodaj_Klienta->setSizePolicy(sizePolicy);
        Dodaj_Klienta->setMinimumSize(QSize(500, 300));
        Dodaj_Klienta->setMaximumSize(QSize(500, 300));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/klienci.png")), QIcon::Normal, QIcon::Off);
        Dodaj_Klienta->setWindowIcon(icon);
        Imie_lineEdit = new QLineEdit(Dodaj_Klienta);
        Imie_lineEdit->setObjectName(QString::fromUtf8("Imie_lineEdit"));
        Imie_lineEdit->setGeometry(QRect(120, 10, 371, 27));
        Nazwisko_lineedit = new QLineEdit(Dodaj_Klienta);
        Nazwisko_lineedit->setObjectName(QString::fromUtf8("Nazwisko_lineedit"));
        Nazwisko_lineedit->setGeometry(QRect(120, 40, 371, 27));
        Nazwa_Firmy_lineEdit = new QLineEdit(Dodaj_Klienta);
        Nazwa_Firmy_lineEdit->setObjectName(QString::fromUtf8("Nazwa_Firmy_lineEdit"));
        Nazwa_Firmy_lineEdit->setGeometry(QRect(120, 70, 371, 27));
        Adres_lineEdit = new QLineEdit(Dodaj_Klienta);
        Adres_lineEdit->setObjectName(QString::fromUtf8("Adres_lineEdit"));
        Adres_lineEdit->setGeometry(QRect(120, 100, 371, 27));
        NIP_lineEdit = new QLineEdit(Dodaj_Klienta);
        NIP_lineEdit->setObjectName(QString::fromUtf8("NIP_lineEdit"));
        NIP_lineEdit->setGeometry(QRect(120, 130, 371, 27));
        NIP_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Regon_lineEdit = new QLineEdit(Dodaj_Klienta);
        Regon_lineEdit->setObjectName(QString::fromUtf8("Regon_lineEdit"));
        Regon_lineEdit->setGeometry(QRect(120, 160, 371, 27));
        Nr_Konta_lineEdit = new QLineEdit(Dodaj_Klienta);
        Nr_Konta_lineEdit->setObjectName(QString::fromUtf8("Nr_Konta_lineEdit"));
        Nr_Konta_lineEdit->setGeometry(QRect(120, 190, 371, 27));
        Imie_label = new QLabel(Dodaj_Klienta);
        Imie_label->setObjectName(QString::fromUtf8("Imie_label"));
        Imie_label->setGeometry(QRect(0, 20, 73, 19));
        Nazwisko_label = new QLabel(Dodaj_Klienta);
        Nazwisko_label->setObjectName(QString::fromUtf8("Nazwisko_label"));
        Nazwisko_label->setGeometry(QRect(0, 50, 81, 19));
        Nazwa_Firmy_label = new QLabel(Dodaj_Klienta);
        Nazwa_Firmy_label->setObjectName(QString::fromUtf8("Nazwa_Firmy_label"));
        Nazwa_Firmy_label->setGeometry(QRect(0, 80, 101, 19));
        Adres_label = new QLabel(Dodaj_Klienta);
        Adres_label->setObjectName(QString::fromUtf8("Adres_label"));
        Adres_label->setGeometry(QRect(0, 110, 121, 19));
        NIP_label = new QLabel(Dodaj_Klienta);
        NIP_label->setObjectName(QString::fromUtf8("NIP_label"));
        NIP_label->setGeometry(QRect(0, 140, 73, 19));
        Regon_label = new QLabel(Dodaj_Klienta);
        Regon_label->setObjectName(QString::fromUtf8("Regon_label"));
        Regon_label->setGeometry(QRect(0, 170, 73, 19));
        Nr_Konta_label = new QLabel(Dodaj_Klienta);
        Nr_Konta_label->setObjectName(QString::fromUtf8("Nr_Konta_label"));
        Nr_Konta_label->setGeometry(QRect(0, 200, 81, 19));
        buttonBox = new QDialogButtonBox(Dodaj_Klienta);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(300, 260, 189, 34));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        telefon_kontaktowy_label = new QLabel(Dodaj_Klienta);
        telefon_kontaktowy_label->setObjectName(QString::fromUtf8("telefon_kontaktowy_label"));
        telefon_kontaktowy_label->setGeometry(QRect(0, 230, 151, 19));
        telefon_kontaktowy_lineEdit = new QLineEdit(Dodaj_Klienta);
        telefon_kontaktowy_lineEdit->setObjectName(QString::fromUtf8("telefon_kontaktowy_lineEdit"));
        telefon_kontaktowy_lineEdit->setGeometry(QRect(150, 220, 341, 27));
        QWidget::setTabOrder(Imie_lineEdit, Nazwisko_lineedit);
        QWidget::setTabOrder(Nazwisko_lineedit, Nazwa_Firmy_lineEdit);
        QWidget::setTabOrder(Nazwa_Firmy_lineEdit, Adres_lineEdit);
        QWidget::setTabOrder(Adres_lineEdit, NIP_lineEdit);
        QWidget::setTabOrder(NIP_lineEdit, Regon_lineEdit);
        QWidget::setTabOrder(Regon_lineEdit, Nr_Konta_lineEdit);
        QWidget::setTabOrder(Nr_Konta_lineEdit, telefon_kontaktowy_lineEdit);
        QWidget::setTabOrder(telefon_kontaktowy_lineEdit, buttonBox);

        retranslateUi(Dodaj_Klienta);

        QMetaObject::connectSlotsByName(Dodaj_Klienta);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_Klienta)
    {
        Dodaj_Klienta->setWindowTitle(QApplication::translate("Dodaj_Klienta", "Dodaj klienta", 0, QApplication::UnicodeUTF8));
        Imie_label->setText(QApplication::translate("Dodaj_Klienta", "Imi\304\231", 0, QApplication::UnicodeUTF8));
        Nazwisko_label->setText(QApplication::translate("Dodaj_Klienta", "Nazwisko", 0, QApplication::UnicodeUTF8));
        Nazwa_Firmy_label->setText(QApplication::translate("Dodaj_Klienta", "Nazwa firmy", 0, QApplication::UnicodeUTF8));
        Adres_label->setText(QApplication::translate("Dodaj_Klienta", "Adres", 0, QApplication::UnicodeUTF8));
        NIP_label->setText(QApplication::translate("Dodaj_Klienta", "NIP", 0, QApplication::UnicodeUTF8));
        Regon_label->setText(QApplication::translate("Dodaj_Klienta", "Regon", 0, QApplication::UnicodeUTF8));
        Nr_Konta_label->setText(QApplication::translate("Dodaj_Klienta", "Nr konta", 0, QApplication::UnicodeUTF8));
        telefon_kontaktowy_label->setText(QApplication::translate("Dodaj_Klienta", "Telefon kontaktowy", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dodaj_Klienta);
    } // retranslateUi

};

namespace Ui {
    class Dodaj_Klienta: public Ui_Dodaj_Klienta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_KLIENTA_H
