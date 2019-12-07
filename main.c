#include "Lista.h"
int menu();
struct persona* agregarcontacto();
int numeropersonas (struct nodo *lista);
int main()
{
	struct nodo *p;
struct persona *n=(struct persona*)malloc(sizeof(struct persona));
	char elim[60];
	int e,o;
p=crearlista(p);
	int x = 0;
	while(x == 0)
		switch(menu())
		{
			case 1:
			n=agregarcontacto();
			p=agregar(p,n);

printf("%c",p->per->nombre[0]);
			
				break;
			case 2:
			fflush(stdin);
	printf("Ingrese el nombre completo del contacto a eliminar \n");
	scanf("%[^\n]",elim);
	p=eliminar(p,elim);
				break;
			case 3:
			ordenfav(p);
				break;
			case 4:
			mostrarlista(p);
				break;
			case 5:
				fflush(stdin);
			printf("Ingrese el nombre completo del contacto a Buscar \n");
	scanf("%[^\n]",elim);
	mostrarcontacto(p,elim);

			break;
			case 6:
					fflush(stdin);
	printf("Ingrese el nombre completo del contacto a Buscar \n");
	scanf("%[^\n]",elim);
	p=modificar(p,elim);
			break;
			case 7:
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
	printf("\n 5.- Buscar Contacto");
	printf("\n 6.- modificar contacto");
	printf("\n 7.- Salir \n\n");
	scanf("%d", &selec);
	return selec;
}
struct persona * agregarcontacto()
{
int op;
	struct persona *n=(struct persona *)malloc(sizeof(struct persona));
		fflush(stdin);
	printf("ingrese el nombre del nuevo contacto \n");
	scanf("%[^\n]",n->nombre);
	fflush(stdin);
	printf("ingrese la direccion del nuevo contacto \n");
	scanf("%[^\n]",n->direccion);
	printf("ingrese el numero del nuevo contacto \n");
	scanf("%ld",&n->telefono);
	printf("¿favorito? 1) si, 2) no \n");
	scanf("%d",&op);
	if(op==1)
	{
		n->fav=1;
	}
	else
	{
		n->fav=0;
	}

return n;
}


int numeropersonas (struct nodo *lista)
{
	int p=0;
	while(lista!=NULL)
	{
		p++;
		lista =lista->sig;
	}
	return p;
}
