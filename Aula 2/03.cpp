#include <iostream>
using namespace std;

int main(){
    double nota[4] = {0};

    for (int i = 0; i < 4; i++){
        cin >> nota[i];
        if(i < 3) {
            cout << "A sua media parcial eh: " << endl;
        } else {
            cout << "A sua media final eh: ";
        }
        cout << (nota[0]*1 + nota[1]*2 + nota[2]*2 + nota[3]*3)/8.0 << endl;
    }
    return 0;
}
