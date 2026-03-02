#include <iostream>
using namespace std;


float phi = 3.14159;
    int r;

float input() {
    cout << "Masukkan luas: ";
    cin >> r; 
}

float luasLingkaran(float r) {
    return phi * r * r;
}
float jumlah(float phi, float r) {
    return phi * r * r;

}



int main() {
    input();
    output();
    cout << "Hasil dari penjumlahan : " << jumlah(phi, r) << endl;
}
