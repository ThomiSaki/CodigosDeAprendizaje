#include <stdio.h>

int main()
{
	int nro_empleado, bonificacion;
	float sueldo = 0.0, aguinaldo = 0.0 ,sueldo_bono = 0,sueldo_total;
	//mejor empleado
	int nro_mejor, flag;
	float sueldo_mejor = 0;
	
	printf("Ingrese Nro Empeleado: \n");
	scanf("%d" , &nro_empleado);
	
	while (nro_empleado != 0){
		printf("Ingrese Sueldo A Pagar: \n");
		scanf("%f" , &sueldo);
		
		printf("Cuenta Con Bonificacion?\n");
		printf("1-Si / 2-No\n");
		scanf("%d" , &bonificacion);
		
		if(bonificacion == 1){
			sueldo_bono = sueldo * 0.20;
		} else if(bonificacion == 2){
			sueldo_bono = 0;
		} else{
			printf("No Se Ingreso Un Valor Valido.\n");
		}
		
		
		aguinaldo = sueldo / 2;
		sueldo_total = sueldo + sueldo_bono + aguinaldo;
		
		printf("--------------Datos Del Empleado--------------\n");
		printf("Numero Empleado %d\n", nro_empleado);
		printf("Sueldo A Pagar: %.2f\n", sueldo);
		printf("Bonificacion: %.2f\n" , sueldo_bono);
		printf("Aguinaldo: %.2f\n", aguinaldo);
		printf("Sueldo Total A Pagar: %.2f\n", sueldo_total);
		printf("------------------------------------------- \n");
		printf("\n");
		printf("Ingrese Nro De Emplado: \n");
		scanf("%d" , &nro_empleado);	
		
		if(nro_empleado == 0){
			break;
		}
		if (flag == 0)
		{
			nro_mejor = nro_empleado;
			sueldo_mejor = sueldo_total;
			flag = 1;
		}
		else if(sueldo_total > sueldo_mejor){
			nro_mejor = nro_empleado;
			sueldo_mejor = sueldo_total;
			}
	    	
	
}
		printf("-----------------Mejor Empleado------------------------------\n");
		printf("El Codigo Del Mejor Empleado Es %d\n", nro_mejor);
		printf("Y su Total de Sueldo es de %.2f\n", sueldo_mejor );
}
