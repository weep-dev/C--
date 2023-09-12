#include <iostream>
using namespace std;

int main(){
    int valor, tam = 0;
    int *vet = new int [tam];

    cout << "Digite um valor para ser guardado (0 para sair): ";
    cin >> valor;

    while(valor != 0){
        vet[tam] = valor;
        tam++;

        cout << "Digite um valor para ser guardado (0 para sair): ";
        cin >> valor;
    }

    for(int i=0; i<tam; i++){
        cout << vet[i] << " ";
    }


    return 0;
}