#include <stdio.h>
#include <math.h>

float main(){

    char moed_orig, moed_dest;
    

    printf("Digite a moeda de origem: (use R/r para real, D/d para dolar e E/e para euro):\n");
    scanf("%c", &moed_orig);
        
    if (moed_orig == "R" || moed_orig == "r" )
    {
       printf("Digite o montante em real: \n"); 
    }
    if (moed_orig == "D" || moed_orig == "d" )
    {
        printf("Digite o montante em dolar:\n");
    }
    if (moed_orig == "E" || moed_orig == "e")
    {
        printf("Digite o montante em euro:\n");
    } else {
        printf("Comando inválido!\n");
    }

    printf("Digite a moeda de destino: (use R/r para real, D/d para dolar e E/e para euro):\n");
    scanf("%c", &moed_dest);

    if (moed_dest == "R" || moed_dest == "r" )
    {
       printf("Digite o montante em real: \n"); 
    }
    if (moed_dest == "D" || moed_dest == "d" )
    {
        printf("Digite o montante em dolar:\n");
    }
    if (moed_dest == "E" || moed_dest == "e")
    {
        printf("Digite o montante em euro:\n");
    } else {
        printf("Comando inválido!\n");
    }

}