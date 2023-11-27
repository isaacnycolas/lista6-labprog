#include <stdio.h>

struct Aluno {
    float nota1;
    float nota2;
    float media;
};

void calcularMediaAluno(struct Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}

float calcularMediaTurma(struct Aluno turma[], int tamanho) {
    float somaMedias = 0.0;

    for (int i = 0; i < tamanho; ++i) {
        calcularMediaAluno(&turma[i]);
        somaMedias += turma[i].media;
    }

    return somaMedias / tamanho;
}

int main() {
    struct Aluno turma[3];

    for (int i = 0; i < 3; ++i) {
        printf("\nAluno %d:\n", i + 1);
        printf("Informe a nota 1 do aluno: ");
        scanf("%f", &turma[i].nota1);

        printf("Informe a nota 2 do aluno: ");
        scanf("%f", &turma[i].nota2);
    }

    float mediaTurma = calcularMediaTurma(turma, 3);
    printf("\nMédia da turma: %.2f\n", mediaTurma);

    return 0;
}