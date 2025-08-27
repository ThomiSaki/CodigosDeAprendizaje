/*Una clínica desea hacer un relevamiento de la atención a sus pacientes en el sector de análisis.
Las personas se atienden según el orden de llegada, mediante las formas P (Prioridad) o N (Normal, sin prioridad).
Por cada atención se registra:
Número de Socio
Forma (‘P’ o ‘N’)
Edad
Hora de registro (atención)
Esta información termina con NRO de Socio cero o negativo.
Se pide informar:
1- Edad promedio de las personas que se atendieron con prioridad.
2- Indicar la edad del mínimo número de socio que se atendió.
3- Cantidad de personas atendidas entre las 7hs y 9hs sin prioridad.*/
#include <stdio.h>

int main()
{
	int num_soc,edad,edad_prio = 0, edad_prom, edad_normal = 0;
	int hs_prio, hs_normal,cant_hs_normal;
	int es_prio = 0, es_normal = 0;
	char prio;
	
	printf("Ingrese 0 o -1 para Finalizar\n");

	while (num_soc > 0){	
	
		printf("Ingrese Nro Socio: \n");
		scanf("%d" , &num_soc);
		printf("Ingrese Por Prioridad 'P' Normal 'N': \n ");
		scanf(" %c" , &prio);

		if(num_soc == 0 || num_soc < 0){
			break;
		}
		if (prio == 'P' || prio == 'p'){
			es_prio++;
			edad_prio = edad_prio + edad;
			printf("Ingrese Horario De Atencion(prioridad): \n");
			scanf("%d", &hs_prio);
			
		} else if(prio == 'N' || prio == 'n'){
			es_normal++;
			edad_normal = edad_normal + edad;
			printf("Ingrese Horario De Atencion(Sin Prioridad): \n");
			scanf("%d", &hs_normal);	
		}
		if(hs_normal > 7 && hs_normal < 10){
			cant_hs_normal++;
		}
	} 	
	if(es_prio > es_normal){
			printf("El Menor Numero de Atendidos Fue Sector Normal\n");
		} else {
			printf("El Menor Numero de Atendidos Fue Sector con Prioridad\n");
		}
		
			edad_prom = edad_prio / es_prio;
	  
			printf("Edad Promedio Con prioridad: %d\n", edad_prom);
			printf("Cantidad De Personas (sector normal )Atendidas entre Las 7 y las 9: %d\n" , cant_hs_normal );
    }

