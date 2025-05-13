#include "matrix_utils.h"
#include <stdio.h>

void imprimirOpcoes();
void primeiraOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]);
void segundaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]);
void terceiraOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]);
void quartaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]);
void quintaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]);

int main()
{
    int opcao = 0;
    int matrix1[100][100];
    int matrix2[100][100];
    int result[100][100];

    int rows1, cols1, rows2, cols2;

    scanf("%d %d\n", &rows1, &cols1);
    matrix_read(rows1, cols1, matrix1);

    scanf("%d %d\n", &rows2, &cols2);
    matrix_read(rows2, cols2, matrix2);

    while(opcao != 6)
    {
        imprimirOpcoes();

        if(opcao == 1)
        {
            primeiraOpcao(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
        }
        else if(opcao == 2)
        {
            segundaOpcao(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
        }
        else if(opcao == 3)
        {
            terceiraOpcao(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
        }
        else if(opcao == 4)
        {
            quintaOpcao(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

        }
        else if(opcao == 5)
        {
            quintaOpcao(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
        }
        else if(opcao == 6)
        break;
    }

    return 0;
}

void imprimirOpcoes()
{
    printf("1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida:\n");
}

void primeiraOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    if(possible_matrix_sum(rows1, cols1, rows2, cols2) == 1)
            {
                matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }
            else printf("Erro: as dimensoes da matriz nao correspondem\n");
}
void segundaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    if(possible_matrix_sub(rows1, cols1, rows2, cols2) == 1)
            {
                matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }
            else printf("Erro: as dimensoes da matriz nao correspondem\n");
}
void terceiraOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    if(possible_matrix_multiply(cols1, rows2) == 1)
            {
                matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }
            else printf("Erro: as dimensoes da matriz nao correspondem\n");
}
void quartaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    int scalar, qualmatrix;
            scanf("%d %d\n", &scalar, &qualmatrix);

            if(qualmatrix == 1)
            {
                scalar_multiply(rows1, cols1, matrix1, scalar);
                matrix_print(rows1, cols1, result);
            }
            else if(qualmatrix == 2)
            {
                scalar_multiply(rows2, cols2, matrix2, scalar);
                matrix_print(rows1, cols1, result);
            }
}
void quintaOpcao(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    transpose_matrix(rows1, cols1, matrix1, result);
        matrix_print(cols1, rows1, result);

     transpose_matrix(rows2, cols2, matrix2, result);
        matrix_print(cols2, rows2, result);
}
