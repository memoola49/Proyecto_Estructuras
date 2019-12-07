#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	nuevo->per=p;
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
int pos=0;
   if(lista==NULL)
   {
     printf("no hay elementos en la lista \n");
   }
   else
   {
      while(lista!=NULL)
      {
      	 printf("Contacto : %d \n", pos+1);
         printf("NOMBRE : %s \n", lista->per->nombre);
         printf("TELEFONO : %ld \n", lista->per->telefono);
         printf("DIRECCION: %s \n", lista->per->direccion);
         printf("--------------------------\n");
         lista=lista->sig;
         pos++;
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
	while(aux1!=NULL && strcmp(strlwr(aux1->per->nombre),(strlwr(n)))!=0)
	{
		aux2=aux1;
		aux1=aux1->sig;
	}
	if(aux1==NULL)
	{
		printf("El contacto no se encuentra en la lista \n");
		return lista;
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

void ordenalf(struct nodo *lista)
{
	 struct nodo *laux = crearlista(laux);
	 struct nodo *inicio,*siguiente,*temp;

	 if(lista!=NULL)
	 { 
	 inicio=lista;
		 while(inicio!=NULL)
		 {
		 	siguiente=inicio->sig;
		 while(siguiente!=NULL)
		 {
		 	if(strcmp(inicio->per->nombre,siguiente->per->nombre)==1)
		 	{
		 		temp->per=inicio->per;
		 		inicio->per=siguiente->per;
		 		siguiente->per=temp->per;
			 }
			 siguiente=siguiente->sig;
		 }
		 inicio=inicio->sig;
	 }
	 }
	 mostrarlista(lista);
	 
}

void mostrarcontacto(struct nodo *lista,char *no)
{
	
		struct nodo *aux1,*aux2;
	
	if(lista==NULL)
	{
		printf("lista vacia \n");
	}
	
	else {
		aux1=lista;

	while(aux1!=NULL )
	{
   	if(strcmp(strlwr(aux1->per->nombre),(strlwr(no)))==0)
   	{
   		printf("Contacto : \n" );
        printf("NOMBRE : %s \n", aux1->per->nombre);
         printf("TELEFONO : %ld \n", aux1->per->telefono);
         printf("DIRECCION: %s \n", aux1->per->direccion);
         printf("--------------------------\n");
	   }
aux1=aux1->sig;
if(aux1==NULL)
	printf("el contacto no se encuentra en la lista \n");

	}
		
	}
}

void ordenfav(struct nodo *lista)
{
	struct nodo *aux1,*aux2;
	
	if(lista==NULL)
	{
		printf("lista vacia \n");
	}
	else {
		aux1=lista;

	while(aux1!=NULL )
	{
   	if(aux1->per->fav==1)
   	{
   		printf("Contacto :" );
        printf("NOMBRE : %s \n", aux1->per->nombre);
         printf("TELEFONO : %ld \n", aux1->per->telefono);
         printf("DIRECCION: %s \n", aux1->per->direccion);
         printf("--------------------------\n");
	   }
aux1=aux1->sig;
if(aux1==NULL)
	printf("NO TIENE CONTACTOS FAVORITOS \n");

	}
		
	}
}

struct nodo *modificar(struct nodo *lista,char *no)
{
	struct nodo *aux1,*aux2;
	int o;
	if(lista==NULL)
	{
		printf("lista vacia \n");
	}
	else {
		aux1=lista;
	while(aux1!=NULL && strcmp(strlwr(aux1->per->nombre),(strlwr(no)))!=0)
	{
		aux1=aux1->sig;
	}
	if(aux1==NULL)
	{
		printf("El contacto no se encuentra en la lista \n");
		return lista;
	}
int op;
strcpy(aux1->per->nombre,"");
strcpy(aux1->per->direccion,"");
		fflush(stdin);
	printf("ingrese el nombre del contacto \n");
	scanf("%[^\n]",aux1->per->nombre);
	fflush(stdin);
	printf("ingrese la direccion del contacto \n");
	scanf("%[^\n]",aux1->per->direccion);
	printf("ingrese el numero del contacto \n");
	scanf("%ld",&aux1->per->telefono);
	printf("¿favorito? 1) si, 2) no \n");
	scanf("%d",&op);
	if(op==1)
	aux1->per->fav=1;
	else
		aux1->per->fav=0;
	return aux1;
}
}
