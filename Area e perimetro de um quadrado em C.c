#include<stdio.h>
#include<conio.h>

void main(){
	float lado;
	printf("Informe o lado do quadrado:");
	scanf("%f",& lado);
	float area=lado*lado;
	float perimetro=4*lado;
	printf("A area eh %.2f e o perimetro %.2f",area,perimetro);
	getch;
}
