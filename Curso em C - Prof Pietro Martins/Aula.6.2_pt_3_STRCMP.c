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

    char hardText[N] = {"/exit"}; //Só vai ser iguail se digitar exatamente isso
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if (ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Textos diferentes.\n");


    return 0;
}
