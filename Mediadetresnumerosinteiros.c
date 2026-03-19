#include<stdio.h>
#include<conio.h>

void main(){
    int numero1,numero2,numero3;
    printf("Informe o primeiro numero inteiro:");
    scanf("%d",& numero1);
    printf("Informe o segundo numero inteiro:");
    scanf("%d",& numero2);
    printf("Informe o terceiro numero inteiro:");
    scanf("%d",& numero3);
    float media=(numero1+numero2+numero3)/3;
    printf("A media desses tres numeros inteiros eh %.1f",media);
    getch();
}