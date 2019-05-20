#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    char nomeArquivo[] = {};
    cout << "Digite o nome do arquivo: ";
    cin >> nomeArquivo;
    FILE *arquivo;
    arquivo = fopen(nomeArquivo, "r");
    int lin, col;
    int qtdVogais = 0;

    if(arquivo == NULL){
        cout << "Arquivo nao encontrado" << endl;
    }else{
        fscanf(arquivo, "%d %d\n",&lin,&col);
        char **matriz = (char**)malloc(lin * sizeof(char*));
        for(int i = 0; i < lin; i++){
            matriz[i] = (char*)malloc(col * sizeof(char));
            for(int j = 0; j < col; j++){
                matriz[i][j] = fgetc(arquivo);
                cout << matriz[i][j] << " ";
                if ( matriz[i][j]== 'A'||matriz[i][j]== 'E'||matriz[i][j]== 'I'||matriz[i][j]== 'O'||matriz[i][j]== 'U'){
                    qtdVogais++;
                }
            }
            fgetc(arquivo);
            cout << endl;
        }
    cout << qtdVogais << endl;
    }
    free(m);
    fclose(arquivo);

return 0;
}
