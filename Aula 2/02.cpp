#include <iostream>

using namespace std;

int main(){
    int n, a, b, c;

    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> a >> b >> c;

        if(a == 1 && (b == 0 || b == 1)&& c == 0)
        {
            cout << "Bacteria se encaixa no grupo 1" << endl;
        }else if (a==0 && (b==0 || b==2) && (c>= 300 && c<=500) && (c%2==0)){
            cout << "Bacteria se encaixa no grupo 2" << endl;
        }else if ((a==1 || a==0) && (b==0 || b==1 || b==2) && (c>=100 && c<=200) && (c%2!=0)){
            cout << "Bacteria se encaixa no grupo 3" << endl;
        } else {
            cout << "Bacteria nao se encaixa nos grupos da pesquisa" << endl;
        }

    }

    return 0;
}
