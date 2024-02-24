#include <stdio.h>

int main(){

    float despesas,despesas_final;

    printf("Qual e o valor total das despesas?");
    scanf("%f",&despesas);

    despesas_final = (despesas/100) * 110;

    printf("O total de despesas mes que vem vai ser de: R$ %.2f",despesas_final);
}