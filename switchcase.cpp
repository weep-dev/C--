#include <iostream>

using namespace std;

#define ano 2023

int main(){

    int valor;
    char cnt;

    inicio:

    cout << "Selecione uma cor \n";
    cout << "[1]Verde, [2]Azul, [3]Vermelho \n";
    cin >> valor;

    switch (valor)
    {
        case 1:
            cout << "Cor escolhida foi Verde!";
            break;
    
        case 2:
            cout << "Cor escolhida foi Azul!";
            break;

        default:
            cout << "Cor escolhida foi Vermelho";
            break;
    }

    cout << "Deseja escolher outra cor? s/n";
    cin >> cnt;

    if (cnt == 's'){
        goto inicio;
    }

    return 0;
}