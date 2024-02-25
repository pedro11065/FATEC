//naõ consegui fazer a validação por completo

#include <stdio.h>
int main()
{
    float n1,n2,n3,n4,media;

    printf("Insira a primeira nota: ");
    scanf("%f",&n1);

    printf("Insira a segunda nota: ");
    scanf("%f",&n2);

    printf("Insira a terceira nota: ");
    scanf("%f",&n3);

    printf("Insira a quarta nota: ");
    scanf("%f",&n4);

//  se: n1 maior ou igual que 0 e menor ou igual que 10... 
    if ((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10) && (n3 >= 0 && n3 <= 10) && (n4 >= 0 && n4 <= 10))
    {
        media = (n1+n2+n3+n4) / 4.0;

        if (media >= 6.0)
        {
            printf("Aprovado!!! \n");
        }
        else
        {
            printf("Reprovado!!! \n");
        }
    }
    else
    {
        printf("Algo de errado nao esta certo... /n");

        if ((n1 <= 0 && n1 >= 10))
        {
            printf("Reveja a nota da primeira prova.");
        }
        if ((n2 <= 0 && n2 >= 10))
        {
            printf("Reveja a nota da segunda prova.");
        }
        if ((n3 <= 0 && n3 >= 10))
        {
            printf("Reveja a nota da terceira prova.");
        }
        if ((n4 <= 0 && n4 >= 10))
        {
            printf("Reveja a nota da quarta prova.");
        }
    }

return 0;

}
