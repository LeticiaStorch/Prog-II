#include <stdio.h>

int main()
{
    int qnt;
    scanf("%d", &qnt);

    int livros[qnt];
    
    for(int i = 0; i < qnt; i++)
    {
        scanf("%d ", &livros[i]);
    }
    

   /* for(int i = 0; i < qnt; i++)
    {
        printf("%d ", livros[i]);    
    }*/
}