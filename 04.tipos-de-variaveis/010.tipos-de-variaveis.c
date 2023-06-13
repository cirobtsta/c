#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Olá
    printf("Olá \n");
    
    //Lendo valor inteiro
    int a  = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O Valor de a mudou para %d \n", a);

    //Lendo valor quebrado
    float b  = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f \n", b);

    //Lendo letra
    char letra = 't';
    printf("O valor de c é = %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O Valor de a mudou para %c \n", letra);


}