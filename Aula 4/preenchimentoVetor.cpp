#include <iostream>
using namespace std;

int main(){
    int total[15];
    int par[5];
    int impar[5];
    int contPar = 0, contImpar = 0, numero;

    for(int i = 0; i < 15; i++) {
        cin >> total[i];
    }

    for(int i = 0; i < 15; i++){
        numero = total[i];

        //tratamento par
        if(numero%2 == 0){
            if(contPar < 5) {
                par[contPar] = numero;
                contPar++;
            }
            else {
                for (int j = 0; j < 5; j++){
                    cout <<  "par[" << j <<"] = " << par[j] << endl;
                }
                //cout << " fim" << endl;
                contPar = 0;
                par[contPar] = numero;
                contPar++;
            }
        }


        //tratamento impar
        if(numero%2 == 1 || numero%2 == -1){
            if(contImpar < 5) {
                impar[contImpar] = numero;
                contImpar++;
            }
            else {
                for (int j = 0; j < 5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                //cout << " fim" << endl;
                contImpar = 0;
                impar[contImpar] = numero;
                contImpar++;
            }
        }
    }


    for(int k = 0; k < contImpar; k ++){
        cout << "impar[" << k << "] = " << impar[k] << endl;
    }

    for(int k = 0; k < contPar; k ++){
        cout << "par[" << k <<"] = " << par[k] << endl;
    }


    return 0;
}


