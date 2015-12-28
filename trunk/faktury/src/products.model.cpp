/*
 * File:   clients.model.cpp
 * Author: dext
 * Ported to Windows by: EliamLance
 *
 * Created on 28 maj 2009, 09:20
 */


#include "model.cls.cpp"
#include "sqlite3.h"
#include <string>
#include <map>

#ifndef _PRODUCTS_MODEL_CPP
#define	_PRODUCTS_MODEL_CPP



class Product : public Model {

public:


	Product( ) {
		table_name = "products";
        }


        ~Product( ) { }
	string id;
	string name;
	string vat;
	string stack;
	string price;


	bool load( string load_id ) {
		map<string, string> resoults[ 10000 ];
		select( resoults, "id = " + load_id );
		id = load_id;
		name = resoults[ 0 ][ "name" ];
		vat = resoults[ 0 ][ "vat" ];
                stack = resoults[ 0 ][ "stack" ];
                price = resoults[ 0 ][ "price" ];
		return true;
	}


	bool select( map<string, string> resoults[ 10000 ], string where = "" ) {


		sqlite3_stmt *stmt;
		int i = 0;

		sqlite3_prepare_v2( db_, get_select_sql( where ).c_str( ), -1, &stmt, NULL );
		while( sqlite3_step( stmt ) == SQLITE_ROW ) {
			resoults[ i ][ "id" ] = (char*)sqlite3_column_text( stmt, 0 );
			resoults[ i ][ "name" ] = (char*)sqlite3_column_text( stmt, 1 );
			resoults[ i ][ "vat" ] = (char*)sqlite3_column_text( stmt, 2 );
			resoults[ i ][ "stack" ] = (char*)sqlite3_column_text( stmt, 3 );
			resoults[ i ][ "price" ] = (char*)sqlite3_column_text( stmt, 4 );
			i++;
		}
		sqlite3_finalize( stmt );
		return true;
	}


	bool insert( ) {
		string tmp;
		tmp = "INSERT INTO products ( name, vat, stack, price  ) values( '";
		tmp += name;
		tmp += "', ";
		tmp += vat;
		tmp += ", ";
		tmp += stack;
		tmp += ", ";
		tmp += price;
		tmp += "  )";
		
		return exec( tmp.c_str( ) );
	}


	bool update( ) {
		string tmp;
		tmp = "UPDATE products SET name = '";
		tmp += name;
		tmp += "', vat = ";
		tmp += vat;
		tmp += ", stack = ";
		tmp += stack;
		tmp += ", price = ";
		tmp += price;
		tmp += "  WHERE id = ";
		tmp += id;
		//tmp += " LIMIT 1";
		return exec( tmp.c_str( ) );
	}
private:
};

#endif	/* _CLIENTS_MODEL_CPP */

