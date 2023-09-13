/*
Eu quero um array dinâmico de um struct de funcionários,  
onde cada funcionário tem: nome, telefone, cpf e salário
*/

#include <iostream>
using namespace std;

struct Funcionario{
    string nome;
    int telefone;
    string cpf;
    double salario;
};

void cadastrar_func(Funcionario vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Nome do funcionario: " << endl;
        cin >> vet[i].nome;
        cout << "Telefone do funcionario: " << endl;
        cin >> vet[i].telefone;
        cout << "Cpf do funcionario: " << endl;
        cin >> vet[i].cpf;
        cout << "Salario do funcionario: " << endl;
        cin >> vet[i].salario;
    }
}

void imprimir_func(Funcionario vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Funcionario: " << vet[i].nome << endl;
        cout << "Telefone: " << vet[i].telefone << endl;
        cout << "Cpf: " << vet[i].cpf << endl;
        cout << "Salario: " << vet[i].salario << endl; 
    }
}

int main(){
    int quant;
    cout << "Quantos funcionarios ha na empresa: ";
    cin >> quant;

    Funcionario *vet = new Funcionario[quant];

    cadastrar_func(vet, quant);
    imprimir_func(vet, quant);

    return 0;
}