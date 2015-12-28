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

#ifndef AKTUALIZUJ_KLIENTA_H
#define AKTUALIZUJ_KLIENTA_H

#include <QtGui>
#include "clients.model.cpp"

namespace Ui
{
    class Dodaj_Klienta;
}
/**
 *
 * Klasa oknka "Aktualizuj_Klienta". Dziedziczy po QDialog
 *
 * @author EliamLance
 */
class Aktualizuj_Klienta : public QDialog
{
    Q_OBJECT

public:
/**
 *
 * Konstruktor
 *  @param *parent
 *  0 nie moze byc oznaczaloby to ze jest niezaleznym oknem
 */
    Aktualizuj_Klienta(QWidget *parent = 0, QString id=0);
/**
 *
 * Destruktor
 *
 *
 */
    ~Aktualizuj_Klienta();

private:
    Client klient;
    QString id;
    Ui::Dodaj_Klienta *ui;


private slots:
/**
 *
 * Slot - Zaakceptowanie danych aktualizowanego klienta, wywo³uje signal Finished(QString) z NIP'em klienta
 *
 *
 */
    void on_buttonBox_accepted();
/**
 *
 * Slot - Odrzucenie danych aktualizowanego klienta.
 *
 *
 */
    void on_buttonBox_rejected();

signals:
/**
 *
 * Signal- Udane zakonczenie Aktualizowania klienta
 * @param nip
 * NIP dodanego klienta.
 */
    void Finished(QString nip);
};

#endif
