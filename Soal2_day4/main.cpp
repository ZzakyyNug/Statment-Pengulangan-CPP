#include <iostream>
using namespace std;

int pow(int bil_051, int pangkat) {
    int hasil = 1;
    while (pangkat > 0) {
        if (pangkat % 2 == 1) {
            hasil *= bil_051;
        }
        bil_051 *= bil_051;
        pangkat /= 2;
    }
    return hasil;
}

int main() {
    int bil_051, pangkat;

    cout << "Masukkan bilangan: ";
    cin >> bil_051;

    cout << "Masukkan pangkat: ";
    cin >> pangkat;

    int hasil = pow(bil_051, pangkat);

    cout << bil_051 << " pangkat " << pangkat << " adalah : " << hasil << endl;

    return 0;
}
