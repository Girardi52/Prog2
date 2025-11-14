#ifndef __FILA_H__
#define __FILA_H__

#define TAM_MAX 100

struct fila{
    int fila[TAM_MAX];
    int cont;
}typedef tipo_fila;


int inicializa_fila(tipo_fila *fila);

int remove_elem_fila(tipo_fila *fila);

int insere_elem_fila(tipo_fila *fila, int valor);

int fila_vazia(tipo_fila fila);

int fila_cheia(tipo_fila fila);

void imprime_fila(tipo_fila fila);

#endif  
