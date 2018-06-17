#include<stdio.h>
#include "avl.h"
#include<stdlib.h>
#include<locale.h>

void limparTela(){
    system("cls");
}

int main(){
    setlocale(LC_ALL,"portuguese");

    int controle=-1, numero;
    No* arv = NULL;

    while(controle!=0){
         menu();
         scanf("%d", &controle);
         limparTela();
         switch(controle){
            case 1:
                break;
            case 2:
                break;
            case 3:
                printf("Qual número deseja buscar?\n");
                scanf("%d", &numero);
                buscar(arv, numero);
                break;
            case 4:
                grauArv(arv);
                break;
            case 5:
                resetar(arv);
                break;
        }
    }
}
