#include <iostream>

using namespace std;

#define ano 2023

int main(){

    int idade, anoNasc;
    string nome;

    cout << "Digite seu nome ";
    cin >> nome;

    cout << "Oi " << nome << " Em que ano voce nasceu? ";
    cin >> anoNasc;

    idade = ano - anoNasc;

    cout << "Entao voce completou ou vai completar " << idade << " anos esse ano.";

    return 0;
}