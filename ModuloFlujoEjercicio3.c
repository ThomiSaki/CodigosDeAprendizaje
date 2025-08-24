/*Simular el tiro de una moneda para 1, 10, 100, 1000 y 10000 
intentos. Mostrar el porcentaje de ocurrencia de cara y seca*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cara = 0 , seca = 0, resultado = 0, i;
	float ttl_lanzamientos = 0, porcentaje_seca = 0, porcentaje_cara = 0;
	
	resultado = rand() % 2;
	
	if (resultado == 0){
		printf("Cara\n");
	} else {
		printf("Seca\n");
	}
	for (i = 0 ; i < 10000 ; i++){
		if (rand() % 2 == 0){
			cara++;
		} else {
			seca++;
		}

	}
		
		ttl_lanzamientos = cara + seca;
		porcentaje_cara = (cara * 100.0) / ttl_lanzamientos;
		porcentaje_seca = (seca * 100.0) / ttl_lanzamientos;
		
		printf("cara: %d Veces\n" , cara);
		printf("seca: %d Veces\n" , seca);
		
		printf("Porcentaje de tiro en cara %.2f\n" , porcentaje_cara);
		printf("Porcentaje de tiro en seca %.2f\n" , porcentaje_seca);
}

