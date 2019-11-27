#include <stdio.h>
#include "agenda.h"
#include <stdlib.h>


struct persona * agregarcontacto(struct persona *n);

int main()
{
	struct nodo *p;
	struct persona *n;
	char *no =(char *)malloc(sizeof(char));
	
p=crearlista(p);
	int x = 0;
	while(x == 0)
		switch(menu())
		{
			case 1:
				n=agregarcontacto(n);
				p=agregar(p,n);
				break;
			case 2:
				printf("Ingrese el nombre del contacto a borrar");
				gets(no);
				p=eliminar(p,no);
				break;
			case 3:
			
				break;
			case 4:
			mostrarlista(p);
				break;
			case 5:
				x++;
				exit(0);
			default:
				printf("\n Opcion invalida \n");
				break;
		}
	
	
return 0;	
}

int menu()
{
	int selec;	
		
	printf("\n Seleccione una de las siguientes opciones: \n");
	printf("\n 1.- Agregar contacto nuevo");
	printf("\n 2.- Eliminar contacto");
	printf("\n 3.- Contactos Favoritos");
	printf("\n 4.- Mostrar Contactos");
	printf("\n 5.- Salir \n\n");
	scanf("%d", &selec);
	return selec;
}
struct persona *agregarcontacto(struct persona *n)
{
	char *nom=(char *)malloc(sizeof(char));
	char *dir=(char *)malloc(sizeof(char));
	int fav;
	long tel;
	
	n=(struct persona *)malloc(sizeof(struct persona));
	printf("ingrese el nombre del nuevo contacto \n");
	gets(n);
	printf("ingrese la direccion del nuevo contacto \n");
	gets(n->direccion);
	printf("ingrese el numero del nuevo contacto \n");
	scanf("%ld",n->telefono);
return n;
}
