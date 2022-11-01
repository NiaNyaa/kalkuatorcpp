// Kalkulator C++
#include <iostream>
using namespace std;

int main()
{
//system("clear");
int pil;

cout << "Program Kalkuator\n" << endl;

cout << "1. Penjumlahan" << endl;
cout << "2. Pengurangan" << endl;
cout << "3. Perkalian" << endl;
cout << "4. Pembagian" << endl;

cout << "Masukkan Pilihan: ";
cin >> pil;

// Penjumlahan
if (pil == 1){
int tmbh1;
int tmbh2;
cout << "\nMasukkan Angka Pertama: ";
cin >> tmbh1;
cout << "Masukkan Angka Kedua: ";
cin >> tmbh2;

int hasiltambah = tmbh1 + tmbh2;
cout << "Hasil: " << hasiltambah << endl;
}

// Pengurangan
else if (pil == 2){
int kurang1;
int kurang2;

cout << "\nMasukkan Angka Pertama: ";
cin >> kurang1;
cout << "Masukkan Angka Kedua: ";
cin >> kurang2;
int hasilkurang = kurang1 - kurang2;

cout << "Hasil: " << hasilkurang << endl;
}

// Perkalian
else if (pil == 3){
int kali1;
int kali2;

cout << "\nMasukkan Angka Pertama: ";
cin >> kali1;
cout << "Masukkan Angka Kedua: ";
cin >> kali2;

int hasilkali = kali1*kali2;

cout << "Hasil: " << hasilkali << endl;
}

// Pembagian
else if (pil == 4){
float bagi1;
float bagi2;

cout << "\nMasukkan Angka Pertama: ";
cin >> bagi1;
cout << "Masukkan Angka Kedua: ";
cin >> bagi2;

float hasilbagi = bagi1/bagi2;

cout << "Hasil: " << hasilbagi << endl;
}

// Kondisi Pilihan Salah
else {
cout << "Pilihan Salah" << endl;
}

return 0;
}
