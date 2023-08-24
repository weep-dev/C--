#include<iostream>
using namespace std;

void aprovacao(float n1, float n2, float n3, int f){
	float media = (n1 + n2 + n3)/3;
    
    if (media >= 70 && f < 30){
    	cout << "Aprovado com media: " << media << endl;
    }else if(media < 40 || f >= 30){
    	cout << "Para reprovacao com media: " << media << endl;
    }else if(media < 70 && media >= 40 && f < 30){
    	cout << "Para final com media: " << media << endl;
    }
    
}


int main()
{
    float n1, n2, n3;
    int f;
    cout << "Digite tres valores: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << "O numero de faltas: " << endl;
    cin >> f;
    aprovacao(n1, n2, n3, f);
    return 0;
}