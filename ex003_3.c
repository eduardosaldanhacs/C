#include <stdio.h>
//atribuições aritméticas
int main (){

    int dado = 10;
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do drecremento: %d.\n", dado);

    dado += 3;
    printf("Depois do incremento em 3 unidades %d.\n", dado);

    dado -= 2;
    printf("Depois do decremento em 3 unidades: %d.\n", dado);

    dado *= 10;
    printf("Depois de multiplicar por 10: %d.\n", dado);


}