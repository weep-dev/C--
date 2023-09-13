#include <iostream>
using namespace std;

struct Nota{
    double exc, prj, prova;
};

void inserir_notas(Nota nota[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Digite a nota do exercicio do " << i+1 << " aluno: " << endl;
        cin >> nota[i].exc;
        cout << "Digite a nota do projeto do " << i+1 << " aluno: " << endl;
        cin >> nota[i].prj;
        cout << "Digite a nota da prova do " << i+1 << " aluno: " << endl;
        cin >> nota[i].prova;
    }
}

double *calcular_media(Nota nota[], int tam){
    double *medias = new double[tam];
    for(int i=0; i<tam; i++){
        medias[i] = (nota[i].exc + nota[i].prj + nota[i].prova)/3;
    }
    return medias;
}

int main(){

    int tam;
    cout << "Quantos alunos tem na sala? ";
    cin >> tam;

    Nota *vetNotas = new Nota[tam];

    inserir_notas(vetNotas, tam);
    double *medias = calcular_media(vetNotas, tam);
    double mediaTurma;

    for(int i=0; i<tam; i++){
        cout << "Aluno: " << i+1 << " obteve media : " << medias[i] << endl;
        mediaTurma += medias[i];
    }
    cout << "A media da turma foi: " << mediaTurma/tam;

    return 0;
}