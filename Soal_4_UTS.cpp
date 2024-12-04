#include <iostream>
using namespace std;


void tampilanMenu() {
    cout << "===== NAMA MOTOR =====" << endl;


    cout << endl;

    cout << "1. MOTOR NMAX NEW          - Rp 33000000" << endl;
    cout << "2. MOTOR BEAT NEW          - Rp 18430000" << endl;
    cout << "3. MOTOR SCOOPY NEW        - Rp 23000000" << endl;
    cout << "4. MOTOR VARIO NEW 125     - Rp 23310000" << endl;
    cout << "5. MOTOR XMAX NEW          - Rp 72000000" << endl;
    cout << "6. MOTOR PCX NEW 160       - Rp 32670000" << endl;
    cout << "7. MOTOR LEXI NEW 155      - Rp 29900000" << endl;
    cout << "8. BATAL" << endl;


}

int hargaMotor (int pilihan) {
    switch (pilihan) {
    case 1:
        return 33000000;
    case 2:
        return 18430000;
    case 3:
        return 23000000;
    case 4:
        return 23310000;
    case 5:
        return 72000000;
    case 6:
        return 32670000;
    case 7:
         return 29900000;
    default:
         return -1;
    }
}


int main() {
    int pilihan, harga;
    bool lanjut = true;

    while (lanjut) {
            cout << endl;
            tampilanMenu();

            cout << "PILIH MENU NAMA MOTOR ATAU BATAL: ";
            cin >> pilihan;

            cout << endl;


        if (pilihan == 8){
                break;
        } else if (pilihan <= 7){
            harga = hargaMotor(pilihan);
            cout << "MOTOR YANG DI PILIH : " << pilihan <<endl;
            cout << "DENGAN HARGA        : Rp " << harga << endl;
        } else {
            cout << "PILIH" << endl;
        }
    }
    return 0;
}
