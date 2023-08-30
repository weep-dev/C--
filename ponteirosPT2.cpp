#include <iostream>
using namespace std;

int main(){

    int *p;
    int vetor[10];

    p = &vetor[0]; // o ponteiro p recebe o endereco do vetor na primeira posicao
    cout << "\n" << *p << "\n";

    *(p++);        // o ponteiro recebe um incremento e passa a apontar para o endereco do proximo elemento do vetor, ou seja, o mesmo que p=&vetor[1]
    cout << "\n" << *p << "\n";

    *(p++);        
    cout << "\n" << *p << "\n";

    return 0;
}