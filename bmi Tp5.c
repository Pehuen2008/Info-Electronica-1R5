#include <stdio.h>

int main(void) {
	float peso, altura, imc;
	do{
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);	
		if (peso<=0){
			printf("Error, ingrese un peso positivo\n");
		}
	}while(peso<=0);
	do{
		printf("Ingrese su altura en metros: ");	
		scanf("%f", &altura);	
		if (altura<=0){
			printf("Error, ingrese una altura positiva\n");
		}
	}while (altura<=0);
	imc = peso / (altura*altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
	
	printf("\n       Indice | Condicion");
	printf("\n-------------------------------");
	printf("\n        <18.5 | Bajo peso");
	printf("\n  18.5 a 24.9 | Normal");
	printf("\n  25.0 a 29.9 | Sobrepeso");
	printf("\n         >=30 | Obesidad");
	
	if (imc>=30){
		printf("\nSu imc es: Obesidad");
	}
	else if (imc>=25&&imc<29.9){
		printf("\nSu imc es: Sobrepeso");
	}
	else if (imc>=18.5&&imc<24.9){
		printf("\nSu imc es: Normal");
	}
	else if (imc<18.5){
		printf("\nSu imc es: Bajo Peso");
	}
	
	
	//https://github.com/Pehuen2008/Info-Electronica-1R5
	return 0;
}

