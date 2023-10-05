#include <iostream>
using namespace std;

struct nolista{
    int num;
    nolista *prox;
};

void append(nolista *&l, int num){
    if(l == NULL){
        l = new nolista;
        l -> num = num;
        l -> prox = NULL;
    }else{
        nolista *aux = l;
        while(aux->prox != NULL){
            aux = aux -> prox;
        }
        nolista *p = new nolista;
        p -> num = num;
        p -> prox = NULL;
        aux -> prox = p;
    }
}

void print(nolista *l){
    if(l == NULL){
        cout << "Lista vazia";
    }else{
        nolista *aux = l;
        while(aux != NULL){
            cout << aux->num << " ";
            aux = aux->prox;
        }
    }
}

int max(nolista *l){
    int max;
    if(l != NULL){
        max = l -> num;
        nolista *aux = l;
        while(aux != NULL){
            if(aux -> num > max){
                max = aux -> num;
            }
            aux = aux -> prox;
        }
        return max;
    }
}


int min(nolista *l){
    int min;
    if(l != NULL){
        min = l->num;
        nolista *aux = l;
        while(aux != NULL){
            if(aux->num < min){
                min=aux->num;
            }
            aux = aux -> prox;
        }
        return min;
    }
}

int main(){

    nolista *lista = NULL;
    int numero;

    for(int i=0; i<5; i++){
        cout << "Digite um numero: " << endl;
        cin >> numero;
        append(lista, numero);
    }

    cout << "\n O maior numero eh: " << max(lista);
    cout << "\n O menor numero eh: " << min(lista); 


    return 0;
}