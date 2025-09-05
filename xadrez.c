#include <stdio.h>
#include <stdlib.h>

int main() {
    // Constantes para definir o número de casas que cada peça irá se mover.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Variáveis contadoras para os laços.
    int i;

    /*
     * ===============================================
     * MOVIMENTO DA TORRE (usando for)
     * ===============================================
     * A torre se move em linha reta, horizontalmente ou verticalmente.
     * Este laço 'for' simula o movimento da torre por 5 casas para a direita.
     * O laço inicializa 'i' em 1 e continua enquanto 'i' for menor ou igual
     * a 'casasTorre'. A cada iteração, ele imprime a direção do movimento.
     */
    printf("--- Movimento da Torre ---\n");
    for (i = 1; i <= casasTorre; i++) {
        // Imprime o movimento para a direita a cada casa percorrida.
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade.

    /*
     * ===============================================
     * MOVIMENTO DO BISPO (usando while)
     * ===============================================
     * O bispo se move na diagonal.
     * Este laço 'while' simula o movimento do bispo por 5 casas na diagonal
     * para cima e para a direita. A variável 'i' é resetada para 1 e o laço
     * continua enquanto 'i' for menor ou igual a 'casasBispo'.
     */
    printf("--- Movimento do Bispo ---\n");
    i = 1; // Reinicia o contador para o próximo laço.
    while (i <= casasBispo) {
        // Imprime a combinação de direções para representar o movimento diagonal.
        printf("Cima, Direita\n");
        i++; // Incrementa o contador para avançar para a próxima casa.
    }
    printf("\n"); // Adiciona uma linha em branco.

    /*
     * ===============================================
     * MOVIMENTO DA RAINHA (usando do-while)
     * ===============================================
     * A rainha pode se mover em todas as direções.
     * Este laço 'do-while' simula o movimento da rainha por 8 casas para a esquerda.
     * O laço executa o bloco de código pelo menos uma vez e depois verifica a condição.
     * A variável 'i' é inicializada com 'casasRainha' e o laço continua
     * enquanto 'i' for maior que 0.
     */
    printf("--- Movimento da Rainha ---\n");
    i = casasRainha; // Inicializa o contador com o número de casas da rainha.
    do {
        // Imprime o movimento para a esquerda.
        printf("Esquerda\n");
        i--; // Decrementa o contador a cada passo.
    } while (i > 0);

    return 0; /
}
