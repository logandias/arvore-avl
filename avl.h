#ifndef AVL_H
#define AVL_H

#include<stdio.h>

typedef struct _Arv{
    int valor;
    int fb;
    struct _Arv esq;
    struct _Arv dir;
}Arv;

int buscar(Arv* arv, int x);
void inserir(Arv* arv,  int x);
void remover(Arv* arv, int x);

#endif // AVL_H
