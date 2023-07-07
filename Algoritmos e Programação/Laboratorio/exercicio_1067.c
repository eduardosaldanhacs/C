#include <stdio.h>

    int main () {

        int num, i;

        printf("Digite um valor de 1 a 1000\n");
        scanf("%d", &num);

        for(i = 1; i <= num; i++){
            if(i % 2 != 0){
                printf("%d\n", i);
            }
        }



    return 0;
}
