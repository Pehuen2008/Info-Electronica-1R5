#include <stdio.h>

int main(void) {
	int alumnos;
	float nota;
	do {
		printf("Ingrese la cantidad de alumnos: ");
		scanf("%d", &alumnos);
	if (alumnos<=0){
		printf("Error, ingrese un numero distinto de cero");
	}
	} while(alumnos<= 0);
	float suma=0;
	float menor=0;
	float mayor=0;
	float promedio=0;

	for (int i=1; i<=alumnos; i++){
		do{
			printf("Ingrese la nota del alumno %d: ", i);
			scanf("%f",&nota);
				if (nota<0 || nota>100){
					printf("Error, ingrese un numero distinto de cero\n");
				}
			} while(nota<0 || nota >100);
		if(i ==1){
			menor=nota;
			mayor=nota;
		}else{
			if (nota>mayor){
			mayor=nota;
			}
			if (nota<menor){
			menor=nota;
			}
			
		}
		
	suma += nota;
	}
	
	promedio=suma/alumnos;
	printf("La nota menor es: %.2f\n", menor);
	printf("La nota mayor es: %.2f\n", mayor);
	printf("El promedio de las notas es: %.2f\n",promedio);
	return 0;
}

