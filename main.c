#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam_vetor  15

struct elemento {
    int info;
    struct elemento *prox;
};
typedef struct elemento Elemento;

Elemento* criar_vetor() {
    return NULL;
}

Elemento* inserir_elemento(Elemento *vetor, int info) {
    Elemento *novo = (Elemento *) malloc(sizeof(Elemento));
    novo->info = info;
    novo->prox = vetor;
    return novo;
}

void listar_elementos(Elemento *vetor) {
    for (vetor; vetor != NULL; vetor = vetor->prox) {

        if (vetor->prox == NULL) {
            printf("%d\n", vetor->info);
        }else {
            printf("%d - ", vetor->info);
        }
    }
}

void selection_sort(Elemento *vetor){
    //Exibindo o vetor original
    printf("Vetor original\n");
    listar_elementos(vetor);

    int aux;

    //Ordenando crescente
    for (Elemento *i = vetor; i != NULL; i = i->prox) {
        for (Elemento *j = i->prox; j != NULL; j = j->prox) {
            if (i->info > j->info) {
                aux = i->info;
                i->info = j->info;
                j->info = aux;
            }
        }
    }

    //Exibindo o vetor na ordem crescente
    printf("Vetor crescente Selection Sort\n");
    listar_elementos(vetor);

    //Ordenando decrescente
    for (Elemento *i = vetor; i != NULL; i = i->prox) {
        for (Elemento *j = i->prox; j != NULL; j = j->prox) {
            if (i->info < j->info) {
                aux = i->info;
                i->info = j->info;
                j->info = aux;
            }
        }
    }

    //Exibindo o vetor na ordem decrescente
    printf("Vetor decrescente Selection Sort\n");
    listar_elementos(vetor);

}

void insertion_sort(Elemento *vetor) {
    //Exibindo o vetor original
    printf("Vetor original\n");
    listar_elementos(vetor);

    Elemento *ordenado = NULL;

    // Ordenando crescente
    while (vetor != NULL) {
        Elemento *atual = vetor;
        vetor = vetor->prox;

        if (ordenado == NULL || atual->info < ordenado->info) {
            atual->prox = ordenado;
            ordenado = atual;
        } else {
            Elemento *aux = ordenado;
            while (aux->prox != NULL && aux->prox->info < atual->info) {
                aux = aux->prox;
            }
            atual->prox = aux->prox;
            aux->prox = atual;
        }
    }


    // Exibindo o vetor em ordem crescente
    printf("Vetor crescente Insertion Sort\n");
    listar_elementos(ordenado);

    //Ordenando decrescente
    vetor = ordenado;
    ordenado = NULL;

    while (vetor != NULL) {
        Elemento *atual = vetor;
        vetor = vetor->prox;

        if (ordenado == NULL || atual->info > ordenado->info) {
            atual->prox = ordenado;
            ordenado = atual;
        } else {
            Elemento *aux = ordenado;
            while (aux->prox != NULL && aux->prox->info > atual->info) {
                aux = aux->prox;
            }
            atual->prox = aux->prox;
            aux->prox = atual;
        }
    }

    // Exibindo o vetor na ordem decrescente
    printf("Vetor decrescente Insertion Sort\n");
    listar_elementos(ordenado);

}



int main() {
    int opc;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));


    do {

        printf("Menu\n\n");
        printf("Informe qual método deseja utilizar:\n");
        printf("1. Selection sort\n");
        printf("2. Insertion sort\n");
        printf("3. Exit\n");
        scanf("%d", &opc);


        switch (opc) {
            case 1:
                Elemento *vetor_selection = criar_vetor();
                // populando o vetor com números entre 0 e 999
                for (int i = 0; i < tam_vetor; i++) {
                    vetor_selection = inserir_elemento(vetor_selection, rand() % 1000);
                }

                selection_sort(vetor_selection);
                break;
            case 2:
                Elemento *vetor_insertion = criar_vetor();
                // populando o vetor com números entre 0 e 999
                for (int i = 0; i < tam_vetor; i++) {
                    vetor_insertion = inserir_elemento(vetor_insertion, rand() % 1000);
                }

                insertion_sort(vetor_insertion);
                break;
            case 3:
                printf("Até Logo!\n");
                break;
            default:
                printf("Opção Inválida, por favor informe outra!\n");
        }
    }while(opc != 3);
}