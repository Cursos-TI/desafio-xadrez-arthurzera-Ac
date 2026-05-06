#include <stdio.h>

int main(){
    // Peças de Xadrez + constantes de movimento
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // Movimentação da Torre
    // Utilizando a estrutura 'for' para mover 5 casas para a direita
    printf("Movimento da Torre: %d\n", torre);
    for (int i = 0; i < 5; i++) 
    {
         printf("Direita\n");
        
    }
    // Movimentação do Bispo
    // Utilizando a estrutura 'while' para mover 5 casas para Cima e Direita (diagonal)
    printf("Movimento do Bispo: %d\n", bispo);
    int i = 0;
    while (i < 5) {
        printf("Cima , Direita\n");
        i++;
    }
    // Movimentação da Rainha
    // Utilizando a estrutura 'do-while' para mover 8 casas para esquerda
    printf("Movimento da Rainha: %d\n", rainha);
        i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}