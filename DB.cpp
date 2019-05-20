/*
 * DB.cpp
 *
 *  Created on: 17/5/2019
 *      Author: ALUMNO
 */
//#include "DB.h"
//#include <string.h>
//#include <stdio.h>
//void DB::abrir()
//{
//	sqlite3 *db;
//	char *zErrMsg = 0;
//	int rc;
//
//	rc = sqlite3_open("tiros.db", &db);
//
//	if( rc )
//	{
//		printf("No se ha podido abrir la base de datos: %s\n", sqlite3_errmsg(db));
//	}
//
//	/* Create SQL statement */
//	char* sql;
//	sql = "CREATE TABLE MOVIMIENTO IF NOT EXISTS("  \
//	      "BOOL ACIERTA, " \
//	      "FILA INT, " \
//	      "COLUMNA CHAR(1), " \
//	      "NOMBRE CHAR(50), " \
//	      "PRIMARY KEY (FILA, COLUMNA));";
//
//	   /* Execute SQL statement */
//	 rc = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);
//	 sqlite3_close(db);
//}
//
//void DB::escribir(bool acierta, int fila, char columna, char* nombre)
//{
//
//	sqlite3 *db;
//	char *zErrMsg = 0;
//	int rc;
//
//	rc = sqlite3_open("tiros.db", &db);
//
//	char query[100];
//	strcat(query, "INSERT INTO MOVIMIENTO VALUES (");
//	if(acierta)
//	{
//		strcat(query, "TRUE, ");
//	}
//	else
//	{
//		strcat(query, "FALSE, ");
//	}
//	strcat(query, (char*)fila);
//	strcat(query, ", '");
//	strcat(query, (char*)columna);
//	strcat(query, "', \"");
//	strcat(query, nombre);
//	strcat(query, "\"");
//
//	rc = sqlite3_exec(db, query, NULL, 0, &zErrMsg);
//	sqlite3_close(db);
//}
