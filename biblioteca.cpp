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
    cout << "Informe o ID do livro"  << endl;
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
    int idInserido;
    cin >> idInserido;
    for(int i = 0; i < qtdeLivros; i++){
        if(biblioteca[i].id == idInserido){
            cout << "ID ja existe, insira outro livro \n";
            return;
        }
    }
    novoLivro.id = idInserido;
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

void removerLivro(){
    int id = pegarId();
    int indexLivro = 0;
    LIVRO livro;

    for(int i = 0; i < qtdeLivros; i++){
        if(biblioteca[i].id == id){
            //Ajeita os index
            for(int j = i; j < qtdeLivros; j++){
                biblioteca[j] = biblioteca[j+1];
            }
            qtdeLivros--;
            break;
        }
    }
    cout << "Livro não encontrado";
}


void exibirLivro(){
    int id = pegarId();
    LIVRO livro;
    int i = 0;
    for(i; i < qtdeLivros; i++){
        if(biblioteca[i].id == id){
            livro = biblioteca[i];
            break;
        }
    }

    if(i != qtdeLivros){
        cout << "Nome: " << livro.nome << "\nAutor: " << livro.autor << "\nNumero de Paginas: " << livro.numeroPaginas << endl;
    }else{
        cout << "Livro nao encontrado!" << endl;
    }

}

void exibirBiblioteca(){
    if(qtdeLivros > 0){
        for(int i = 0; i < qtdeLivros; i++){
            cout << "Nome: " << biblioteca[i].nome << endl;
            cout << "Autor: " << biblioteca[i].autor << endl;
            cout << "Numero de paginas: " << biblioteca[i].numeroPaginas << endl;
        }
    }else{
        cout << "Bilioteca vazia!" << endl;
    }

}

int main(){
    int in = 0;
    do{
        cout <<  "Insira seu comando \n 1-Adicionar \n 2-Editar \n 3-Exibir Livro \n 4-Exibir biblioteca \n 5-Remover Livro\n 6-Fechar programa \n";
        cin >> in;
        switch(in){
            case 1:
                adicionarLivro();
                break;
            case 2:
                //editarLivro();
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
                cout << "Digite um comando valido! \n";
        }
    }while(in != 6);

    return 0;
}
