/*
        This program is free software; you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation; either version 2 of the License, or
        (at your option) any later version.

        This program is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with this program; if not, write to the Free Software
        Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
        MA 02110-1301, USA.

*/


#ifndef DODAJ_PRODUKT_H
#define DODAJ_PRODUKT_H

#include <QtGui>
#include "products.model.cpp"

namespace Ui
{
    class Dodaj_Towar;
}
/**
 *
 * Klasa oknka "Dodaj Produkt". Dziedziczy po QDialog
 *
 * @author EliamLance
 */
class Dodaj_Produkt : public QDialog
{
    Q_OBJECT

public:
/**
 *
 * Konstruktor
 *  @param *parent
 *  Nie moze wynosic 0
 */
    Dodaj_Produkt(QWidget *parent = 0);
/**
 *
 * Destruktor
 *
 *
 */
    ~Dodaj_Produkt();

private:
    Ui::Dodaj_Towar *ui;


private slots:
/**
 *
 * Slot - Zaakceptowanie danych nowego produktu, wywo³uje signal Finished(QString) z nazwa produktu
 *
 *
 */
    void on_buttonBox_accepted();
/**
 *
 * Slot - Odrzucenie danych nowego produktu.
 *
 *
 */
    void on_buttonBox_rejected();

signals:
/**
 *
 * Signal- Udane zakonczenie dodawania produktu
 * @param nazwa
 * Nazwa dodanego produktu.
 */
    void Finished(QString nazwa);
};

#endif // MAINWINDOW_H
