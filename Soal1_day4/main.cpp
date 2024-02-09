#include <iostream>

using namespace std;

int main() {
    int bil_051;
    int TN = 0;
    string kata = "Total nilai = ";

    cout << "Masukkan Bilangan Anda : ";
    cin >> bil_051;

    for (int i = bil_051; i>= 1; i--) {
        if (i!=1) {
            kata += to_string(i) + " + ";

        } else {
            kata += to_string(i) + " = ";
        }

        TN += i;
    }

    cout << kata << TN << endl;

    return 0;
}
