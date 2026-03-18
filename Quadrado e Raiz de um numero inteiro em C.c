#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int numero;
	printf("Informe um numero inteiro:");
	scanf("%d",& numero);
	float quadrado=pow(numero,2);
	float raiz=sqrt(numero);
	printf("O quadrado do numero eh %.1f e a raiz do numero eh %.1f",quadrado,raiz);
	getch();
}
