#include <stdio.h>

void moverTorre(int casa){
    if (casa > 1) {
        printf("Direita\n");
        moverTorre(casa - 1);
    }
}
void moverBispo (int casa){
    if (casa > 1) {
        printf("Direita \nCima \n");
        moverBispo(casa - 1);
    }
}
void moverRainha (int casa){
    if (casa > 1) {
        printf("Esquerda\n");
        moverRainha(casa - 1);
    }
}

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;
    int casa = 0;

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

    printf("\n");

    printf("Torre move: \n");
    moverTorre(torre);

    printf("\n");

    printf("Bispo move: \n");
    moverBispo(bispo);

    printf("\n");

    printf("Rainha move: \n");
    moverRainha(rainha);

    printf("\n");
    
    printf("Cavalo move: \n");
    for (int i = 0, j = 2; i <= j; i++, j--)
    {
        printf("Cima \n");
    }
    printf("Direita\n");
    
    return 0;
}