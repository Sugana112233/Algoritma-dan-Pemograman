#include <iostream>
using namespace std;

int perkalian (int a, int b) {
    int hasil = a * b ;
    return hasil;
}

int terbesar (int a, int b) {
    int hasil;
    if (a < b) {
        hasil = a ;

    }
    else  {
        hasil = b ;
    }
    return hasil ;
}


void cekGanjilGenap (int num) {
    if (num % 2 == 0) {
       cout << "Genap" ;
    }
    else {
       cout << "Ganjil" ;
    }
}

int main () {
    int opsi;
    cout << " Menu :" << endl;
    cout << "1. PERKALIAN DUA ANGKA: " << endl;
    cout << "2. ANGKA TERBESAR DARI DUA: " << endl;
    cout << "3. CEK ANGKA GENAP ATAU GANJIL: " <<endl;
    cout << "Pilih Opsi: ";
    cin >> opsi;

    if (opsi == 1) {
       int x, y ;
       cout << "MASUKKAN ANGKA: ";
       cin >> x >> y ;
       cout << "HASIL PERKALIAN: " << perkalian(x, y) << endl;
    }
    else if (opsi == 2) {
       int x, y ;
       cout << "MASUKKAN ANGKA: ";
       cin >> x >> y ;
       cout << "ANGKA TERBESAR: " << terbesar(x, y) << endl;
    }
    else if (opsi == 3) {
       int num;
       cout << "MASUKKAN ANGKA: ";
       cin >> num;
       cekGanjilGenap(num) ;
       cout << endl;
    }
    else {
       cout << "OPSI TIDAK VALID: " << endl;
    }

    return 0;
}
