#include <stdio.h>
int main()
{
    float valor, novo_valor;

    printf("Qual e o valor do produto?");
    scanf("%f",&valor);

    novo_valor = (valor/100 * 91); // 100-9

    printf("O novo valor e de %.2f",novo_valor);

return 0;
}