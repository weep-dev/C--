#include <iostream>
using namespace std;

struct nolista {
    string dado;
    nolista *prox;
};

//Adiciona um item no final da lista
void append(nolista *&l, string info){
    if(l == NULL){
        l = new nolista;
        l -> dado = info;
        l -> prox = NULL;
    }else{
        nolista *aux = l;
        while(aux->prox != NULL){
            aux = aux -> prox;
        }
        nolista *p = new nolista;
        p -> dado = info;
        p -> prox = NULL;
        aux -> prox = p;
    }
}

//Exibe todos os itens da lista
void print(nolista *l){
    if(l == NULL){
        cout << "Lista vazia";
    }else{
        nolista *aux = l;
        while(aux != NULL){
            cout << aux->dado << " ";
            aux = aux->prox;
        }
    }
}

//Retorna o tamanho da lista
int len(nolista *l){
    int tam = 0;
    nolista *aux = l;
    while(aux !=NULL){
        aux = aux -> prox;
        tam++;
    }
    return tam;
}

//Insere um valor em uma determinada posição
void insert(nolista *&l, string info, int pos){
    
    if(pos == 0){
        nolista *p = new nolista;
        p -> dado = info;
        p -> prox = l;
        l = p;
    }else if(pos >= 0 && pos < len(l)){
        nolista *aux, *p;
        aux = l;
        for(int i=0; i < pos-1; i++){
            aux = aux -> prox;
        }
        p = new nolista;
        p -> dado = info;
        p -> prox = aux -> prox;
        aux -> prox = p;
    }else{
        cout << "Posicao invalida" << endl;
    }
}

//Apaga e retorna o ultimo elemento da lista 
nolista* pop(nolista *&l){
    nolista *p, *aux;
    p = l;
    aux = l;
    if(l == NULL){
        return NULL;
    }else if(l->prox == NULL){
        l = NULL;
        return aux;
    }else{
        while(aux -> prox != NULL){
            aux = aux->prox;
        }
        while(p -> prox != aux){
            p = p->prox;
        }
        p->prox = NULL;
        return aux;
        }
}

//Apaga e retorna um elemento determinado
nolista* pop_posicao(nolista *&l, int pos){
    nolista *aux, *p;
    aux = l;
    p = l;
    if(pos < 0 && pos >= len(l)){
        return NULL;
    }else{
        if (l == NULL){
            return NULL;
        }else if(aux->prox == NULL){
             l = NULL;
            return aux;
        }else if(pos == 0){
            aux = aux -> prox;
            l = aux;
            p -> prox = NULL;
            return p;
        }else{
            for(int i=0; i<pos; i++){
                aux = aux -> prox;
            }
            while(p->prox != aux){
                p = p->prox;
            }
            p -> prox = aux -> prox;
            aux -> prox = NULL;
            return aux;
        }
    }
    
}

//Imprime a lista ao contrario
void imprimir_inverso(nolista *l){
    nolista *aux, *p;
    aux = l;
    if(l != NULL){
        while(aux->prox != NULL){
            aux = aux -> prox;
        }
        for(int i=0; i<len(l); i++){
            p = l;
            cout << aux->dado << " ";
            while(p->prox != aux){
                p = p -> prox;
            }
            aux = p;
        }
    }
}

//Junta duas listas
void concatenar(nolista *&l, nolista *&m){
    if(l == NULL and m != NULL){
        l = m;
        m = NULL;
    }else if(l != NULL and m != NULL){
        nolista *aux = l;
        while(aux->prox != NULL){
            aux = aux -> prox;
        }
        aux -> prox = m;
        m = NULL;
    }
}

int main(){

    nolista *lista = new nolista;
    nolista *lista2 = new nolista;
    lista = NULL;
    lista2 = NULL;
    string nome;

    for(int i=0; i<4; i++){
        cout << "Digite um nome: ";
        cin >> nome;
        append(lista, nome);
    }
    cout << "------Lista 1------" << endl;
    print(lista);
    cout << endl << endl;

    for(int j=0; j<3; j++){
        cout << "Digite um nome: ";
        cin >> nome;
        append(lista2, nome);
    }
    cout << "------Lista 2------" << endl;
    print(lista2);
    cout << endl << endl;


    cout << endl;
    insert(lista, "Mario", 0);
    print(lista);
    cout << endl;

    cout << "Removido: " << pop_posicao(lista, 2)->dado << endl;
    print(lista);
    cout << endl;

    concatenar(lista, lista2);
    cout << "Lista concatenada: " << endl;
    print(lista);
    cout << "Lista invertida: " << endl;
    imprimir_inverso(lista);

    return 0;
}