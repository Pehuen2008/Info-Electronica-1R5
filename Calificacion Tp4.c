#include <stdio.h>

int main() {
	int calificacion;
		printf("Ingrese su calificacion: ");
		scanf("%d",&calificacion);
	if (calificacion>=90){ 
		printf("Su calificacion es: A");
	}
	else if (calificacion>=80&&calificacion<90){
		printf("Su calificacion es: B");
	}
	else if (calificacion>=70&&calificacion<80){
		printf("Su calificacion es: C");
	}
	else if (calificacion>=60&&calificacion<70){
		printf("Su calificacion es: D");
	}
	else if (calificacion<60){
		printf("Su calificacion es: F");
	}
	return 0;
}

