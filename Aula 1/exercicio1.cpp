#include <iostream>

using namespace std;

int main(){
    int nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;
    double media;

    cin >> nota1;
    media = nota1 / 8.0;
    cout.precision(3);
    cout << "A sua media parcial eh: " << fixed << media << endl;

    cin >> nota2;
    media = (nota1 + 2 * nota2)/8.0;
    cout << "A sua media parcial eh: " << fixed << media << endl;

    cin >> nota3;
    media = ((nota1) + (2 * nota2) + (2 * nota3)) / 8.0;
    cout << "A sua media parcial eh: " << fixed << media << endl;

    cin >> nota4;
    media = ((nota1) + (2 * nota2) + (2 * nota3)+ (3 * nota4)) / 8.0;
    cout << "A sua media final eh: " << fixed << media << endl;

    return 0;
}
