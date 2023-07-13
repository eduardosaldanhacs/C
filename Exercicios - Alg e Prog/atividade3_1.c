#include <stdio.h>
#include <math.h>

float main(){

    float etanol, gas_comum, gas_aditiv, gas_barata;
     

    printf("Digite o valor do etanol (R$/1):\n");
    scanf("%f", &etanol);
    printf("Digite o valor da gasolina comum (R$/1):\n");
    scanf("%f", &gas_comum);
    printf("Digite o valor da gasolina aditivada (R$/1):\n");
    scanf("%f", &gas_aditiv);

    if (gas_comum < gas_aditiv)
    {
        gas_barata = gas_comum;
    } else {
        gas_barata = gas_aditiv;
    }


    if (etanol / gas_barata < 0.70)
    {
        printf("Abastecer com etanol eh mais vantajoso.\n");
    }

    if (etanol / gas_barata > 0.70)
    {   
        if (gas_barata == gas_comum)
        {
            printf("Abastecer com gasolina comum eh mais vantajoso.\n");
        } else {
            printf("Abastecer com gasolina aditivada eh mais vantajoso.\n");
        }
        
    }

    if (etanol / gas_barata == 0.70)
    {
        if (gas_barata = gas_comum)
        {
            printf("Não tem preferencia justificada, vai da sua escolha.\n");
        } else {
            printf("Abastecer com gasolina aditivada eh mais vantajoso.\n");
        }
        
    }
    
}