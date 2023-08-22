//Crie um programa que leia uma palavra e a escreva de tras pra frente.

#include<iostream>
using namespace std;

int main()
{
    string plv, nova="";
    cout << "Digite uma palavra para inverter: " << endl;
    cin >> plv;
    for(int i=0; i<plv.length(); i++)
        nova= plv[i] + nova;
    cout << nova << endl;
    return 0;
}