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

    // navio1 estara na horizontal
    int linha_navio1 = 2;
    int coluna_navio1 = 3;

    // navio2 estara na vertical
    int linha_navio2 = 5;
    int coluna_navio2 = 6;

    // checa se o navio horizontal ultrapassa o limite a direita
    if (coluna_navio1 > TAM_TABULEIRO - TAM_NAVIO) {
        printf("❌ O navio horinzontal não cabe na coluna %d.\n", coluna_navio1);
        return 1;
    }

    // checa se o navio vertical ultrapassa o limite inferior
    if (linha_navio1 > TAM_TABULEIRO - TAM_NAVIO) {
        printf("❌ O navio vertical não cabe na linha %d.\n", linha_navio2);
        return 1;
    }

    // VERIFICANDO SE EXISTE SOBREPOSIÇÃO ENTRE OS NAVIOS

    // para o navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_navio1][coluna_navio1 + i] != AGUA) {
            printf("❌ Sobreposicão detectada para o navio horizontal na posição [%d][%d].\n",
            linha_navio1, coluna_navio1 + i);
            return 1;
        }
    }

    // para o navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_navio2 + i][coluna_navio2] != AGUA) {
            printf("❌ Sobreposicão detectada para o navio vertical na posição [%d][%d].\n",
            linha_navio2 + i, coluna_navio2;
            return 1;
        }
    }

    


    return 0;
}
