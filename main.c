#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int vetor[10])
{
    int aux;

    //Ordenando crescente
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //Exibindo o vetor na ordem crescente
    printf("Vetor crescente Insertion Sort\n");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d\n\n", vetor[i]);
        }else {
            printf("%d - ", vetor[i]);
        }
    }

    //Ordenando decrescente
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //Exibindo o vetor na ordem decrescente
    printf("Vetor decrescente Insertion Sort\n");
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d\n\n", vetor[i]);
        }else {
            printf("%d - ", vetor[i]);
        }
    }
}

int main(void) {
    int opc;
    int vetor[10];

    //Populando o vetor com números entre 0 e 199
    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 200;
    }

    do {
        printf("Menu\n\n");
        printf("Informe qual método deseja utilizar:\n");
        printf("1. Insertion sort\n");
        printf("2. Merge sort\n");
        printf("3. Exit\n");
        scanf("%d", &opc);

        //Exibindo o vetor original
        printf("Vetor original\n");
        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                printf("%d\n\n", vetor[i]);
            }else {
                printf("%d - ", vetor[i]);
            }
        }

        switch (opc) {
            case 1:
                insertion_sort(vetor);
                break;
        }
    }while(opc != 3);
}