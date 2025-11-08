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


    // escolhendo a posicao de cada navio

    // navio1 estara na horinzontal
    int linha_navio1 = 2;
    int coluna_navio1 = 3;

    // navio2 estara na vertical
    int linha_navio2 = 5;
    int coluna_navio2 = 6;

    


    return 0;
}
