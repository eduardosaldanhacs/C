#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
   // strcpy(<destino>; <origem>); String destino recebe o que estiver na origem
   // strcat(<destino>; <origem>); String destino � somada com a origem e armazenada no destino
   // strlen(<string>); Mostra o tamanho da string
   // strcmp(<string1>, <string2>); Se a string1 for igual a string2 � retorna um 0, se for diferente, retornar� um valor diferente de zero

int main (){
    setlocale(LC_ALL, "Portuguese");

    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impress�o de posi��o a posi��o:\n");
    for (i = 0; i<strlen(s); i++){
        printf("%c", s[i]);
    }



    return 0;
}
