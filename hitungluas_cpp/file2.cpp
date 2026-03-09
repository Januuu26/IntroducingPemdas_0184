#include <iostream>
using namespace std;

float Rata_rata(float a, float b) {
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60) 
        return "Lulus";
    else 
        return "Tidak Lulus";

}
int main() {
    float nilBI, nilMTK, rata_rata;

    cout << "Masukkan nilai Bahasa Indonesia: ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika: ";
    cin >> nilMTK;

    rata_rata = Rata_rata(nilBI, nilMTK);

    cout << "Status kelulusan: " << Status_lulus(rata_rata)<<" ,dengan nilai rata-rata: "<<rata_rata<<endl;
}
