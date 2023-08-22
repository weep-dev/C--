//Crie uma funcao que receba um valor inteiro e verifique se o numero eh par. A funcao retorna 1 para o numero par e 0 se for impar.

#include<iostream>
using namespace std;

int par(int x){
	if(x % 2 == 0){
    	return 1;
    }else{
    	return 0;
    }
}

int main()
{
	int num;
    cout << "Digite um numero para verificar se eh par: " << endl;
    cin >> num;
    if (par(num)){
    	cout << "Este numero eh par" << endl;
    }else{
    	cout << "Este nuemro eh impar" << endl;
    }
}