#ifndef _listasimple_
#define _listasimple_

struct nodo{
	struct persona *p;
	struct nodo *sig;
}nodo;
struct persona{
char *nombre;
long telefono;
char *direccion;
int fav;

};
struct nodo* crearlista(struct nodo *lista);
struct nodo* agregar(struct nodo *lista,struct persona *p);
void mostrarlista(struct nodo *lista);
struct nodo *eliminar(struct nodo *lista,char *nombre);

#endif
