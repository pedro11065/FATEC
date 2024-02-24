#include <stdio.h>
int main()  

{

    int quant_antes,quant_depois,quant_mais;

    printf("Qual e a quantidade atual desse produto no estoque?");
    scanf("%d",&quant_antes);

    printf("Qual e a quantidade de unidades que vai chegar desse produto?");
    scanf("%d",&quant_mais);

    quant_depois = quant_antes + quant_mais;

    printf("A nova quantidade sera de %d unidades.", quant_depois);

return 0;

}