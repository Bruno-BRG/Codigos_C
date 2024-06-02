// Feito por Cauly 

#include <stdio.h>

#define MAX_ALUNOS 10

typedef struct {
    int matriculaAbencoado;
    char nomeAbencoado[100];
    int codigo_disciplina;
    float nota1;
    float nota2;
    float media_final;
} Aluno;

float calcular_media(float nota1, float nota2) {
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    int i, num_alunos;

    printf("Quantos alunos (até %d)? ", MAX_ALUNOS);
    scanf("%d", &num_alunos);

    if (num_alunos > MAX_ALUNOS) {
        printf("Número máximo de alunos é %d.\n", MAX_ALUNOS);
        return 1;
    }

    // Leitura dos dados dos alunos
    for (i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matriculaAbencoado);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nomeAbencoado);

        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigo_disciplina);

        printf("Nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota2: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media_final = calcular_media(alunos[i].nota1, alunos[i].nota2);
    }

    printf("\nListagem final dos alunos:\n");
    for (i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matriculaAbencoado);
        printf("Nome: %s\n", alunos[i].nomeAbencoado);
        printf("Código da Disciplina: %d\n", alunos[i].codigo_disciplina);
        printf("Nota1: %.2f\n", alunos[i].nota1);
        printf("Nota2: %.2f\n", alunos[i].nota2);
        printf("Média Final: %.2f\n", alunos[i].media_final);
    }

    return 0;
}

// tmj Celso
