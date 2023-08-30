#include <iostream>
#include <stdio.h>  //biblioteca do gets
using namespace std;

void somar(float *var, float valor){
    *var += valor;
}

void iniVetor(float *v){
    for(int i=0; i<5; i++){
        v[i] = i+1;
    }
}

int main(){

    float num = 0;
    float vet[5];

    iniVetor(vet);

    somar(&num, 15);

    cout << num <<endl;

    for(int i=0; i<5; i++){
        cout << vet[i] << endl;
    }



    return 0;
}