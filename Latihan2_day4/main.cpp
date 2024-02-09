#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int j = 10;
    int k;

    while(j>= 1) {
        k=1;
        while(k<=j) {
            cout << setw(10) << k*j << " ";
            k++;
        }
        cout << "\n";
        j--;
    }
    return 0;
}
