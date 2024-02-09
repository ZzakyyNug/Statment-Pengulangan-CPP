#include <iostream>
#include <unistd.h>
using namespace std;

int kpk(){
    int hasil;
	int a_051, x;
	cout << "\n===== PENCARIAN KPK ====="<<endl;
	cout << "\nMasukan angka pertama : ";
	cin >> a_051;
	cout << "Masukan angka kedua : ";
	cin >> x;
	hasil = a_051;
	while(hasil%x!=0){
		hasil = hasil + a_051;
	}
	cout << "\n";
	cout << "Proses Pencarian KPK : "<<endl;
	for (int i = 1; i <= 10; i++) {
        cout  <<"bil 1 = "<< a_051 * i << "\t" <<"bil 2 = "<< x * i << endl;
    }

    cout << "\nKPK dari " << a_051 << " dan " << x << " adalah : " << hasil;
}

int fpb () {
    int a_051, x;
    int hasil;

    cout << "\n===== PENCARIAN FPB ====="<<endl;
    cout << "\nMasukkan bilangan pertama : ";
    cin >> a_051;
    cout << "Masukkan bilangan kedua : ";
    cin >> x;

    int aa = a_051;
    int xx = x;

    if (a_051 < x) {
        int i = a_051;
        a_051 = x;
        x = i;
    }

    cout << "\nProses pencarian FPB : "<<endl;

    do {
        hasil = a_051 % x;
        a_051 = x;
        x = hasil;
        cout << "bilangan pertama = " << a_051 << "\t" <<"bilangan kedua = " << x <<endl;
    } while (hasil !=0);

    cout << "\nFPB dari " << aa << " dan " << xx << " adalah : " << a_051;
}

int main() {

    int pilih;

    while (true) {
        cout << "===== MENU PENCARIAN KPK DAN FPB ====="<<endl;
        cout << "1. Kelipatan Persekutuan Terkecil (KPK)"<<endl;
        cout << "2. Faktor Persekutuan Terbesar (FPB)"<<endl;

        cout << "\nMasukkan Pilihan Anda : ";
        cin >> pilih;

        if (pilih == 1) {
            kpk();
            return 1;
        } else if (pilih == 2){
            fpb();
            return 2;
        } else {
            cout << "PILIHHHH SATU ATAU DUA BANGGG!!!"<<endl;
            cout << "Kembali otomatis dalam 3 detik";
            sleep(3);
            system("cls");
        }
    }

    return 0;
}
