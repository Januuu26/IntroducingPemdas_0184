
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
    