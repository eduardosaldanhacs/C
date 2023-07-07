#include <stdio.h>

    int main (){

        int num1, num2;

    do {
        printf("Digite um valor:\n");
        scanf("%d", &num1);
        printf("Digite outro valor:\n");
        scanf("%d", &num2);

        if (num1 < num2){
            printf("Crescente\n");
      } else if (num2 < num1) {
            printf("Decrescente\n");
      }

       }
        while (num1 != num2);




    return 0;
}
