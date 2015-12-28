/* 
 * File:   test.cpp
 * Author: dext
 *
 * Created on 28 maj 2009, 09:19
 */

#include <stdlib.h>
#include <map>
#include <iostream>
#include <fstream>
#include "clients.model.cpp"
#include "products.model.cpp"



using namespace std;


bool porownaj( map<string, string> dane1[ 10000 ], map<string, string> dane2[ 10000 ] ) {
	if( dane1[ 0 ][ "subject" ] != dane2[ 0 ][ "subject" ] ) {
		cout << "Blad! Pole: subject; " << dane1[ 0 ][ "subject" ] << " != " << dane2[ 0 ][ "subject" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "address" ] != dane2[ 0 ][ "address" ] ) {
		cout << "Blad! Pole: address; " << dane1[ 0 ][ "address" ] << " != " << dane2[ 0 ][ "address" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "nip" ] != dane2[ 0 ][ "nip" ] ) {
		cout << "Blad! Pole: nip; " << dane1[ 0 ][ "nip" ] << " != " << dane2[ 0 ][ "nip" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "regon" ] != dane2[ 0 ][ "regon" ] ) {
		cout << "Blad! Pole: regon; " << dane1[ 0 ][ "regon" ] << " != " << dane2[ 0 ][ "regon" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "nr_konta" ] != dane2[ 0 ][ "nr_konta" ] ) {
		cout << "Blad! Pole: nr_konta; " << dane1[ 0 ][ "nr_konta" ] << " != " << dane2[ 0 ][ "nr_konta" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "telefon" ] != dane2[ 0 ][ "telefon" ] ) {
		cout << "Blad! Pole: telefon; " << dane1[ 0 ][ "telefon" ] << " != " << dane2[ 0 ][ "telefon" ] << endl;
		return false;
	}
	return true;
}

bool porownaj_prod( map<string, string> dane1[ 10000 ], map<string, string> dane2[ 10000 ] ) {
	if( dane1[ 0 ][ "name" ] != dane2[ 0 ][ "name" ] ) {
		cout << "Blad! Pole: name; " << dane1[ 0 ][ "name" ] << " != " << dane2[ 0 ][ "name" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "vat" ] != dane2[ 0 ][ "vat" ] ) {
		cout << "Blad! Pole: vat; " << dane1[ 0 ][ "vat" ] << " != " << dane2[ 0 ][ "vat" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "stack" ] != dane2[ 0 ][ "stack" ] ) {
		cout << "Blad! Pole: stack; " << dane1[ 0 ][ "stack" ] << " != " << dane2[ 0 ][ "stack" ] << endl;
		return false;
	}
	if( dane1[ 0 ][ "price" ] != dane2[ 0 ][ "price" ] ) {
		cout << "Blad! Pole: price; " << dane1[ 0 ][ "price" ] << " != " << dane2[ 0 ][ "price" ] << endl;
		return false;
	}
	return true;
}

/*
 * Uruchomienie testu:
 * rm data/db2 &&  make -f Makefile clean && make -f Makefile && clear && ./dist/Debug/GNU-Linux-x86/faktury_nb
 */
int main( int argc, char** argv ) {
	
	// przygotowanie danych
	map<string, string> dane_wejsciowe[ 10000 ];
	
	dane_wejsciowe[ 0 ][ "subject" ]	= "Test 1";
	dane_wejsciowe[ 0 ][ "address" ]	= "Kraków, Kijowska 14";
	dane_wejsciowe[ 0 ][ "nip" ]		= "12345678910";
	dane_wejsciowe[ 0 ][ "regon" ]		= "193861";
	dane_wejsciowe[ 0 ][ "nr_konta" ] 	= "1234-1234-1234-1234-1234-65";
	dane_wejsciowe[ 0 ][ "telefon" ]	= "+48-012-282-12-33";

	//dodanie danych do bazy
	Client Klient;

	Klient.subject	= dane_wejsciowe[ 0 ][ "subject" ];
	Klient.address	= dane_wejsciowe[ 0 ][ "address" ];
	Klient.nip 		= dane_wejsciowe[ 0 ][ "nip" ];
	Klient.regon 	= dane_wejsciowe[ 0 ][ "regon" ];
	Klient.nr_konta = dane_wejsciowe[ 0 ][ "nr_konta" ];
	Klient.telefon 	= dane_wejsciowe[ 0 ][ "telefon" ];
	
	Klient.insert();

	// pobranie danych
	map<string, string> resoults[ 10000 ];
	Klient.select( resoults, "id = 1" );

	// udawany błąd:
	//resoults[ 0 ][ "subject" ] = "dfadsfadsfdsafadsfa";

	cout << endl << "****** TEST: Dodawanie klienta:\t\t";
	if( !porownaj( dane_wejsciowe, resoults ) ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}

	/**
	* Testy aktualizacji danych
	*/

	dane_wejsciowe[ 0 ][ "subject" ]	= "Test 1_update";
	dane_wejsciowe[ 0 ][ "address" ]	= "Kraków, Kijowska 14_update";
	dane_wejsciowe[ 0 ][ "nip" ]		= "1234567891000000";
	dane_wejsciowe[ 0 ][ "regon" ]		= "1938610000";
	dane_wejsciowe[ 0 ][ "nr_konta" ] 	= "1234-1234-1234-1234-1234-65_update";
	dane_wejsciowe[ 0 ][ "telefon" ]	= "+48-012-282-12-33_update";

	Klient.load( "1" );

	Klient.subject	= dane_wejsciowe[ 0 ][ "subject" ];
	Klient.address	= dane_wejsciowe[ 0 ][ "address" ];
	Klient.nip 		= dane_wejsciowe[ 0 ][ "nip" ];
	Klient.regon 	= dane_wejsciowe[ 0 ][ "regon" ];
	Klient.nr_konta = dane_wejsciowe[ 0 ][ "nr_konta" ];
	Klient.telefon 	= dane_wejsciowe[ 0 ][ "telefon" ];
	Klient.update( );
	
	// pobranie danych
	Klient.select( resoults, "id = 1" );

	// udawany błąd:
	//resoults[ 0 ][ "subject" ] = "dfadsfadsfdsafadsfa";

	cout << endl <<  "****** TEST: Aktualizacja klienta:\t ";
	if( !porownaj( dane_wejsciowe, resoults ) ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}
	
	/**
	* test usuwanie klienta
	*/
	
	bool wynik_usuwania = Klient.del( "1" );
	cout << endl <<  "****** TEST: Usuwanie klienta:\t\t";
	if( !wynik_usuwania ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}



	/**
	* Test: dodawanie produktu
	*/
	
	// przygotowanie danych
	map<string, string> dane_wejsciowe2[ 10000 ];
	
	dane_wejsciowe2[ 0 ][ "name" ]	= "Test produkt 1";
	dane_wejsciowe2[ 0 ][ "vat" ]	= "0.22";
	dane_wejsciowe2[ 0 ][ "stack" ]	= "10";
	dane_wejsciowe2[ 0 ][ "price" ]	= "10.67";

	//dodanie danych do bazy
	Product Produkt;

	Produkt.name	= dane_wejsciowe2[ 0 ][ "name" ];
	Produkt.vat		= dane_wejsciowe2[ 0 ][ "vat" ];
	Produkt.stack 	= dane_wejsciowe2[ 0 ][ "stack" ];
	Produkt.price 	= dane_wejsciowe2[ 0 ][ "price" ];
	
	Produkt.insert();

	// pobranie danych
	map<string, string> resoults2[ 10000 ];
	Produkt.select( resoults2, "id = 1" );

	// udawany błąd:
	//resoults[ 0 ][ "subject" ] = "dfadsfadsfdsafadsfa";

	cout << endl << "****** TEST: Dodawanie produktu:\t";
	if( !porownaj_prod( dane_wejsciowe2, resoults2 ) ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}

	/**
	* Testy aktualizacji danych produtków
	*/

	dane_wejsciowe2[ 0 ][ "name" ]	= "Test produkt 1_update";
	dane_wejsciowe2[ 0 ][ "vat" ]	= "0.07";
	dane_wejsciowe2[ 0 ][ "stack" ]	= "100";
	dane_wejsciowe2[ 0 ][ "price" ]	= "17.67";

	Produkt.load( "1" );

	Produkt.name	= dane_wejsciowe2[ 0 ][ "name" ];
	Produkt.vat		= dane_wejsciowe2[ 0 ][ "vat" ];
	Produkt.stack 	= dane_wejsciowe2[ 0 ][ "stack" ];
	Produkt.price 	= dane_wejsciowe2[ 0 ][ "price" ];
	Produkt.update( );
	
	// pobranie danych
	Produkt.select( resoults2, "id = 1" );

	// udawany błąd:
	//resoults2[ 0 ][ "name" ] = "dfadsfadsfdsafadsfa";

	cout << endl <<  "****** TEST: Aktualizacja produktu:\t";
	if( !porownaj_prod( dane_wejsciowe2, resoults2 ) ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}
	
	/**
	* test usuwanie produktu
	*/
	
	bool wynik_usuwania2 = Produkt.del( "1" );
	cout << endl <<  "****** TEST: Usuwanie produktu:\t\t";
	if( !wynik_usuwania2 ) {
		cout << "FALSE!" << endl;
		return 1;
	} else {
		cout << "OK" << endl;
	}
	
	

	cout << endl << "W programie nie znaleziono błędów" << endl << endl;
/* Testy ręczne
	Client Klient;
	Product Produkt;

	Klient.load( "1" );

	Klient.subject = "test2";
	Klient.address = "adres2";
	Klient.nip = "43";
	Klient.regon = "43";
	Klient.nr_konta = "43";
	Klient.telefon = "43";
	Klient.update( );

	Klient.del( "1" );

	Produkt.load( "1" );

	Produkt.name = "testP";
	Produkt.vat = "0.22";
	Produkt.stack = "10";
	Produkt.price = "78";

	Produkt.update();

	map<string, string> resoults[ 10000 ];
	Klient.select( resoults, "nip = 43" );
	cout << endl << resoults[ 0 ][ "nip" ] << endl;
*/
	return 0;
}

