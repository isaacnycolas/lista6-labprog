#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Estrutura {
    int *vetor;
    int qntdElement;
    float media;
};

void gerarArrayComMedia(struct Estrutura *info, int tamanho) {
    info->vetor = (int *)malloc(tamanho * sizeof(int));

    if (info->vetor == NULL) {
        fprintf(stderr, "Falha na alocação de memória.\n");
        exit(1);  // A função main deve retornar um valor inteiro
    }

    info->qntdElement = tamanho; // Definindo a quantidade de elementos

    for (int i = 0; i < tamanho; ++i) {
        info->vetor[i] = 0 + rand() % 10;
    }

    float somatorio = 0;  // Inicializando somatorio
    for (int i = 0; i < tamanho; i++) {
        somatorio += info->vetor[i];
    }

    info->media = somatorio / tamanho;
}

void exibirInfoVetor(struct Estrutura *info) {
    printf("Vetor: ");
    for (int i = 0; i < info->qntdElement; ++i) {
        printf("%d ", info->vetor[i]);
    }
    printf("\nQuantidade de elementos: %d\n", info->qntdElement);
    printf("Média: %.2f\n", info->media);
}

void liberarMemoria(struct Estrutura *info) {
    free(info->vetor);
}

int main() {
    struct Estrutura calculo;

    srand(time(NULL));
    gerarArrayComMedia(&calculo, 8);
    exibirInfoVetor(&calculo);
    liberarMemoria(&calculo);
    return 0;
}
