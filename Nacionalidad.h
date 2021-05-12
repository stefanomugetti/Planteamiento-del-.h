/*
 * Nacionalidad.h
 *
 *  Created on: May 11, 2021
 *      Author: Stefano
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_

typedef struct{
	int idNacionalidad;
	char descripcion[50];
}Nacionalidad;

Nacionalidad* nac_new(void);
Nacionalidad* nac_newParam(char* descripcion,int idNacionalidad);
int nac_delete(Nacionalidad* this);

int nac_setDescripcion(Nacionalidad* this,char* descripcion);
char* nac_getDescripcion(Nacionalidad* this,int* FlagError);
int isValidDescripcion(char* descripcion);

int nac_setIdNacionalidad(Nacionalidad* this,int idNacionalidad);
int nac_getIdNacionalidad(Nacionalidad* this,int* FlagError);
int isValidIdNacionalidad(int idNacionalidad);

#endif /* NACIONALIDAD_H_ */
