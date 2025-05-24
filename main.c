#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam_vetor  15

void exibir_vetor(int vetor[tam_vetor]) {
    //Imprimir vetor na tela
    for (int i = 0; i < tam_vetor; i++) {
        if (i == tam_vetor - 1) {
            printf("%d\n\n", vetor[i]);
        }else {
            printf("%d - ", vetor[i]);
        }
    }
}

void selection_sort(int vetor[tam_vetor])
{
    int aux;
    int vetor_crescente[tam_vetor];
    int vetor_decrescente[tam_vetor];

    //popupando os vetores auxiliares
    for (int i = 0; i < tam_vetor; i++) {
        vetor_crescente[i] = vetor[i];
        vetor_decrescente[i] = vetor[i];
    }

    //Ordenando crescente
    for (int i = 0; i < tam_vetor; i++) {
        for (int j = i + 1; j < tam_vetor; j++) {
            if (vetor_crescente[i] > vetor_crescente[j]) {
                aux = vetor_crescente[i];
                vetor_crescente[i] = vetor_crescente[j];
                vetor_crescente[j] = aux;
            }
        }
    }

    //Exibindo o vetor na ordem crescente
    printf("Vetor crescente Selection Sort\n");
    exibir_vetor(vetor_crescente);

    //Ordenando decrescente
    for (int i = 0; i < tam_vetor; i++) {
        for (int j = i + 1; j < tam_vetor; j++) {
            if (vetor_decrescente[i] < vetor_decrescente[j]) {
                aux = vetor_decrescente[i];
                vetor_decrescente[i] = vetor_decrescente[j];
                vetor_decrescente[j] = aux;
            }
        }
    }

    //Exibindo o vetor na ordem decrescente
    printf("Vetor decrescente Selection Sort\n");
    exibir_vetor(vetor_decrescente);
}

void insertion_sort(int vetor[tam_vetor]) {

    int aux;
    int vetor_crescente[tam_vetor];
    int vetor_decrescente[tam_vetor];

    // Populando os vetores auxiliares
    for (int i = 0; i < tam_vetor; i++) {
        vetor_crescente[i] = vetor[i];
        vetor_decrescente[i] = vetor[i];
    }

    // Ordenando crescente
    for (int i = 1; i < tam_vetor; i++) {
        aux = vetor_crescente[i];
        int j = i - 1;
        while (j >= 0 && vetor_crescente[j] > aux) {
            vetor_crescente[j + 1] = vetor_crescente[j];
            j--;
        }
        vetor_crescente[j + 1] = aux;
    }

    printf("Vetor crescente Insertion Sort\n");
    exibir_vetor(vetor_crescente);

    // Ordenando decrescente
    for (int i = 1; i < tam_vetor; i++) {
        aux = vetor_decrescente[i];
        int j = i - 1;
        while (j >= 0 && vetor_decrescente[j] < aux) {
            vetor_decrescente[j + 1] = vetor_decrescente[j];
            j--;
        }
        vetor_decrescente[j + 1] = aux;
    }

    printf("Vetor decrescente Insertion Sort\n");
    exibir_vetor(vetor_decrescente);
}


int main() {
    int opc;
    int vetor[tam_vetor];

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    // populando o vetor com números entre 0 e 999
    for (int i = 0; i < tam_vetor; i++) {
        vetor[i] = rand() % 1000;
    }

    do {
        printf("Menu\n\n");
        printf("Informe qual método deseja utilizar:\n");
        printf("1. Selection sort\n");
        printf("2. Insertion sort\n");
        printf("3. Exit\n");
        scanf("%d", &opc);

        //Exibindo o vetor original
        printf("Vetor original\n");
        exibir_vetor(vetor);

        switch (opc) {
            case 1:
                selection_sort(vetor);
                break;
            case 2:
                insertion_sort(vetor);
                break;
            case 3:
                printf("Até Logo!\n");
                break;
            default:
                printf("Opção Inválida, por favor informe outra!\n");
        }
    }while(opc != 3);
}