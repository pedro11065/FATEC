#include <stdio.h>
int main()
{
    float inss,valor_aula,salario,class,quant_aulas;

    printf("Qual e o valor de INSS?");
    scanf("%f",&inss);

    printf("Quantas aulas foram dadas?");
    scanf("%f",&quant_aulas);

    printf("Qual e o valor da aula?");
    scanf("%f",&valor_aula);

    class = valor_aula * quant_aulas; 
    salario = class- inss;

    printf("O seu salario vai ser de R$%.2f",salario);

return 0;
}