#include <stdio.h>

int main()
{
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    int quadrado[linhas][colunas];

    for(int i=0; i < linhas; i++)
    {
        for(int j= 0; j < colunas; j++)
        {
            quadrado[i][j] = 0;
        }
    }

    colunas = 1;
    for(int i=0; i < linhas; i++)
    {
        for(int j= 0; j < colunas; j++)
        {
            printf("%d ", quadrado[i][j]);
        }
        printf("\n");
        colunas++;

    }
}