#include <stdio.h>
#include <ctype.h>

int main(){
	
	int edad;
	char genero;
	
	printf("Ingrese Edad: \n");
	scanf("%d" , &edad);
	
	if(edad < 18){
		printf("Usted Es Menor\n");
	 }else {
	
	printf("Ingrese Genero (F) (M):\n");
	fflush(stdin);
	scanf("%c" , &genero);
	
	//Mujer Entrada Condicion
	if ((tolower(genero) == 'f' ) && edad > 18 && edad <= 19){
		printf("Entrada Gratuita.\n");
	} else if ((tolower(genero) == 'f') && edad >= 20 && edad <= 21 ){
			printf("Valor De Entrada: 2500.\n");	
	
	//Hombre Entrada Condicion
	} else if ((tolower(genero) == 'm' ) && edad >= 18 && edad <= 20){
			printf("La entrada es de $4000.\n");
	} else if ((tolower(genero) == 'm' ) && edad >= 21 && edad <= 23){
			printf("La entrada es de $5000.\n");	
	} else if ((tolower(genero) == 'm' ) && edad > 24){
			printf("La entrada es de $6000.\n");
	} else{
		printf("Digito Invalido.\n");
		  }
	
	}
	return 0;
}
