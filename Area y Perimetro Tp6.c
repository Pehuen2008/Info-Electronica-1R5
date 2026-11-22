#include <stdio.h>
float calcularAreaRectangulo (float longitud, float altura){
	float area;
	area=longitud*altura;
	return area;
}
float calcularPerimetroRectangulo (float longitud, float altura){
	float perimetro;
	perimetro=2*(longitud+altura);
	return perimetro;
}
float calcularAreaCirculo (float radio){
	float area;
	area= 3.14 * (radio*radio);
	return area; 
}
float calcularPerimetroCirculo (float radio){
	float perimetro;
	perimetro=2*3.14*radio;
	return perimetro;
}
float imprimirResultados (float area, float perimetro){
	printf("\nEl area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}
int main() {
	int figura;
	printf("Elija que figura desea calcular \n1: rectangulo \n2: circulo\n ");
	scanf("%d",&figura);
	if ( figura == 1){
		printf("Usted elijio el rectangulo\n");
		float longitud;
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f",&longitud);
		float altura;
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f",&altura);
		float area= calcularAreaRectangulo(longitud, altura);
		float perimetro= calcularPerimetroRectangulo(longitud, altura);
		imprimirResultados (area, perimetro);
	}
	else if (figura ==2){
		printf("Usted elijio el circulo\n");
		float radio;
		printf("Ingrese el radio del circulo: ");
		scanf("%f",&radio);
		float area= calcularAreaCirculo(radio);
		float perimetro= calcularPerimetroCirculo(radio);
		imprimirResultados (area, perimetro);
	}
	else{
		printf("Figura no esta en las opciones");
	}
	//https://github.com/Pehuen2008/Info-Electronica-1R5
	return 0;
}

