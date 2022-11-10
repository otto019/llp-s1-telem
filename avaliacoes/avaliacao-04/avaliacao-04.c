// Implemente um programa na linguagem C que faça as seguintes funcionalidades:
//
//1)
// Dada uma Matriz Quadrada m
// que é passada para uma
// função soma_linha( m, slinha, n)

// onde
// slinha é um array e
// n é o tamanho da matriz quadrada.

// Calcular a soma dos elementos de cada linha da matriz m(i,j)
// e armazenar a soma no array slinha (i).

#include <stdio.h>
#define TAMANHO 4

void exibir_vetor(int tamanho, int vetor[tamanho])
{
    int i;
    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
}

void exibir_matriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i, j;
    for(i = 0; i < tamanho; i++)
    {
        for(j = 0; j < tamanho; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void soma_linha(int n, int m[n][n], int slinha[n])
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        slinha[i] = 0;
        for (j = 0; j < n; j++) {
            slinha[i] += m[i][j];
        }
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO] = { {1, 1, 1, 1},
                                     {2, 2, 2, 2},
                                     {3, 3, 3, 3},
                                     {4, 4, 4, 4}
                                   };
    int vetor[TAMANHO];

    soma_linha(TAMANHO, matriz, vetor);

    exibir_matriz(TAMANHO, matriz);
    printf("\n");
    exibir_vetor(TAMANHO, vetor);
    printf("\n");

    return 0;
}
