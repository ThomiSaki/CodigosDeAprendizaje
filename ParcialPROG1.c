/*
Realizar un programa que permita el ingreso de los siguientes datos de 30 vendedores: Código de vendedor, sueldo, género 
(F o M), unidades vendidas en el mes por el vendedor y antigüedad en años.  
Se pide: 
1. Calcular e informar los descuentos y aumentos teniendo en cuenta los siguientes parámetros: 
a. Si ha vendido menos de 10 unidades en el mes se descontará 10% de su sueldo tras informar “rendimiento 
bajo”. 

b. Si la antigüedad es mayor o igual a 30 años y las unidades vendidas son mayores o iguales a 50 se 
incrementará 35% de su sueldo. 

c. Si vende más de 100 unidades, se incrementará un 50% a su sueldo tras informar “rendimiento alto”. 

2. Informar cuántos vendedores son mujeres y cuántos hombres. 

3. Calcular e informar: - 
El total en pesos de sueldos sin aumentos ni descuentos - - - 
Total en pesos de descuentos 
Total en pesos de aumentos 
Total en pesos de sueldos finales a pagar por la empresa a todos sus empleados. 

4. Finalmente, se desea conocer código de vendedor y sueldo total de quien recibe el mayor sueldo.
*/
#include <stdio.h>

int main()
{
	int i, code_ven, cont_f = 0, cont_m = 0 , unis, anios, mejor_code;
	float sueldo, sueldo_total, sueldo_desc, sueldo_aumen, mejor_sueldo = 0;
	float acum_desc = 0 , acum_aumen = 0, acum_sueldo = 0, acum_total;
	char genero;
	
	for(i = 1 ; i <= 2 ; i++){
		printf("-------Datos Empleado %d-------\n" , i);
		printf("Ingrese Su Codigo: \n");
		scanf("%d" , &code_ven);
		printf("Ingrese Sueldo: \n");
		scanf("%f" , &sueldo);
		printf("Ingrese Genero 'F' Mujer 'M' Hombre \n");
		scanf(" %c" ,&genero);
		printf("Ingrese Las Cantidades Vendidas: \n");
		scanf("%d" , &unis);
		printf("Ingrese Antiguedad En Empresa: \n");
		scanf("%d" , &anios);
		
		if (unis < 10){
			sueldo_desc = sueldo * 0.10;
			sueldo_total = sueldo - sueldo_desc;
			acum_desc = acum_desc + sueldo_desc;
			acum_total = acum_total + sueldo_total;
			printf("Rendimiento Bajo\n");
			
		} else if (anios >= 30 && unis >= 50){
			sueldo_aumen = sueldo * 0.35;
			sueldo_total = sueldo + sueldo_aumen;
			acum_aumen  = acum_aumen + sueldo_aumen;
			acum_total = acum_total + sueldo_total;
			
		} else if (unis > 100){
			sueldo_aumen = sueldo * 0.50;
			sueldo_total = sueldo + sueldo_aumen;
			acum_aumen = acum_aumen + sueldo_aumen;
			acum_total = acum_total + sueldo_total;
			printf("Rendimiento Alto\n");
			
		} else {
			sueldo_total = sueldo;
			acum_sueldo = acum_sueldo + sueldo_total;	
		}
				
		if (genero == 'f' || genero == 'F'){
			cont_f++;
		} else if(genero == 'm' || genero == 'M'){
			cont_m++;
		}
		if (sueldo_total > mejor_sueldo){
			mejor_sueldo = sueldo_total;
			 mejor_code  = code_ven;
		}
	}
	printf("---------------Seguimiento Financiero-------------------------------\n");
	printf("El Total De Sueldos sin descuento ni aumento %.2f \n", acum_sueldo);
	printf("El Total De Sueldos con descuento es %.2f \n", acum_desc);
	printf("El Total De Sueldos con Aumento es %.2f \n",acum_aumen);
	printf("El Total De Sueldos A Pagar Son de de %.2f \n", acum_total);
	printf("---------------Generos-----------------------\n");
	printf("Numero De Hombres En La Empresa %d \n", cont_m);
	printf("Numero De Mujeres En La Empresa %d \n", cont_f);
	printf("----------------Mejor Vendedor--------------------\n");
	printf("El Mejor Vendedor es %d con un sueldo de %.2f" , mejor_code, mejor_sueldo );
	
	return 0;
}
