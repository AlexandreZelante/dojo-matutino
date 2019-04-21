#include <iostream>
using namespace std;

#define MAXLIVROS 10

typedef struct {
    string nome;
    int id;
    int numeroPaginas;
    string autor;
}LIVRO;

LIVRO biblioteca[MAXLIVROS];
int qtdeLivros = 0;

int pegarId(){
    cout << "Informe o ID do livro";
    int id;
    cin >> id;
    return id;
}

void adicionarLivro(){
    if(qtdeLivros == MAXLIVROS){
        cout << "Biblioteca Cheia, o livro nao pode ser inserido!";
        return;
    }

    LIVRO novoLivro;
    cout << "Insira o ID" << endl;
    cin >> novoLivro.id;
    cout << "Insira o nome" << endl;
    cin >> novoLivro.nome;
    cout << "Insira o autor" << endl;
    cin >> novoLivro.autor;
    cout << "Insira o numero de paginas" << endl;
    cin >> novoLivro.numeroPaginas;

    biblioteca[qtdeLivros] = novoLivro;
    qtdeLivros++;
}

void editarLivro(){
    
}


void removerLivro();

void exibirLivro(){
    int id = pegarId();
    LIVRO livro;
    for(int i = 0; i < qtdeLivros; i++){
        if(biblioteca[i].id == id){
            livro = biblioteca[i];
        }
    }
    cout << "Nome: " << livro.nome << "\nAutor: " << livro.autor << "\nNumero de Paginas: " << livro.numeroPaginas << endl;
}

void exibirBiblioteca(){
    for(int i = 0; i < qtdeLivros; i++){
        cout << "Nome: " << biblioteca[i].nome << endl;
        cout << "Autor: " << biblioteca[i].autor << endl;
        cout << "Numero de paginas: " << biblioteca[i].numeroPaginas << endl;
    }
}

int main(){

    cout <<  "Insira seu comando \n 1-Adicionar \n 2-Editar \n 3-Exibir Livro \n 4-Exibir biblioteca \n 5-Remover Livro";
    int in = 0;
    while(cin >> in){
        switch(in){
            case 1:
                adicionarLivro();
                break;
            case 2:
                editarLivro();
                break;
            case 3:
                exibirLivro();
                break;
            case 4:
                exibirBiblioteca();
                break;
            case 5:
                removerLivro();
                break;
            default:
                cout << "Digite um comando valido";
        }
    }

    return 0;
}