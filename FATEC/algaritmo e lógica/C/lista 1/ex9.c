#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,num3,num4,soma;

    printf("Digite o primeiro dado:");
    scanf("%f",&num1);

    printf("Digite o segundo dado:");
    scanf("%f",&num2);

    printf("Digite o terceiro dado:");
    scanf("%f",&num3);

    printf("Digite o quarto dado:");
    scanf("%f",&num4);

    num1 = pow(num1,2);
    num2 = pow(num2,2);
    num3 = pow(num3,2);
    num4 = pow(num4,2);

    soma = num1 + num2 + num3 + num4;

    if (soma < 50000.00)
    {
        printf("O dados podem não ser representativos suficente, por favor, forneca novos dados. \n");
        printf("O resultado foi de %.2f",soma);
    }   
   else
    {
        printf("O resultado da analise dos dados e de %2.f",soma);
    }
}