#include <iostream>

using namespace std;

typedef struct{
    int ID;
    int nPag;
    string nome;
    string autor;
}LIVRO;

int quantLivros = 0;
LIVRO biblioteca[100];

void adicionar(){
    if(quantLivros == 100){
        cout << "Biblioteca cheia" << endl;
        return;
    }
    LIVRO novoLivro;
    cout << "Insira o ID " << endl;
    cin >> novoLivro.ID;
    cout << "Insira o nome" << endl;
    cin.ignore();
    getline(cin, novoLivro.nome);
    cout << "Insira o autor" << endl;
    getline(cin, novoLivro.autor);
    cout << "Insira o numero de paginas" << endl;
    cin >> novoLivro.nPag;
    biblioteca[quantLivros] = novoLivro;
    quantLivros++;
}

void exibirLivro() {
    int id;
    cout << "Informe o ID" << endl;
    cin >> id;
    for(int i = 0; i < quantLivros; i++) {
        if(id == biblioteca[i].ID) {
            cout << "Nome do livro: " << biblioteca[i].nome << endl;
            cout << "Nome do autor: " << biblioteca[i].autor << endl;
            cout << "Numero de paginas: " << biblioteca[i].nPag << endl;
            return;
        }
    }
    cout << "Livro nao encontrado" << endl;
}

void exibirBiblioteca (){
    for(int i = 0; i < quantLivros; i++){
        cout << "ID: " << biblioteca[i].ID << endl;
        cout << "Nome do livro: " << biblioteca[i].nome << endl;
        cout << "Nome do autor: " << biblioteca[i].autor << endl;
        cout << "Numero de paginas: " << biblioteca[i].nPag << endl;
        cout << endl;
    }
}

void excluirLivro (){
    cout << "Insira o ID do livro que deseja excluir :" << endl;
    int ID;
    cin >> ID;
    for(int i = 0; i<quantLivros; i++) {
        if(biblioteca[i].ID == ID) {
            for(int j = i; j < quantLivros; j++){
                if(j+1 != quantLivros){
                    biblioteca[j] = biblioteca[j+1];
                }
            }
           quantLivros--;
           cout << "Livro excluido" << endl;
           return;
        }
    }
    cout << "Sem livro irmao" << endl;


}

int main(){

    int resposta = 0;

    do{
        cout << "Insira seu comando" << endl;
        cout << "1-Adicionar livro " << endl;
        cout << "2-Exibir Livro" << endl;
        cout << "3-Exibir biblioteca" << endl;
        cout << "4-Excluir livro" << endl;
        cout << "5-Fechar programa" << endl;
        cin >> resposta;
        switch(resposta){
        case 1:
            adicionar();
            break;
        case 2:
            exibirLivro();
            break;
        case 3:
            exibirBiblioteca();
            break;
        case 4:
            excluirLivro();
            break;
        default:
            cout << "Digite um comando valido cara" << endl;
        }
    }while(resposta != 5);

    return 0;
}
