#include <stdio.h>

struct Professor {
    char nome[50];
};

struct Disciplina {
    char nome[50];
    struct Professor professor;
};

int main(){
    struct Disciplina materia;
    puts("Digite o nome da disciplina:");
    scanf(" %s", &materia.nome);
    puts("Digite o nome do professor que leciona essa disciplina:");
    scanf(" %s", &materia.professor.nome);

    printf("A matéria é: %s, dada por: %s", materia.nome, materia.professor.nome);
    

    return 0;
}