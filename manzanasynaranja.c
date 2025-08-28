
#include <stdio.h>
#define n 3
int main()
{
	int i,cont_manzanas = 0 , cont_naranjas = 0;
	char product;
	for(i = 0 ; i < n ; i++ ){
		printf("Ingrese Producto (M)Manzana, (N)Naranja: \n");
		scanf(" %c", &product);
		if(product == 'M' || product == 'm'){
			cont_manzanas++;
		} else if (product == 'N' || product == 'n'){
			cont_naranjas++;
		}
		
	}
	printf("Se Vendieron %d Manzanas\n", cont_manzanas);
	printf("Se Vendieron %d Naranjas\n", cont_naranjas);
	printf("El Total De Ventas es %d\n" , cont_manzanas + cont_naranjas);
	
	return 0;
}

