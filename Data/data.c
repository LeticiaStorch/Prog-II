#include "data.h"
#include <stdio.h>

Data lerData()
{
    int dia, mes, ano;
    scanf("%d %d %d\n", &dia, &mes, &ano);
    Data niver = criaData(dia, mes, ano);

    return niver;
}

Data criaData(int dia, int mes, int ano)
{
    Data niver;
    niver.dia = dia;
    niver.mes = mes;
    niver.ano = ano;

    return niver;
}

void imprimeData(Data d)
{
    printf("%d/%d/%d\n", d.dia, d.mes, d.ano);
}

int calculaIdade(Data nascimento, Data atual)
{
    int idade = atual.ano - nascimento.ano;
    if(atual.mes < nascimento.mes)
    {
        idade--;
    }
    else if(atual.mes == nascimento.mes && atual.dia < nascimento.dia)
    {
        idade--;
    }

    return idade;
}
