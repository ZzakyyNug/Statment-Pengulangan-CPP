#include <iostream>

using namespace std;

int main() {
    int bilangan1, bilangan2;
    // Meminta pengguna untuk memasukan dua bilangan
    cout << "Masukan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukan Bilangan kedua: ";
    cin >> bilangan2;

    int fpb, sisa;

    // Melakukan perhitungan FPB dengan alhoritma Euclidean
    do {
        sisa = bilangan1 % bilangan2;
        bilangan1 = bilangan2;
        bilangan2 = sisa;
    } while ( sisa != 0);

    fpb = bilangan1;
    // Menampilkan hasil FPB
    cout << "Faktor persekutuan terbesar dari kedua bilangan adalah: " << fpb << endl;
    return 0;
}
