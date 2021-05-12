/*
 * Producto.h
 *
 *  Created on: May 11, 2021
 *      Author: Stefano
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

typedef struct{
	int idProducto;
	char descripcion[40];
	char nacionalidad[40];
	char tipo[40];
	float precioPorUnidad;
}Producto;

Producto* prod_new(void);
Producto* prod_newParam(char* descripcion,char* nacionalidad,char* tipo,int idProducto,float* precioPorUnidad);
int prod_delete(Producto* this);

int prod_setDescripcion(Producto* this,char* descripcion);
char* prod_getDescripcion(Producto* this,int* flagError);
int isValidDescripcion(char* descripcion);

int prod_setNacionalidad(Producto* this,char* nacionalidad);
char* prod_getNacionalidad(Producto* this,int* flagError);
int isValidNacionalidad(char* nacionalidad);

int prod_setTipo(Producto* this,char* tipo);
char* prod_getTipo(Producto* this,int* flagError);
int isValidTipo(char* tipo);

int prod_setPrecioPorUnidad(Producto* this,float* precioPorUnidad);
float* prod_getPrecioPorUnidad(Producto* this,int* flagError);
int isValidPrecioPorUnidad(float* precioPorUnidad);

int prod_setIdProducto(Producto* this,int idProducto);
int prod_getIdProducto(Producto* this,int* flagError);
int isValidId(int id);


#endif /* PRODUCTO_H_ */
