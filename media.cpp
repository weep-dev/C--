//Crie uma funcao que receba tres notas de alunos como parametro e uma letra. Se a letra for A faça uma media aritmetica, se a letra for P uma media ponderada com pesos 5, 3 e 2.

#include<iostream>
using namespace std;

float media(float nota1, float nota2, float nota3, char x){
	float media;
    
    switch(x){
    case 'A':
    case 'a':
    	media = (nota1 + nota2 + nota3)/3;
        return media;
    case 'P':
    case 'p':
    	media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10;
        return media;
    }
    	
}

int main()
{
	float n1, n2, n3;
    char cnt;
    cout << "Digite a primeira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    cout << "Digite a terceira nota: " << endl;
    cin >> n3;
    cout << "Qual media realizar? (A = Aritmetica / P = Ponderada" << endl;
    cin >> cnt;
    cout << "A media eh: " << endl;
    cout << media(n1, n2, n3, cnt) << endl;
    return 0;
}