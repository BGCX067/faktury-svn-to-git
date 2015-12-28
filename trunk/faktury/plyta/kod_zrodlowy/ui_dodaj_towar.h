/********************************************************************************
** Form generated from reading ui file 'dodaj_towar.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DODAJ_TOWAR_H
#define UI_DODAJ_TOWAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_Towar
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *Nazwa_Produktu_lineEdit;
    QLabel *Nazwa_Produktu_label;
    QLabel *Cena_netto_label;
    QLineEdit *Cena_Netto_lineEdit;
    QLabel *Typ_label;
    QComboBox *Typ_comboBox;
    QComboBox *VAT_comboBox;
    QLabel *VAT_label;
    QLineEdit *Producent_lineEdit;
    QLabel *Producent_label;
    QLabel *ilosc_label;
    QLineEdit *ilosc_lineEdit;

    void setupUi(QDialog *Dodaj_Towar)
    {
        if (Dodaj_Towar->objectName().isEmpty())
            Dodaj_Towar->setObjectName(QString::fromUtf8("Dodaj_Towar"));
        Dodaj_Towar->resize(620, 180);
        Dodaj_Towar->setMinimumSize(QSize(620, 180));
        Dodaj_Towar->setMaximumSize(QSize(620, 180));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/produkty.png")), QIcon::Normal, QIcon::Off);
        Dodaj_Towar->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Dodaj_Towar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(420, 140, 189, 34));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Nazwa_Produktu_lineEdit = new QLineEdit(Dodaj_Towar);
        Nazwa_Produktu_lineEdit->setObjectName(QString::fromUtf8("Nazwa_Produktu_lineEdit"));
        Nazwa_Produktu_lineEdit->setGeometry(QRect(140, 10, 471, 29));
        Nazwa_Produktu_label = new QLabel(Dodaj_Towar);
        Nazwa_Produktu_label->setObjectName(QString::fromUtf8("Nazwa_Produktu_label"));
        Nazwa_Produktu_label->setGeometry(QRect(0, 20, 131, 19));
        QFont font;
        font.setPointSize(13);
        Nazwa_Produktu_label->setFont(font);
        Cena_netto_label = new QLabel(Dodaj_Towar);
        Cena_netto_label->setObjectName(QString::fromUtf8("Cena_netto_label"));
        Cena_netto_label->setGeometry(QRect(140, 80, 91, 19));
        Cena_Netto_lineEdit = new QLineEdit(Dodaj_Towar);
        Cena_Netto_lineEdit->setObjectName(QString::fromUtf8("Cena_Netto_lineEdit"));
        Cena_Netto_lineEdit->setGeometry(QRect(240, 70, 110, 29));
        Typ_label = new QLabel(Dodaj_Towar);
        Typ_label->setObjectName(QString::fromUtf8("Typ_label"));
        Typ_label->setGeometry(QRect(140, 50, 31, 19));
        Typ_comboBox = new QComboBox(Dodaj_Towar);
        Typ_comboBox->setObjectName(QString::fromUtf8("Typ_comboBox"));
        Typ_comboBox->setGeometry(QRect(240, 40, 110, 29));
        VAT_comboBox = new QComboBox(Dodaj_Towar);
        VAT_comboBox->setObjectName(QString::fromUtf8("VAT_comboBox"));
        VAT_comboBox->setGeometry(QRect(500, 70, 110, 29));
        VAT_label = new QLabel(Dodaj_Towar);
        VAT_label->setObjectName(QString::fromUtf8("VAT_label"));
        VAT_label->setGeometry(QRect(440, 80, 31, 20));
        Producent_lineEdit = new QLineEdit(Dodaj_Towar);
        Producent_lineEdit->setObjectName(QString::fromUtf8("Producent_lineEdit"));
        Producent_lineEdit->setGeometry(QRect(140, 100, 471, 29));
        Producent_label = new QLabel(Dodaj_Towar);
        Producent_label->setObjectName(QString::fromUtf8("Producent_label"));
        Producent_label->setGeometry(QRect(0, 110, 91, 19));
        ilosc_label = new QLabel(Dodaj_Towar);
        ilosc_label->setObjectName(QString::fromUtf8("ilosc_label"));
        ilosc_label->setGeometry(QRect(440, 50, 51, 19));
        ilosc_lineEdit = new QLineEdit(Dodaj_Towar);
        ilosc_lineEdit->setObjectName(QString::fromUtf8("ilosc_lineEdit"));
        ilosc_lineEdit->setGeometry(QRect(500, 40, 110, 29));
        QWidget::setTabOrder(Nazwa_Produktu_lineEdit, Typ_comboBox);
        QWidget::setTabOrder(Typ_comboBox, Cena_Netto_lineEdit);
        QWidget::setTabOrder(Cena_Netto_lineEdit, ilosc_lineEdit);
        QWidget::setTabOrder(ilosc_lineEdit, VAT_comboBox);
        QWidget::setTabOrder(VAT_comboBox, Producent_lineEdit);
        QWidget::setTabOrder(Producent_lineEdit, buttonBox);

        retranslateUi(Dodaj_Towar);

        QMetaObject::connectSlotsByName(Dodaj_Towar);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_Towar)
    {
        Dodaj_Towar->setWindowTitle(QApplication::translate("Dodaj_Towar", "Dodaj produkt", 0, QApplication::UnicodeUTF8));
        Nazwa_Produktu_label->setText(QApplication::translate("Dodaj_Towar", "Nazwa Produktu", 0, QApplication::UnicodeUTF8));
        Cena_netto_label->setText(QApplication::translate("Dodaj_Towar", "Cena netto", 0, QApplication::UnicodeUTF8));
        Typ_label->setText(QApplication::translate("Dodaj_Towar", "Typ", 0, QApplication::UnicodeUTF8));
        Typ_comboBox->clear();
        Typ_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dodaj_Towar", "Towar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dodaj_Towar", "Us\305\202uga", 0, QApplication::UnicodeUTF8)
        );
        VAT_comboBox->clear();
        VAT_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dodaj_Towar", "zw", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dodaj_Towar", "0%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dodaj_Towar", "3%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dodaj_Towar", "7%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dodaj_Towar", "22%", 0, QApplication::UnicodeUTF8)
        );
        VAT_label->setText(QApplication::translate("Dodaj_Towar", "VAT", 0, QApplication::UnicodeUTF8));
        Producent_label->setText(QApplication::translate("Dodaj_Towar", "Producent", 0, QApplication::UnicodeUTF8));
        ilosc_label->setText(QApplication::translate("Dodaj_Towar", "Ilo\305\233\304\207", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dodaj_Towar);
    } // retranslateUi

};

namespace Ui {
    class Dodaj_Towar: public Ui_Dodaj_Towar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_TOWAR_H
