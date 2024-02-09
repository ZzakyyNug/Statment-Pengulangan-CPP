#include <iostream>

using namespace std;

int main(){
    int n = 10;

    cout << "Perulangan naik (Ascending):\n";
    for (int i = 1; i <= n; i++){
        cout << i << endl;
    }
    cout << "\n";

    cout << "Perulangan turun (Descending):n";
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
