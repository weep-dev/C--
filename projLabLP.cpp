#include <iostream>
#include <string>

using namespace std;

struct Roupa {
  string nome;
  int estoque;
  double preco;
};


void Estoque(Roupa **estoque, int qtdePecas){
  for(int i = 0; i < qtdePecas; i++) {
    Roupa peca;
    cout << "-----Peça " << i+1 << "-----" << endl;
    cout << "Nome: ";
    cin >> peca.nome;
    cout << "Preço: R$";
    cin >> peca.preco;
    cout << "Estoque: ";
    cin >> peca.estoque;
    estoque[i] = new Roupa[peca.estoque];
    for(int j = 0; j < peca.estoque; j++) {
      estoque[i][j] = peca;
    }
  }
}

void adicionar_ao_carrinho(Roupa carrinho[], int &numItens, Roupa **mat, int lin) {
  int escolha;
  cout << "Escolha o número da peça que deseja adicionar ao carrinho: ";
  cin >> escolha;

  if (escolha >= 1 && escolha <= lin) {
    int quantidade_disponivel = mat[escolha - 1][0].estoque;

    if (quantidade_disponivel > 0) {
      carrinho[numItens].nome = mat[escolha - 1][0].nome;
      carrinho[numItens].preco = mat[escolha - 1][0].preco;
      numItens++;
      cout << "Item adicionado ao carrinho." << endl;
      mat[escolha - 1][0].estoque--; // Reduz a quantidade no estoque
    } else {
      cout << "\nQuantidade indisponível. Não é possível adicionar mais desta peça ao carrinho." << endl;
    }
  } else {
    cout << "Escolha inválida. Por favor, escolha um número válido." << endl;
  }
}

void exibir_carrinho(Roupa carrinho[], int numItens) {
  cout << "\n-----Carrinho-----" << endl;
  double total = 0;
  for (int i = 0; i < numItens; i++) {
    cout << i + 1 << " - " << carrinho[i].nome << " R$" << carrinho[i].preco << endl;
    total += carrinho[i].preco;
  }
  cout << "Total do carrinho: R$" << total << endl;
}

int main() {
  int qtdePecas;
  cout << "Quantidade total de peças: ";
  cin >> qtdePecas;
  Roupa **estoque = new Roupa*[qtdePecas]; //matriz dinâmica para estoque

  Estoque(estoque, qtdePecas);

  Roupa carrinho[100]; // Tamanho máximo do carrinho (ajuste conforme necessário)
  int numItens = 0; // Número de itens no carrinho

  while (true) {
    cout << "\n1 - Adicionar ao Carrinho" << endl;
    cout << "2 - Exibir Carrinho" << endl;
    cout << "0 - Finalizar" << endl;
    int opcao;
    cout << "Escolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
      case 1:
        adicionar_ao_carrinho(carrinho, numItens, estoque, qtdePecas);
        break;
      case 2:
        exibir_carrinho(carrinho, numItens);
        break;
      case 0:
        cout << "\n Obrigada por comprar na nossa loja!" << endl;
        return 0;
      default:
        cout << "Opção inválida. Por favor, escolha uma opção válida." << endl;
    }
  }

  return 0;
}