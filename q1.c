#include <stdio.h>

struct aluno
{
    int nota1, nota2;
};

int main(){
    struct aluno a1;
    puts("Digite a primeira nota do aluno: ");
    scanf("%d", &a1.nota1);
    puts("Digite a segunda nota do aluno: ");
    scanf("%d", &a1.nota2);

    float media = (float)(a1.nota1 + a1.nota2)/2;
    printf("A média das notas do aluno é de: %.2f", media);

    return 0;
}