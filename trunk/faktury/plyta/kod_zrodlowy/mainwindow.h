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
 * Klasa G��wnego okna. Dziedziczy po QMainWindow
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
 * 0 oznacza �e to okno nie ma rodzica a wi�c jest g�ownym oknem.
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
 * Funkcja do test�w
 * @param test
 * Rodzaj Test�w
 * @param plik
 * �cie�ka do pliku z danymi testowymi
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
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Usun Klienta".
 *
 *
 */

    void on_usun_klienta_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Usun Produkt".
 *
 *
 */
    void on_usun_produktu_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje klikniecie "Szukaj Produktu". Jesli nic nie ma w filtrach zwroci wszystkie produkty.
 *
 *
 */
    void on_szukaj_produktu_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Aktualizuj Produkt"w menu bar.
 *
 *
 */
    void on_actionAktualizuj_produkt_triggered();
/**
 *
 * Slot kt�ry obs�uguje klikniecie "Aktualizuj Produktu". Uzywa Selecta z ID zaznaczonym w tableView, wyswietla dane w "Dodaj Produkt"
 *
 *
 */
    void on_aktualizuj_produkt_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Dodaj Produkt". Inicjuje nowe okno QDialog kt�re przejmuje pe�n� kontrole.
 *
 *
 */
    void on_dodaj_produkt_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Koniec"w menu bar. Konczy program.
 *
 *
 */
    void on_action_Koniec_triggered();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Aktualizuj Klienta"w menu bar. Inicjuje nowe okno QDialog kt�re przejmuje pe�n� kontrole.
 *
 *
 */
    void on_actionAktualizuj_klienta_triggered();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Dodaj Klienta"w menu bar. Inicjuje nowe okno QDialog kt�re przejmuje pe�n� kontrole.
 *
 *
 */
    void on_actionDodaj_klienta_triggered();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Dane firmy"w menu bar. Inicjuje nowe okno QDialog kt�re przejmuje pe�n� kontrole.
 *
 *
 */
    void on_action_Dane_firmy_triggered();
/**
 *
 * Slot kt�ry obs�uguje wci�ni�cie przycisku "Dodaj Klienta". Inicjuje nowe okno QDialog kt�re przejmuje pe�n� kontrole.
 *
 *
 */

    void on_dodaj_klienta_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje zatwierdzenie okna "Dodaj Klienta". Wpisuje NIP dodanego klienta do filtru.
 *
 *
 */
    void on_dodaj_klienta_Confirmed(QString nip);
/**
 *
 * Slot kt�ry obs�uguje klikniecie "Szukaj Klienta". Jesli nic nie ma w filtrach zwroci wszystkich klientow.
 *
 *
 */
    void on_szukaj_klienta_pushButton_clicked();
/**
 *
 * Slot kt�ry obs�uguje klikniecie "Aktualizuj Klienta". Uzywa Selecta z ID zaznaczonym w tableView, wyswietla dane w "Dodaj Klienta"
 *
 *
 */
     void on_aktualizuj_klienta_pushButton_clicked();

/**
 *
 * Slot kt�ry obs�uguje zakonczenie dodawania lub aktualizaji klienta.
 *
 *
 */

     void on_dodaj_produkt_Confirmed(QString name);
};

#endif // MAINWINDOW_H
