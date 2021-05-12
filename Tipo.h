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

Tipo* tipo_new(void);
Tipo* tipo_newParam(char* marca,char* fabrica,char* tipoDeTela,int idTipo);
int tipo_delete(Tipo* this);

int tipo_setMarca(Tipo* this,char* marca);
char* tipo_getMarca(Tipo* this,int* FlagError);
int isValidMarca(char* marca);

int tipo_setFabrica(Tipo* this,char* fabrica);
char*tipo_getFabrica(Tipo* this,int* FlagError);
int isValidFabrica(char* fabrica);

int tipo_setTipoDeTela(Tipo* this,char* tipoDeTela);
char*tipo_getTipoDeTela(Tipo* this,int* FlagError);
int isValidTipoDeTela(char* tipoDeTela);

int tipo_setIdTipo(Tipo* this,int idTipo);
int tipo_getIdTipo(Tipo* this,int* FlagError);
int isValidIdTipo(int idTipo);

#endif /* TIPO_H_ */
