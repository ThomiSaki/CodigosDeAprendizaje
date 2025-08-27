/*Un camión consume 20 litros de combustible cada 100 km a 90 km/h. Se desea calcular el combustible total necesario para 
un viaje de 600 km.
El programa debe pedir la velocidad medida en 4 puntos distintos del viaje.
Con el promedio de esas velocidades, calcular el consumo ajustado (proporcional al promedio con respecto a 90 km/h).
Finalmente, mostrar el total de combustible consumido.*/

#include <stdio.h>
int main()
{
	float viaje = 400.0;
	float consumo_km;
	float velocidad1 = 70.0, velocidad2 = 80.0, velocidad3 = 90.0;	
	float prom_viaje, total_combus = 0;
	

	prom_viaje = (velocidad1 + velocidad2 + velocidad3) / 3;
	
	consumo_km = (prom_viaje / 80) * (18.0 / 100.0);
	total_combus = viaje * consumo_km;
	
	printf("Combustible consumido es de %.2f" , total_combus);
	
	
}
