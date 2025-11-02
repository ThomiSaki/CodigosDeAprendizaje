#include <stdio.h>

int main()
{
	int i,x,k;
	int aux,aux2;
	int atleta[5];
	int s_natacion[5], s_ciclismo[5],s_carrera[5];
	int seg_720[5], cant_720 = 0;
	int total_seg[5];
	int atleta_win[1], atleta_lose[1];
	int flag = 0 , mejor_atleta, mejor_tiempo;
	int flag2 = 0, ultimo_atleta, ultimo_tiempo;
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("Ingrese Numero De Atleta: ");
		scanf("%d" , &atleta[i]);
		
		printf("Segundos En Natacion: ");
		scanf("%d" , &s_natacion[i]);
		
		printf("Segundos En Ciclismo: ");
		scanf("%d" , &s_ciclismo[i]);
		
		printf("Segundos En Carrera: ");
		scanf("%d" , &s_carrera[i]);
	
	
		if(s_ciclismo[i] < 720)
		{
			seg_720[i] = atleta[i]; 
			cant_720++;
		} 
		
		total_seg[i] = s_natacion[i] + s_ciclismo[i] + s_carrera[i];
		
		printf("El Atleta %d tardo %d en Finalizas el triatlon\n", atleta[i], total_seg[i]);
		
		if(flag == 0)
		{
			flag = 1;
			mejor_atleta = atleta[i];
			mejor_tiempo = total_seg[i];
		} else
			if(total_seg[i] < mejor_tiempo ){
				mejor_atleta = atleta[i];
				mejor_tiempo = total_seg[i];
			}
		
		
		if(flag2 == 0)
		{
			flag2 = 1;
			ultimo_atleta = atleta[i];
			ultimo_tiempo = total_seg[i];
		} else
			if(total_seg[i] > ultimo_tiempo ){
				ultimo_atleta = atleta[i];
				ultimo_tiempo = total_seg[i];
			}
		}

		
		k = 0;
		x = 5;
		
		while(k == 0){		
			k = 1;
			x--;
	
			for(i = 0 ; i < x ; i++)
			{
				if(total_seg[i] < total_seg[i+1])
				{
					k = 0;
					aux = total_seg[i];
					total_seg[i] = total_seg[i+1];
					total_seg[i+1] = aux;
					
					aux2 = atleta[i];
					atleta[i] = atleta[i+1];
					atleta[i+1] = aux2;
				}
			}
		}
	
	printf("----------------------------------------------------------------------------------\n");	
		for(i = 0 ; i < 5 ; i++)
			{
				printf("Atleta:%d | Segundos: %d\n" , atleta[i], total_seg[i]);
			}
	printf("----------------------------------------------------------------------------------\n");	
			printf("El Numero De Atletas Que Completaron Ciclismo en menos de 720 seg: \n");
			for(i = 0 ; i < cant_720 ; i++)
			{	
				printf("%d\n" , seg_720[i]); 
			}
	printf("----------------------------------------------------------------------------------\n");	
	printf("El Mejor Atleta Fue %d con un tiempo de %d.\n" , mejor_atleta, mejor_tiempo);
	printf("----------------------------------------------------------------------------------\n");	
	printf("El Ultimo Atleta En Acabar Fue %d con un tiempo de %d.\n" , ultimo_atleta, ultimo_tiempo);
	printf("----------------------------------------------------------------------------------\n");	
	return 0;

}


