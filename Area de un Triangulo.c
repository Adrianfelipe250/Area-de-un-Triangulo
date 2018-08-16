#include<stdio.h>

int main (){	
	printf("Programa para Calcular el Area de un Triangulo. \n");
	printf("Introduce el Valor de la Base: ");
	float base = 0;
	scanf("%f", &base);
	printf("Introduce el Valor de la Altura: ");
	float altura = 0;
	scanf("%f", &altura);
	float area = base*altura/2;
	printf("El Area de un Triangulo con Base %.2f y Altura %.2f es = %.2f", base,altura,area);
	return 0;
}
