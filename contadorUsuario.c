/* 
Crear un programa con una variable global contador. Mostrar un menú con estas opciones: 
 
1. Sumar un numero al contador (el numero que ingresa el usuario) 
2. Restar un numero al contador (el numero lo ingresa el usuario) 
3. Mostrar el valor actual del contador. 
4. Mostrar si el contador es positivo, negativo o cero. 
 
El menu se repite hasta que el usuario ingrese 0. 
 */
 
#include <stdio.h>


float contador;

int main()
{
	int menu;
	float num, num2;
	
	while(1){
		
		printf("------------MENU----------------\n");
		
		printf("1- Sumar un numero al contador\n");
		printf("2-Restar un numero al contado\n");
		printf("3-Mostrar Contador Actual\n");
		printf("4. Mostrar si el contador es positivo, negativo o cero\n");
		printf("0- Salir\n");
		scanf("%d" , &menu);
		
		if (menu == 0){
			printf("Saliendo...\n");
			break;
		}
		
		switch (menu)
		{
			case 1:
				printf("Ingrese Numero A Sumar: \n");
				scanf("%f" , &num);
				contador = contador + num;
				break;
			case 2:
				printf("Ingrese Numero A restar: \n");
				scanf("%f" , &num2);
				contador = contador - num2;
				break;
			case 3:
				printf("El Valor Actual Del Contador es %.2f\n" , contador);
				break;
			case 4:
				if (contador > 0){
					printf("El Contado Es Positivo\n");
				} else if (contador < 0){
					printf("El Numero Es Negativo\n");
				} else if (contador == 0){
					printf("El Contador Permanece en 0\n");
				}
				break;
			case 0:
				printf("Valor Invalido\n");
					
		}
	
		
	}
		return 0;
}
