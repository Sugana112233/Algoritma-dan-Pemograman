#include <iostream>
using namespace std;

void multiplyArray(int arr[],int n,int multiplier) {
    for (int i = 0; i < n; i++){
     arr[i] *= multiplier;
    }
}

void addToArray(int arr[],int n,int valueToAdd) {
    for (int i = 0; i < n; i++) {
    arr[i] += valueToAdd;
    }
}

void substractFromArray(int arr[], int n, int valueToSubstract){
    for (int i = 0; i < n; i++) {
    arr[i] -= valueToSubstract;
    }
}

int main () {
    int n;

    cout << "MASUKKAN UKURAN ARRAY: ";
    cin >> n;

    int arr[n];
    cout << "MASUKKAN" << n << "elemen untuk array:" << endl;
    for  (int i = 0; i < n; i++) {
    cout << "Elemen ke-" << i + 1 <<":";
    cin >> arr[i];
    }

    cout << "ELEMEN-ELEMEN DALAM ARRAY SEEBELUM OPERASI ADALAH:" <<endl;
    for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    int pilih;
    do {
    cout << "Pilih operai yang ingin dilakukan pada array:" << endl;
    cout << "1. KALIKAN DENGAN NILAI TERTENTU" << endl;
    cout << "2. TAMBAHKAN DENGAN NILAI TERTENTU" << endl;
    cout << "3. KURANGI DENGAN NILAI TERTENTU" << endl;
    cout << "4. KELUAR" << endl;
    cout << "MASUKKAN PILIHAN :";
    cin >> pilih;

    if(pilih == 1) {
      int multiplier;
      cout << "MASUKKAN NILAI PENGALI: ";
      cin >> multiplier;
      multiplyArray(arr, n, multiplier);

    }else if(pilih == 2) {
      int valueToAdd;
      cout << "MASUKKAN NILAI UNTUK DI TAMBAHKAN: ";
      cin >> valueToAdd;
      addToArray(arr , n, valueToAdd);

    }else if(pilih == 3) {
      int valueToSubstract;
      cout << "MASUKKAN NILAI UNTUK DI KURANGKAN :";
      cin >> valueToSubstract;
      substractFromArray(arr , n, valueToSubstract);
    }
     if(pilih >= 1 && pilih <= 3){
      cout << "ELEMEN-ELEMEN DALAM ARRAY SETELAH OPERASI ADALAH :" << endl;
      for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
      }
      cout << endl;
     }

    }while (pilih != 4);

    cout << "PROGRAM SELESAI." << endl;
    return 0;
}

