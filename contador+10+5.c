/*
Crear un programa que muestre un menú con tres opciones 
 1. Sumar 10 a un contador 
 2. Restar 5 al contador 
 3. Mostrar el valor actual del contador. 
El programa debe usar una variable global llamada contador. 
El programa debe repetirse hasta que el usuario ingrese 0.
 */
 
#include <stdio.h>


float contador;

int main()
{
	int menu;
	
	while(1){
		
		printf("------------MENU----------------\n");
		
		printf("1-Sumar 10 al contador\n");
		printf("2-Restar 5 al contador\n");
		printf("3-Mostrar Contador Actual\n");
		printf("0- Salir\n");
		scanf("%d" , &menu);
		
		if (menu == 0){
			printf("Saliendo...\n");
			break;
		}
		
		switch (menu)
		{
			case 1:
				contador = contador + 10;
				break;
			case 2:
				contador = contador - 5;
				break;
			case 3:
				printf("El Valor Actual Del Contador es %.2f\n" , contador);
				break;
			default:
				printf("Valor Invalido\n");
				break;
					
		}
	
		
	}
		return 0;
}
