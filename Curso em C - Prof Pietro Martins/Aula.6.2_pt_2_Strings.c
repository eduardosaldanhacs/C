#include <stdio.h>

int main () {

    char s[10];

    printf("Digite algo(leitura pelo gets):\n");
    gets(s); //Lê os espaço, mas não limita os caracteres
    fflush(stdin);

    puts("Resultado");
    puts(s); //Só imprime strings
    puts("");

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(s);




    return 0;
}
