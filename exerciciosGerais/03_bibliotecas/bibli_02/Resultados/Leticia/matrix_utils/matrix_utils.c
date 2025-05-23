#include "matrix_utils.h"

void matrix_read(int rows, int cols, int matrix[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(j == 0)
            {
                printf("|%d", matrix[i][j]);
            }
            else if(j > 0 && j < cols -1)
            {
                printf(" %d", matrix[i][j]);
            }
            else printf(" %d|", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2)
{
    if(rows1 == rows2 && cols1 == cols2)
        return 1;
    else 
        return 0;
}

int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2)
{
    if(rows1 == rows2 && cols1 == cols2)
        return 1;
    else 
        return 0;
}

int possible_matrix_multiply(int cols1, int rows2)
{
    if(cols1 == rows2)
        return 1;
    else
        return 0;
}

void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols1; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols1; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    /*Na 1ª matrix os que estão na coluna 1 vao ser multiplicados por todos da linha 1 da 2ª matrix*/

    //inicializando resultados como 0 para que for adicionar as somatorias o resultado saia correto

    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            for(int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows])
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrix[i][j] = scalar * matrix[i][j];
        }
    }
}
