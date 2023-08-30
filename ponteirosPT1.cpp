#include <iostream>
using namespace std;

int main(){

    string veiculo = "Carro";
    string *pv;                     //usa o * para indicar que a variavel eh um ponteiro

    pv = & veiculo;                 //variaveis ponteiro recebem o endereco de outra variavel, usando o & para isso

    cout << pv << endl << &veiculo << endl; //ambos tem o mesmo endereco

    *pv = "Moto";                   //no endereco apontado por *pv vai receber o valor "Moto"

    cout << veiculo << "\n" << *pv;

    return 0;
}