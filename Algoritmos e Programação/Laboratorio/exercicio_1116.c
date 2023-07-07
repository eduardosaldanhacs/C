#include <stdio.h>

    int main (){

        int i, X, Y, N;
        float divisao;

        printf("Digite a quantidade de valores a ser lido:\n");
        scanf("%d", &N);


        for(i = 1; i <= N; i++){
            printf("Digite um dividendo:\n");
            scanf("%d", &X);
            printf("Digite um divisor:\n");
            scanf("%d", &Y);
                if(Y == 0){
                    printf("divisao impossivel\n");
                } else if (X == 0){
                    divisao = 0.0;
                    printf("%.1f\n", divisao);
                } else if (X != 0 && Y != 0) {
                    divisao = (float) X / Y;
                    printf("%.1f\n", divisao);
                }

        }





        return 0;
    }
