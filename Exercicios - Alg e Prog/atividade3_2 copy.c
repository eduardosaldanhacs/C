#include <stdio.h>
#include <math.h>

float main(){

    char moed_orig [2], moed_dest [2];
    float valorReal, valorDolar, valorEuro;
    

    printf("Digite a moeda de origem: (use R/r para real, D/d para dolar e E/e para euro):\n");
    scanf("%c", &moed_orig);
    printf("Digite a moeda de destino: (use R/r para real, D/d para dolar e E/e para euro):\n");
    scanf("%c", &moed_dest);
        
    if (moed_orig == "R" || moed_orig == "r" )
    {
       printf("\nDigite o montante em real: \n"); 
       scanf("%f", &valorReal);
    }
    if (moed_orig == "D" || moed_orig == "d" )
    {
        printf("\nDigite o montante em dolar:\n");
        scanf("%f", &valorDolar);
    }
    if (moed_orig == "E" || moed_orig == "e")
    {
        printf("\nDigite o montante em euro:\n");
        scanf("%f", &valorEuro);
    } 
    
    if (moed_dest == "R" || moed_dest == "r" )
    {
       printf("\nDigite o montante em real: \n"); 

    }
    if (moed_dest == "D" || moed_dest == "d" )
    {
        printf("\nDigite o montante em dolar:\n");
    }
    if (moed_dest == "E" || moed_dest == "e")
    {
        printf("\nDigite o montante em euro:\n");
    } else {
        printf("\nComando inválido!\n");
    }

}