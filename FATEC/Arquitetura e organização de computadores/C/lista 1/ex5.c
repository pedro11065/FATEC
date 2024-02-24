#include <stdio.h>

int main(){

    float valor, inflacao, final;

    printf("Insira o valor que vai ser corrigido:");
    scanf("%f",&valor);

    if (valor < 100) //ruy
    {
        inflacao = 10;
        final =  valor/100*(100 + inflacao);
        printf("O novo valor sera de R$%.2f",final);
    }
    else
    { 
        inflacao = 20;
        final = (valor/100)*(100 + inflacao);
        printf("O novo valor sera de R$%.2f",final);
    }
    return 0;
} 