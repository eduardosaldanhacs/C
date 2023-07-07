#include <stdio.h>


    int main () {

        int num, X, i ;

        printf("Digite um valor entre de 1 a 10000\n");
        scanf("%d", &num);
    if (num > 0){
        for(i = 1; i <= num; i++){
            printf("Digite um valor:\n");
            scanf("%d", &X);
            if (X > 0){
                if(X % 2 == 0){
                    printf("EVEN POSITIVE\n");
                } else {
                    printf("ODD POSITIVE\n");
                }
            }
            else if (X < 0) {
                if(X % 2 == 0) {
                    printf("EVEN NEGATIVE\n");
                } else {
                    printf("ODD NEGATIVE\n");
                }
            }
            else if (X == 0){
                printf("NULL\n");
            }
        }
    } else {
        printf("Digite outro valor\n");
    }







        return 0;
    }
