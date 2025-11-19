#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[50];
    char corExercito[20];
    int numeroTropas;
} Territorio;

int main() {
    // Vetor estático de 5 territórios
    Territorio territorios[5];
    int i;

    // Cadastrar os dados de cada território
    printf("Cadastro de Territórios:\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;  // Remover a nova linha do fgets

        printf("Cor do Exército: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = 0;  // Remover a nova linha do fgets

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
        getchar(); // Limpar o buffer do newline após o scanf
    }

    // Exibir o estado atual do mapa
    printf("\nEstado Atual do Mapa:\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Número de Tropas: %d\n", territorios[i].numeroTropas);
    }

    return 0;
}