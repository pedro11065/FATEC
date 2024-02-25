#include <stdio.h>
int main()
{
    float fabrica,lucro,imposto,
    lucro_out,imposto_out,carro_out;

    printf("Qual e o preco do veiculo de fabrica?");
    scanf("%f",&fabrica);

    printf("Qual e o percetual de lucro do distribuidor?");
    scanf("%f",&lucro);

    printf("Qual e o percetual de imposto?");
    scanf("%f",&imposto);

    lucro_out = fabrica/100 * lucro;
    imposto_out = fabrica/100 * imposto;
    carro_out = fabrica + lucro_out + imposto_out;

    printf("Somente de lucro, o vendedor tera: R$%2.f \n",lucro_out);
    printf("De impostos o valor e de:R$ %.2f \n",imposto_out);
    printf("O valor de compra de um futuro comprador sera de:R$ %.2f \n",carro_out);
}