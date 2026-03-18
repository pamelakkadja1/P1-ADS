#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	float ca,co;
	printf("Informe o cateto adjacente:");
	scanf("%f",& ca);
	printf("Informe o cateto oposto:");
	scanf("%f",& co);
	float soma=pow(ca,2)+pow(co,2);
	float hipotenusa=sqrt(soma);
	printf("A hipotenusa eh %.2f",hipotenusa);
	getch();
}
