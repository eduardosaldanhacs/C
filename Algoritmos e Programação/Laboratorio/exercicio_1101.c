#include <stdio.h>

int main() {

    int N_menor, N_maior, N_aux, i, soma;
    soma = 0;

    do {
        printf("Digite um valor:\n");
        scanf("%d", &N_menor);
        printf("Digite outro valor:\n");
        scanf("%d", &N_maior);
    if(N_menor > 0 && N_maior > 0){
        if(N_menor > N_maior){
            N_aux = N_maior;
            N_maior = N_menor;
            N_menor = N_aux;
        }
            for(i = N_menor; i <= N_maior; i++){
                printf("%d ", i);
                soma = soma + i;
            }
                printf("Sum=%d\n", soma);
                soma = 0;


      }

    } while(N_maior > 0 && N_menor > 0);
         if (N_menor <= 0 && N_maior <= 0){
                printf("\n");
        }




    return 0;
}
