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


#ifndef AKTUALIZUJ_PRODUKT_H
#define AKTUALIZUJ_PRODUKT_H

#include <QtGui>
#include "products.model.cpp"

namespace Ui
{
    class Dodaj_Towar;
}
/**
 *
 * Klasa oknka "Aktualizuj_Produkt". Dziedziczy po QDialog
 *
 * @author EliamLance
 */
class Aktualizuj_Produkt : public QDialog
{
    Q_OBJECT

public:
/**
 *
 * Konstruktor
 *  @param *parent
 *  0 nie moze byc oznaczaloby to ze jest niezaleznym oknem
 */
    Aktualizuj_Produkt(QWidget *parent = 0, QString id=0);
/**
 *
 * Destruktor
 *
 *
 */
    ~Aktualizuj_Produkt();

private:
    Product produkt;
    QString id;
    Ui::Dodaj_Towar *ui;


private slots:
/**
 *
 * Slot - Zaakceptowanie danych aktualizowanego Produktu, wywo³uje signal Finished(QString) z nazwa produktu
 *
 *
 */
    void on_buttonBox_accepted();
/**
 *
 * Slot - Odrzucenie danych aktualizowanego Produktu.
 *
 *
 */
    void on_buttonBox_rejected();

signals:
/**
 *
 * Signal- Udane zakonczenie Aktualizowania Produktu
 * @param nip
 * nazwa dodanego Produkt.
 */
    void Finished(QString name);
};

#endif
