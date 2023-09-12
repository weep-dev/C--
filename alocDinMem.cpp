#include <iostream>
#include <stdio.h>  //biblioteca do gets
using namespace std;

float somar(float *var, float *var2){
    return *var + *var2;
}

void iniVetor(float *v, int tam){
    for(int i=0; i<tam; i++){
        cout << "Digite o valor da posicao: " << i << " ";
        cin >> v[i];
    }
}

int main(){

    float num1;
    float num2;

    int tam;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;

    float *vet = new float[tam];

    iniVetor(vet, tam);

    for(int i=0; i<tam; i++){
        cout << vet[i] << endl;
    }

    cout << "Somar valores" << endl;
    cout << "Valor 1: ";
    cin >> num1;
    cout << "Valor 2: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << somar(&num1, &num2);

    return 0;
}