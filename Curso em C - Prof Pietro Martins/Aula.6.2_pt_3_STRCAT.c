#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
   // strcpy(<destino>; <origem>); String destino recebe o que estiver na origem
   // strcat(<destino>; <origem>); String destino é somada com a origem e armazenada no destino
   // strlen(<string>); Mostra o tamanho da string
   // strcmp(<string1>, <string2>); Se a string1 for igual a string2 é retorna um 0, se for diferente, retornará um valor diferente de zero

int main (){
    setlocale(LC_ALL, "Portuguese");

    char s1[N] = {"Lógica de"};
    char s2[N] = {" Programação"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);


    strcat(s1,s2);

    printf("Depois do strcat:\n");
    puts(s1);


    return 0;
}

