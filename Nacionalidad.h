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

nac_setDescripcion(Tipo* this,char* descripcion);
nac_getDescripcion(Tipo* this,int* FlagError);
isValidDescripcion(char* descripcion);

nac_setIdNacionalidad(Tipo* this,int idNacionalidad);
nac_getIdNacionalidad(Tipo* this,int* FlagError);
isValidIdNacionalidad(int idNacionalidad);

#endif /* NACIONALIDAD_H_ */
