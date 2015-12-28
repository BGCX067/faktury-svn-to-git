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


#ifndef DODAJ_KLIENTA_H
#define DODAJ_KLIENTA_H

#include <QtGui>

namespace Ui
{
    class Dodaj_Klienta;
}
/**
 *
 * Klasa oknka "Dodaj Klienta". Dziedziczy po QDialog
 *
 * @author EliamLance
 */
class Dodaj_Klienta : public QDialog
{
    Q_OBJECT

public:
/**
 *
 * Konstruktor
 *  @param *parent
 *  Nie moze wynosic 0, gdyz zwraca rodzicowi nip klienta
  * @param test
 *  Rodzaj Testu
  * @param plik
 *  Œciezka do pliku danych testowych
 */
    Dodaj_Klienta(QWidget *parent = 0, int test=0, QString plik="");
/**
 *
 * Destruktor
 *
 *
 */
    ~Dodaj_Klienta();


private:
    Ui::Dodaj_Klienta *ui;
/**
 *
 * Funkcja do testów
 * @param test
 * Rodzaj Testów
 * @param plik
 * Œcie¿ka do pliku z danymi testowymi
 */
    void Test(int test, QString plik);
    bool test;


private slots:
/**
 *
 * Slot - Zaakceptowanie danych nowego klienta, wywo³uje signal Finished(QString) z NIP'em klienta
 *
 *
 */
    void on_buttonBox_accepted();
/**
 *
 * Slot - Odrzucenie danych nowego klienta.
 *
 *
 */
    void on_buttonBox_rejected();

signals:
/**
 *
 * Signal- Udane zakonczenie dodawania klienta
 * @param nip
 * NIP dodanego klienta.
 */
    void Finished(QString nip);
};

#endif // MAINWINDOW_H
