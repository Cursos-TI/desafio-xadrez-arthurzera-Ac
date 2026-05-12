#include <stdio.h>

// --- Funções Recursivas ---

// Função recursiva para a Torre (5 casas para a Direita)
void Torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        Torre(casas - 1); // Chamada recursiva decrementando 
    }
}

// Função recursiva para a Rainha (8 casas para a Esquerda)
void Rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        Rainha(casas - 1);
    }
}

// Função recursiva para o Bispo (5 casas na diagonal Cima/Direita)
// O requisito pede recursividade E loops aninhados para o Bispo.

void Bispo(int casas) {
    if (casas > 0) {
        // Loops aninhados para simular o movimento vertical/horizontal por casa
        for (int v = 1; v <= 1; v++) { // Loop vertical
            for (int h = 1; h <= 1; h++) { // Loop horizontal
                printf("Cima, Direita\n");
            }
        }
        Bispo(casas - 1);
    }
}

int main() {
    // --- Movimentação da Torre (Recursiva) ---
    printf("Movimento da Torre:\n");
    Torre(5);
    printf("\n");

    // --- Movimentação do Bispo (Recursiva com Loops Aninhados) ---
    printf("Movimento do Bispo:\n");
    Bispo(5);
    printf("\n");

    // --- Movimentação da Rainha (Recursiva) ---
    printf("Movimento da Rainha:\n");
    Rainha(8);
    printf("\n");

    // --- Movimentação do Cavalo (Loops Complexos com Múltiplas Variáveis) ---
    // Movimento: 2 casas para Cima e 1 para a Direita
    printf("Movimento do Cavalo:\n");
    
    // Loop com múltiplas variáveis e condições complexas
    for (int i = 0, j = 1; i < 2; i++) {
        printf("Cima\n");
          // Uso de condição para realizar o movimento horizontal apenas após o vertical
        if (i == 1) { 
            while (j > 0) {
                printf("Direita\n");
                j--; // Variável secundária
                break; 
            }
        }
    }
        
      

    return 0;
}
