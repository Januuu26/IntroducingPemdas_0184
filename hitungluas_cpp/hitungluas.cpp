#include <iostream>
using namespace std;




void input() {
    cout << "Masukkan luas: ";
    cin >> r; 
}

float luasLingkaran(float r) {
    return phi * r * r;
}
float jumlah(float phi, float r) {
    return phi * r * r;

}

void output() {
    cout << "Hasilnya : " << luasLingkaran(r) << endl;
}

int main() {
    input();
    output();
    cout << "Hasil dari penjumlahan : " << jumlah(phi, r) << endl;
}

