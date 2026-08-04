#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int valor;
    struct elemento *prox;
};

struct elemento *inserirInicio(struct elemento *ini, int num){
    struct elemento *novo;
    novo = (struct elemento *) malloc(sizeof(struct elemento));
    novo->valor = num;
    novo->prox = ini;
    return novo;
}

void mostrar (struct elemento *p){
    for(; p != NULL; p = p->prox)
        printf("%d ", p->valor );
    printf("\n");
}

void eliminar (struct elemento *p){
    struct elemento *aux;
    while(p) {
        aux = p->prox;
        free(p);
        p = aux;
    }
}

struct elemento *eliminarRepetidos(struct elemento *lista){
    struct elemento *aux, *elim;

    if (lista == NULL) return NULL;

    do{
        for(aux = lista->prox; aux != NULL && aux->valor != lista->valor; aux = aux->prox);

        if(aux){
            elim = lista;
            lista = lista->prox;
            free(elim);
        }
    } while(aux);

    return lista;
}

int main(){
    struct elemento *lista;

    lista = NULL;
    lista = inserirInicio(lista, 4);
    lista = inserirInicio(lista, 3);
    lista = inserirInicio(lista, 2);
    lista = inserirInicio(lista, 2);
    lista = inserirInicio(lista, 5);
    lista = inserirInicio(lista, 2);
    lista = inserirInicio(lista, 4);

    mostrar(lista);

    lista = eliminarRepetidos(lista);

    mostrar(lista);

    eliminar(lista);

    return 0;
}
