#include <iostream>

using namespace std;

int main() {

    int bil;
    long faktorial = 1;

    cout << "Masukan bilangan bulat positif: ";
    cin >> bil;

    int c = bil;
    cout << c << "! = ";

    while (c >= 1) {
        faktorial *= c;
        if (c!=1){
            cout << c << " x ";
        } else {
            cout << c << " = ";
        }
        c--;
    }
    cout << "Faktorial dari " << bil << " adalah " << faktorial << endl;
    return 0;
}
