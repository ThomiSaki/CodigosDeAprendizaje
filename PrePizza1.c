/*Realizar el algoritmo y codificar en lenguaje C, un programa para la organización de profesor de matemática de un 
establecimiento educativo, que registra de cada uno de sus 30 alumnos los siguientes datos:

Número de legajo.
Promedio de notas.

Según el promedio se necesita saber e informar por pantalla:

Cuántos alumnos aprobaron (promedio mayor o igual a 7) y el promedio de notas que representa (los aprobados).
Cuántos rinden examen en diciembre (promedio menor a 7 y mayor o igual a 4).
Cuántos rinden examen en marzo (promedio menor a 4).

Total de alumnos que deben rendir examen.

Número de legajo del alumno y promedio general, del alumno con mejor promedio.*/

#include <stdio.h>
#define n 2

int main()
{
	
	int legajo, i;
	float prom_nota, prom_aprob;
	int alumnos_aprob = 0,notas_aprob = 0;
	int diciembre = 0, marzo = 0, total_rendir;
	
	//Mejor Alumno
	int mejor_legajo, flag = 0;
	float prom_mejor;
	
	for(i = 0 ; i < n ; i++){
		printf("Alumno %d\n", i + 1);
		printf("Ingrese Numero De Legajo: ");
		scanf("%d" , &legajo);
		printf("Ingrese Promedio De Notas Obtenido: ");
		scanf("%f" , &prom_nota);
		
		if(prom_nota >= 7)
			{
				alumnos_aprob++;
				notas_aprob += prom_nota;
			} 
		else if (prom_nota < 7 && prom_nota >= 4)
			{
				diciembre++;
			}
		else if(prom_nota < 4)
			{
				marzo++;
			}
		
		if (flag == 0)
		{
			flag = 1;
			mejor_legajo = legajo;
			prom_mejor = prom_nota;
		}
		else if (prom_nota > prom_mejor)
		{
			prom_mejor = prom_nota;
			mejor_legajo = legajo;
		}

		}
			prom_aprob = (float)notas_aprob / alumnos_aprob;
			total_rendir = diciembre + marzo;
			
			printf("-----------------------------------------------------------\n");
			printf("Cantidad De Alumnos Aprobados = %d\n", alumnos_aprob);
			printf("El Total General De Nota De Los Aprobados es %.2f\n", (float)prom_aprob);
			printf("-----------------------------------------------------------\n");
			printf("Rinden En Dicimebre = %d\n" , diciembre);
			printf("Rinden En Marzo = %d\n" , marzo);
			printf("Cantidad De Alumnos Que Deben Rendir = %d\n" , total_rendir);
			printf("-----------------------------------------------------------\n");
			printf("El Mejor Alumnos Es %d con un promedio general de %.2f\n", mejor_legajo , prom_mejor);
			printf("-----------------------------------------------------------\n");
}

