#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20
   // strcpy(<destino>; <origem>); String destino recebe o que estiver na origem
   // strcat(<destino>; <origem>); String destino é somada com a origem e armazenada no destino
   // strlen(<string>); Mostra o tamanho da string
   // strcmp(<string1>, <string2>); Se a string1 for igual a string2 é retorna um 0, se for diferente, retornará um valor diferente de zero

int main (){
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);


    strcpy(destino,origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);


    return 0;
}

