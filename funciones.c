#include "agenda.h"
#include <stdlib.h>
#include <stdio.h>

struct nodo* crearlista(struct nodo *lista)
{
	lista=NULL;
	return lista;
}

struct nodo* agregar(struct nodo *lista,struct persona *p)
{
	
	struct nodo *nuevo;
	nuevo=(struct nodo *)malloc(sizeof(struct nodo));
	struct nodo *aux;
	nuevo->p=p;
	nuevo->sig=NULL;
	if(lista==NULL)
	{
		lista=nuevo;
		return lista;
	}
	else{
	aux=lista;
	
		nuevo->sig=aux;
	return nuevo;
	}
	
}
void mostrarlista(struct nodo *lista)
{
	struct nodo *aux;

   if(lista==NULL)
   {
     printf("no hay elementos en la lista \n");
   }
   else
   {
      aux=lista;
      while(aux!=NULL)
      {
         printf(": %s \n", aux->p->nombre);
         printf(": %ld \n", aux->p->telefono);
         printf(": %s \n", aux->p->direccion);
         printf("--------------------------\n");
         aux=aux->sig;
      }
   }
}

struct nodo *eliminar(struct nodo *lista,char *n)
{
	struct nodo *aux1,*aux2;
	
	if(lista==NULL)
	{
		printf("lista vacia \n");
	}
	else {
		aux1=lista;
	aux2=lista;
	while(aux1!=NULL && comparar(lista->p->nombre,n)!=0)
	{
		aux2=aux1;
		aux1=aux1->sig;
	}
	if(aux1==lista)
	{
		lista=aux1->sig;
		free(aux1);
		return lista;
	}
	else{
		aux2->sig=aux1->sig;
		free(aux1);
		return lista;
	}
		
	}
}

int comparar(char *n,char *e)
{
	if(strcmp(n,e)==0)
	{
		return 0;
	}
	return 1;
}
