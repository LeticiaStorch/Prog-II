#ifndef _DATA_H
#define _DATA_H

typedef struct
{
    int ano;
    int mes;
    int dia;
} Data;

Data lerData();

/**
 * @brief cria uma data a partir dos dados fornecidos
 * @param dia dia fornecido 
 * @param mes mes fornecido
 * @param ano ano fornecido
 * @return retorna uma data com os dados fornecidos
 */
Data criaData(int dia, int ano, int mes);
void imprimeData(Data d);
int calculaIdade(Data nascimento, Data atual);

#endif