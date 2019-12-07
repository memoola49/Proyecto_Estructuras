#ifndef _listasimple_
#define _listasimple_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct nodo{
	struct persona *per;
	struct nodo *sig;
}nodo;

struct persona{
char nombre[60];
long telefono;
char direccion[100];
int fav;
}persona;

struct nodo* crearlista(struct nodo *lista);
struct nodo* agregar(struct nodo *lista,struct persona *p);
void mostrarlista(struct nodo *lista);
struct nodo *eliminar(struct nodo *lista,char *n);
void ordenfav(struct nodo *lista);
void mostrarcontacto(struct nodo *lista,char *no);
struct nodo *modificar(struct nodo *lista,char *no);

#endif
