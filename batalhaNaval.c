#include <stdio.h>
#include <stdliib.h>


#define TAM_TABULEIRO 10 // O TABULEIRO SERA 10X10
#define TAM_NAVIO 3 // CADA NAVIO OCUPA 3 ESPAÇOS
#define AGUA 0 // REPRESENTA O MAR (ESPAÇO VAZIO)
#define NAVIO 3 // REPRESENTA UMA PARTE DO NAVIO 

int main() {


    // preparando o tabuleiro

    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    for(int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for(int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA;
        }
    }

    


    return 0;
}
