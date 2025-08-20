#include <stdio.h>

void torre()
{
    int movimento = 1;

    do
    {
        printf("Direita");
        printf("\n");
        movimento++;
    } while (movimento <= 5);

    printf("\n");
}

void bispo()
{
    int movimento = 1;

    while (movimento <= 5)
    {
        printf("Cima, Direita\n");
        movimento++;
    }

    printf("\n");
}

void rainha()
{
    int movimento = 1;

    for (int i = 1; i <= 8; i++)
    {
        printf("Esquerda\n");
    }

    printf("\n");
}

void cavalo()
{
    for (int i = 1; i <= 2; i++)
    {
        printf("Baixo\n");

        for (int j = 1; j <= 1; j++)
        {
            if (i == 2)
            {
                printf("Esquerda\n");
            }
        }
    }

    printf("\n");
}

int main()
{
    printf("Movimentos da torre:\n");
    torre();

    printf("Movimentos do bispo:\n");
    bispo();

    printf("Movimentos da rainha:\n");
    rainha();

    printf("Movimento do cavalo:\n");
    cavalo();

    return 0;
}
