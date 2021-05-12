/*
 * Tipo.h
 *
 *  Created on: May 11, 2021
 *      Author: Stefano
 */

#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
	char marca[20];
	char fabrica[20];
	char tipoDeTela[20];
	int idTipo;
}Tipo;

Tipo* prod_new(void);
Tipo* prod_newParam(char* marca,char* fabrica,char* tipoDeTela,int idTipo);
int prod_delete(Tipo* this);

tipo_setMarca(Tipo* this,char* marca);
tipo_getMarca(Tipo* this,int* FlagError);
isValidMarca(char* marca);

tipo_setFabrica(Tipo* this,char* fabrica);
tipo_getFabrica(Tipo* this,int* FlagError);
isValidFabrica(char* fabrica);

tipo_setTipoDeTela(Tipo* this,char* tipoDeTela);
tipo_getTipoDeTela(Tipo* this,int* FlagError);
isValidTipoDeTela(char* tipoDeTela);

tipo_setIdTipo(Tipo* this,int idTipo);
tipo_getIdTipo(Tipo* this,int* FlagError);
isValidIdTipo(int idTipo);

#endif /* TIPO_H_ */
