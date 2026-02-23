#include <iostream>
using namespace std;

int main(){
    int p, l, luas;

    //langkah1
    cout << "Masukan panjang: ";
    cin >> p;

    //langkah2
    cout << "Masukan lebar: ";
    cin >> l;

    //lamgkah3
    luas = p * l;

    //langkah4
    cout << "Hasilnya= " << luas << endl; 

}
#include <iostream>
using namespace std;

double hitungLuas(double r) {
    const double phi = 3.14159;
    return phi * r * r;
}

int main() {
    double r;
    cout << "Masukkan jari-jari: ";
    cin >> r;

    cout << "Luas = " << hitungLuas(r) << endl;

    return 0;
}
    