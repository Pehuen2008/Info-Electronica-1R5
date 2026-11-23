#include <stdio.h>
//https://github.com/Pehuen2008/Info-Electronica-1R5
#define TAM 5
int main(void) {
	int codigo[TAM];
	float precio[TAM];
	int mayor=0;
	int menor=0;
	printf("Ingrese los %d prodcutos, se solicitara el codigo y el precio\n",TAM);
	for(int i=0; i<TAM; i++){
		do{
			printf("Ingrese el codigo de barras (1-999999999): ");	
			scanf("%d",&codigo[i]);
			if(codigo[i]>999999999 || codigo[i]<1){
				printf("Eror. El codigo debe estar entre 1 y 999999999");
			}
		} while(codigo[i]<1 || codigo[i]>999999999);
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precio[i]);
			if (precio[i]<0){
				printf("Error. El precio tiene que ser positivo");
			}
		} while(precio[i]<0);
	}
	
	printf("Codigo \t Precio\n");
	for (int i=0; i<TAM; i++){
		printf ("%d \t %.2f\n", codigo[i], precio[i]);
	}
	for (int i=0; i<TAM; i++){
		if (precio[i]< precio[menor]){
			menor=i;
		}
		if (precio[i]>precio[mayor]){
			mayor=i;
		}
	}
	printf("El precio mas caro es: [%d] %.2f\n", codigo[mayor],precio[mayor]);
	printf("El precio mas barato es: [%d] %.2f", codigo[menor], precio[menor]);
	return 0;
}

