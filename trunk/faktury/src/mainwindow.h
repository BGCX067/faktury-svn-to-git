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


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "clients.model.cpp"
#include "products.model.cpp"
#include <map>
#include <string>

namespace Ui
{
    class MainWindow;
}
/**
 *
 * Klasa G³ównego okna. Dziedziczy po QMainWindow
 *
 * @author EliamLance
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
/**
 *
 * Konstruktor
 * @param *parent
 * 0 oznacza ¿e to okno nie ma rodzica a wiêc jest g³ownym oknem.
 */
    MainWindow(QWidget *parent = 0, int test =0, QString plik= "");
/**
 *
 * Destruktor
 *
 *
 */
    ~MainWindow();

private:
/**
 *
 * Ustawia model ktory bedzie wyswietlany w tabeli klientow
 *
 *
 */
    void Setup_Client_Model();
/**
 *
 * Ustawia model ktory bedzie wyswietlany w tabeli produktow
 *
 *
 */
    void Setup_Product_Model();

/**
 *
 * Funkcja do testów
 * @param test
 * Rodzaj Testów
 * @param plik
 * Œcie¿ka do pliku z danymi testowymi
 */
    void Test(int test, QString plik);

    Ui::MainWindow *ui;
    QAbstractItemModel *client_model;
    QAbstractItemModel *product_model;
    std::map<string,string> clients_data[10000];
    std::map<string,string> products_data[10000];
    Client clients_data_base;
    Product products_data_base;

private slots:

/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Usun Klienta".
 *
 *
 */

    void on_usun_klienta_pushButton_clicked();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Usun Produkt".
 *
 *
 */
    void on_usun_produktu_pushButton_clicked();
/**
 *
 * Slot który obs³uguje klikniecie "Szukaj Produktu". Jesli nic nie ma w filtrach zwroci wszystkie produkty.
 *
 *
 */
    void on_szukaj_produktu_pushButton_clicked();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Aktualizuj Produkt"w menu bar.
 *
 *
 */
    void on_actionAktualizuj_produkt_triggered();
/**
 *
 * Slot który obs³uguje klikniecie "Aktualizuj Produktu". Uzywa Selecta z ID zaznaczonym w tableView, wyswietla dane w "Dodaj Produkt"
 *
 *
 */
    void on_aktualizuj_produkt_pushButton_clicked();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Dodaj Produkt". Inicjuje nowe okno QDialog które przejmuje pe³n¹ kontrole.
 *
 *
 */
    void on_dodaj_produkt_pushButton_clicked();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Koniec"w menu bar. Konczy program.
 *
 *
 */
    void on_action_Koniec_triggered();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Aktualizuj Klienta"w menu bar. Inicjuje nowe okno QDialog które przejmuje pe³n¹ kontrole.
 *
 *
 */
    void on_actionAktualizuj_klienta_triggered();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Dodaj Klienta"w menu bar. Inicjuje nowe okno QDialog które przejmuje pe³n¹ kontrole.
 *
 *
 */
    void on_actionDodaj_klienta_triggered();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Dane firmy"w menu bar. Inicjuje nowe okno QDialog które przejmuje pe³n¹ kontrole.
 *
 *
 */
    void on_action_Dane_firmy_triggered();
/**
 *
 * Slot który obs³uguje wciœniêcie przycisku "Dodaj Klienta". Inicjuje nowe okno QDialog które przejmuje pe³n¹ kontrole.
 *
 *
 */

    void on_dodaj_klienta_pushButton_clicked();
/**
 *
 * Slot który obs³uguje zatwierdzenie okna "Dodaj Klienta". Wpisuje NIP dodanego klienta do filtru.
 *
 *
 */
    void on_dodaj_klienta_Confirmed(QString nip);
/**
 *
 * Slot który obs³uguje klikniecie "Szukaj Klienta". Jesli nic nie ma w filtrach zwroci wszystkich klientow.
 *
 *
 */
    void on_szukaj_klienta_pushButton_clicked();
/**
 *
 * Slot który obs³uguje klikniecie "Aktualizuj Klienta". Uzywa Selecta z ID zaznaczonym w tableView, wyswietla dane w "Dodaj Klienta"
 *
 *
 */
     void on_aktualizuj_klienta_pushButton_clicked();

/**
 *
 * Slot który obs³uguje zakonczenie dodawania lub aktualizaji klienta.
 *
 *
 */

     void on_dodaj_produkt_Confirmed(QString name);
};

#endif // MAINWINDOW_H
