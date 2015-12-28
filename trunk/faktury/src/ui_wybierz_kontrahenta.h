/********************************************************************************
** Form generated from reading ui file 'wybierz_kontrahenta.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WYBIERZ_KONTRAHENTA_H
#define UI_WYBIERZ_KONTRAHENTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *wybierz_kontrahenta_tableView;
    QLabel *szukaj_label;
    QLineEdit *szukaj_lineEdit;
    QPushButton *anuluj_pushButton;
    QPushButton *wybierz_pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(540, 434);
        wybierz_kontrahenta_tableView = new QTableView(Dialog);
        wybierz_kontrahenta_tableView->setObjectName(QString::fromUtf8("wybierz_kontrahenta_tableView"));
        wybierz_kontrahenta_tableView->setGeometry(QRect(0, 40, 541, 351));
        wybierz_kontrahenta_tableView->setMinimumSize(QSize(541, 351));
        wybierz_kontrahenta_tableView->setMaximumSize(QSize(541, 351));
        szukaj_label = new QLabel(Dialog);
        szukaj_label->setObjectName(QString::fromUtf8("szukaj_label"));
        szukaj_label->setGeometry(QRect(0, 10, 81, 19));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        szukaj_label->setFont(font);
        szukaj_lineEdit = new QLineEdit(Dialog);
        szukaj_lineEdit->setObjectName(QString::fromUtf8("szukaj_lineEdit"));
        szukaj_lineEdit->setGeometry(QRect(80, 0, 461, 31));
        anuluj_pushButton = new QPushButton(Dialog);
        anuluj_pushButton->setObjectName(QString::fromUtf8("anuluj_pushButton"));
        anuluj_pushButton->setGeometry(QRect(320, 400, 109, 29));
        wybierz_pushButton = new QPushButton(Dialog);
        wybierz_pushButton->setObjectName(QString::fromUtf8("wybierz_pushButton"));
        wybierz_pushButton->setGeometry(QRect(430, 400, 109, 29));
        QWidget::setTabOrder(szukaj_lineEdit, wybierz_kontrahenta_tableView);
        QWidget::setTabOrder(wybierz_kontrahenta_tableView, anuluj_pushButton);
        QWidget::setTabOrder(anuluj_pushButton, wybierz_pushButton);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Wybierz kontrahenta", 0, QApplication::UnicodeUTF8));
        szukaj_label->setText(QApplication::translate("Dialog", "Szukaj", 0, QApplication::UnicodeUTF8));
        anuluj_pushButton->setText(QApplication::translate("Dialog", "Anuluj", 0, QApplication::UnicodeUTF8));
        wybierz_pushButton->setText(QApplication::translate("Dialog", "Wybierz", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYBIERZ_KONTRAHENTA_H
