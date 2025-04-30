#include "Data.h"
#include <stdio.h>

int main()
{
    Data nascimento = lerData();
    Data atual = lerData();
    printf("Idade: %d\n", calculaIdade(nascimento, atual));
}