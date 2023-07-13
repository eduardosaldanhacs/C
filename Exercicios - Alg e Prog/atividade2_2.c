#include <stdio.h>
#include <math.h>

float main (){

    float massa, altura, IMC;

    printf("Informe a massa do sujeito (gramas):\n");
    scanf("%f", &massa);
    printf("Informe a altura do sujeito (centimetros):\n");
    scanf("%f", &altura);

    altura = pow(altura, 2);
    IMC = (massa / altura) * 10;

    printf("O IMC do sujeito eh: %.2f\n", IMC);


    if (IMC <= 16)
    {
        printf("O sujeito tem subpeso severo");
    }
    if (IMC > 16 && IMC <= 20)
    {
        printf("O sujeito tem subpeso");
    }
    if (IMC > 20 && IMC <= 25)
    {
        printf("O sujeito tem peso normal");
    }
    if (IMC > 25 && IMC <= 30)
    {
        printf("O sujeito tem sobrepeso");
    }
    if (IMC > 30 && IMC <= 40)
    {
        printf("O sujeito possui obesidade");
    }
    if (IMC > 40 && IMC < 1000000000000)
    {
        printf("O sujeito possui obesidade severa");
    }


}