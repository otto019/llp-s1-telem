// Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.


#include <stdio.h>
#include <locale.h>

int main()
{
    int i;

    setlocale(LC_ALL, "Portuguese");
    printf("1a QUESTAO: As estruturas de repeticao na linguagem C, tambem chamadas de laco permitem executar comandos que se repetem sob uma determinada condicao. Sao tres comandos de repeticao: for, while e do while. Responda:\n");
    printf("\n");
    printf("\ta) Qual a diferenca entre o while e o do .. while?\n");
    printf("\n");
    printf("\tR.: while eh comando \"enquanto\" que verifica a condicao depois de executar o bloco de comandos, ja no \"do...while\" ele verifica a condicao antes de executar o bloco de comandos.\n");
    printf("\n");
    printf("\tb) No comando for ha tres expressoes que definem como o laco executa. Sao: a inicializacao da variavel de controle, o teste realizado com a variavel de controle e alteracao que eh feita na variavel de controle.\n");
    printf("\n");
    printf("\tEscreva um programa em C onde eh mostrado os valores de inteiros pares e multiplos de 5.\n");
    printf("\tR.: ");

    for (i = 0; i <=200; i++)
        if(( i % 5 == 0) && ( i % 2 == 0))
            printf("%d ", i);

    printf("\n\n");
    printf("2a QUESTAO: Os comandos break e continue sao usados respectivamente para sair do bloco de repeticao em um laco e para saltar para o final do bloco e iniciar uma nova repeticao. Escreva programas C que executam as seguintes funcionalidades:\n");
    printf("\n");
    printf("\ta) Use um laco while para imprimir numeros pares multiplos de 4. Use uma variavel de controle onde seu incremento eh de uma unidade. Quando a variavel for testada e nao for multiplo de 4 use o continue. Caso contrario imprima o numero.\n");
    printf("\tR.: ");

    int j;
    while ( j < 200)
    {
        j++;
        if( j % 4 !=0)
            continue;
        printf("%d ", j);

    }


    return 0;
}
