#include <stdio.h>

int main(){

    int inter, gremio, resposta, empate, grenal, inter_cont, gremio_cont;
    grenal = 0;
    inter_cont = 0;
    gremio_cont = 0;
    empate = 0;

    do {
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &resposta);
        if(resposta == 1){
        printf("Digite a quantidade de gols marcado pelo Inter\n");
        scanf("%d", &inter);
        printf("Digite a quantidade de gols marcado pelo Gremio\n");
        scanf("%d", &gremio);
        if (inter == gremio){
            empate++;
            grenal++;
        } else if (inter > gremio) {
            inter_cont++;
            grenal++;
        } else if (gremio > inter) {
            gremio_cont++;
            grenal++;
        }
                }
    } while(resposta ==1);

     if (resposta == 2){
        printf("%d grenais\n", grenal);
        printf("Inter:%d\n", inter_cont);
        printf("Gremio:%d\n", gremio_cont);
        printf("Empates:%d\n", empate);
        if (gremio_cont > inter_cont){
            printf("Gremio venceu mais\n");
        } else if (inter_cont > gremio_cont){
            printf("Inter venceu mais\n");
        } else if (inter_cont == gremio_cont){
            printf("\n");
        }
    } if (resposta < 0){
        printf("Digite um valor positivo!\n");
    }










    return 0;
}
