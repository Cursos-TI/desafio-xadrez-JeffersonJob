#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("Torre move: \n");
    while (torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }

    printf("\n");

    printf("Bispo move: \n");
    do
    {
        printf("Cima\nEsquerda\n");
        bispo++;
    } while (bispo <= 5);

    printf("\n");

    printf("Rainha move: \n");
    for ( rainha; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }
    
    printf("\n");

    printf("Cavalo move: \n");
    for (cavalo; cavalo <= 1; cavalo++)
    {
        for (cavalo; cavalo <= 2; cavalo++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
