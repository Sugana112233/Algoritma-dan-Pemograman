#include <iostream>
using namespace std;

int main() {
    int UTS,UAS,Tugas;
    string namaMhs,matkul;

    cout << "Masukkan nama matkul :";
    cin >> matkul;
    cout << "Massukkan nama mahasiswa :";
    cin >> namaMhs;
    cout << "Masukkan nilai UTS :";
    cin >> UTS;
    cout << "Masukkan nilai UAS :";
    cin >>UAS;
    cout << "Masukkan nilai Tugas :";
    cin >>Tugas;

    float hasil = ((0.3 * UTS) + (0.3 * Tugas) + (0.4 * UAS));

    cout << "\nOutput : "  << endl;
    cout << "=======================" << endl;
    cout << "Mata kuliah :" << matkul << endl;
    cout << "nama mahasiswa :" << namaMhs << endl;
    cout << "nilai UTS :" << UTS << endl;
    cout << "nila UAS :" << UAS << endl;
    cout << "Nilai Tugas :" << Tugas << endl;
    cout << "Hasil keseluruhan nilai :" << hasil << endl;

    if (hasil >= 85){
        cout << "Grade : A" << endl;
    } else if (hasil >= 80 ){
        cout << "Grade : A-" << endl;
    } else if (hasil >= 75 ){
        cout << "Grade : B+" << endl;
    } else if (hasil >= 70 ){
        cout << "Grade : B" << endl;
    } else if (hasil >= 65 ){
        cout << "Grade : B-" << endl;
    } else if (hasil >= 60 ){
        cout << "Grade : C" << endl;
    } else if (hasil >= 55 ) {
        cout << "Grade : D" << endl;
    }
    return 0;

}
