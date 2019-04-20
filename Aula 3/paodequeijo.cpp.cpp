#include <iostream>
using namespace std;

int main(){

    int N, M;

    while(cin >> N >> M){
        int matriz[N][M];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> matriz[i][j];
            }
        } //LAORA
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(matriz[i][j] == 1){
                    cout << "9";
                } else {
                    int aux = 0;
                    if(i-1 >= 0) {
                      aux = aux + matriz[i-1][j];//daiti eh corno
                    }
                    if(i+1 < N){//joao gado d+
                      aux = aux + matriz[i+1][j];
                    }
                    if(j-1 >= 0){
                        aux += matriz[i][j-1];
                    }
                    if(j+1 < M){
                        aux += matriz[i][j+1]; // tengan eh ruim
                    }
                    cout << aux;
                }
            }
             cout << endl; //giovana armario
        }
    }
    return 0;
}
