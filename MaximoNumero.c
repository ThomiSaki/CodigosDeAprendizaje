#include <stdio.h>

int main()
{
	int i;
	float prom_notas, nota_aprob = 0, prom_aprobados = 0;
	int nro_legajo;
	int aprobados = 0,diciembre = 0,marzo= 0,rendir = 0;
	// Mejores
	int max, flag = 0;
	float prom_max;
	
	for(i = 0 ; i < 2 ; i++){
		printf("Ingrese Nro Legajo: \n");
		scanf("%d" , &nro_legajo);
		
		printf("Ingrese Promedio: \n");
		scanf("%f" , &prom_notas);
		
		if(prom_notas >= 7){
			aprobados++;
			nota_aprob += prom_notas;
		} else if (prom_notas < 7 && prom_notas >= 4 ){
			diciembre++;
			rendir++;
		} else if(prom_notas < 4){
			marzo++;
			rendir++;
		} 
		if(flag == 0)
		{
			flag = 1;
			prom_max = prom_notas;
			max = nro_legajo;
		} else
			if(prom_notas > prom_max){
			
			max = nro_legajo;
			prom_max = prom_notas;
		}
	}
	
	
	printf("------------------------Aprobados------------------------------------\n");
	printf("Alumnos Aprobados = %d\n", aprobados);
	printf("------------------------Promedio De Los Aprobados------------------------------------\n");
	if (aprobados > 0){
			prom_aprobados = nota_aprob / aprobados;
			printf("promedio Nota Aprobados = %.2f.\n",prom_aprobados);	
		} else {
			printf("No Hubo Aprobados\n");
		}
		
	printf("------------------------Rinden Examen------------------------------------\n");
	printf("Diciembre = %d\n" , diciembre);
	printf("Marzo = %d\n", marzo);
	printf("------------------------Cantidad De Alumnos Que Deben Rendir------------------------------------\n");
	printf("Total De Alumnos Que Deben Hacer el examen = %d\n", rendir);
	printf("------------------------Mejero Promedio Y Su Legajo------------------------------------\n");
	printf("Legajo Mejor Alumno = %d \ny su promedio es %.2f\n", max, prom_max);
	return 0;
}

