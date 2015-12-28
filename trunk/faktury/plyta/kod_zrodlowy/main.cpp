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


#include <QtGui>
#include "mainwindow.h"

using namespace std;

/**
 *
 * Funkcja g³ówna inicjuje g³ówne okno i oddaje pe³n¹ kontrole QT.
 *
 * @author EliamLance
 */

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    int test=0;
    QString plik="";
    if(argc >= 3){
        bool ok;
        QString temp;
        temp = temp.fromStdString(argv[1]);
        test = temp.toInt(&ok, 10);
        plik = plik.fromStdString(argv[2]);
    }

    MainWindow main_window(0, test, plik);

    main_window.show();


    return application.exec();
}
