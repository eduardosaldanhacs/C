#include <stdio.h>
#include <math.h>

int main (){

    int so, vo, a, t, s, v;
    

    printf("Informe a posicao inicial do movel:\n");
    scanf("%d", &so);
    printf("Informe a velocidade inicial do movel:\n");
    scanf("%d", &vo);
    printf("Informe a aceleracao do movel:\n");
    scanf("%d", &a);
    printf("Informe o instante de tempo:\n");
    scanf("%d", &t);

    s = so + (vo * t) + (a * pow(t,2) / 2);
    v = vo + (a * t);

    //printf("A posicao final foi: %d.\n", s);
    //printf("A velocidade final foi: %d.\n", v);
    printf("A posicao e velocidade final sao: %d e %d.\n", s, v);



}