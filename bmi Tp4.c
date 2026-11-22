#include <stdio.h>

int main(void) {
	float peso, altura, imc;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);	
	
	printf("Ingrese su altura en metros: ");	
	scanf("%f", &altura);	
	
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
	return 0;
}

