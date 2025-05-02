#include <stdio.h>

int main()
{
    int Nlinhas;
    int floyd=1;

    scanf("%d", &Nlinhas);

    for(int i = 0; i < Nlinhas; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", floyd);
            floyd++;
        }
        printf("\n");
    }
}