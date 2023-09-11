#include <iostream>
using namespace std;

void preencherGab(char *vet, int tam){
    for(int i=0; i < tam; i++){
        cout << "Questao " << i+1 << " ";
        cin >> vet[i]; 
    }
}

void validarNotas(char *gab, int questoes, int alunos){
    for(int i=0; i<alunos;i++){
        cout << "Aluno " << i+1 << ": " << endl;
        double nota = 0;
        char qst;

        for(int j=0; j<questoes; j++){
            cout << "Questao " << j+1 << ":";
            cin >> qst;
            if(qst == gab[j]){
                nota++;
            }
        }
        cout << "Aluno " << i+1 << " acertou " << nota << " questoes e tirou a nota " << (nota/questoes)*10 << endl;
    }
}

int main(){
    int quantQst;
    int alunos;
    cout << "Digite a quantidade de questoes que tem a prova: " << endl;
    cin >> quantQst;
    cout << "Digite quantos alunos responderam: " << endl;
    cin >> alunos;

    char *gabarito = new char[quantQst];

    preencherGab(gabarito, quantQst);
    validarNotas(gabarito, quantQst, alunos);

    return 0;
}