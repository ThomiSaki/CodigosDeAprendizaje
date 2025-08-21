/*
Una maratón tiene 26 millas y 385 yardas. Sabiendo que una milla tiene 1760 yardas, calcular la
distancia de la maratón en kilómetros. 
*/


#include <stdio.h>

int main()
{
	float milla = 1760 , yarda = 1094, kilometros ,ttl_y;

	ttl_y = (milla * 26) + 385 ;
	
	kilometros = ttl_y / yarda;
	
	printf("Los Kilometros son : %.2f" , kilometros);
	
	return 0;
	
}
