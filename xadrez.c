#include <stdio.h>

void torre(int movimento)
{
    if (movimento > 0)
    {
        torre(movimento - 1);
        printf("Direita");
    }

    printf("\n");
}

void bispo(int movimento)
{
    if (movimento > 0)
    {
        bispo(movimento - 1);
        printf("Cima\n");

        if (movimento > 0)
        {
            printf("Direita");
        }
    }

    printf("\n");
}

void rainha(int movimento)
{
    if (movimento > 0)
    {
        rainha(movimento - 1);
        printf("Esquerda");
    }

    printf("\n");
}

void cavalo()
{
    for (int i = 1; i <= 2; i++)
    {
        printf("Cima\n");

        for (int j = 1; j <= 1; j++)
        {
            if (i == 2)
            {
                printf("Direita\n");
            }
        }
    }

    printf("\n");
}

int main()
{
    int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;

    printf("\nMovimentos da torre:");
    torre(movimentoTorre);

    printf("\nMovimentos do bispo:");
    bispo(movimentoBispo);

    printf("\nMovimentos da rainha:");
    rainha(movimentoRainha);

    printf("\nMovimento do cavalo:\n");
    cavalo();

    return 0;
}
