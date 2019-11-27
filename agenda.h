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

}persona;

struct nodo* crearlista(struct nodo *lista);
struct nodo* agregar(struct nodo *lista,struct persona *p);
void mostrarlista(struct nodo *lista);
struct nodo *eliminar(struct nodo *lista,char *n);
struct nodo *ordenalf(struct nodo *lista);
struct nodo *ordenfav(struct nodo *lista);
struct nodo *ordenarec(struct nodo *lista);



#endif
