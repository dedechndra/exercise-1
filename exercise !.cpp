#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int nilaiMatematika;
    int nilaiBahasaInggris;
    bool diterima;
};
int main() {
    const int JUMLAH_MAHASISWA = 20;

    Mahasiswa mahasiswa[JUMLAH_MAHASISWA];

    // Input nilai mahasiswa
    for (int i = 0; i < JUMLAH_MAHASISWA; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nama;

        cout << "Masukkan nilai matematika mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nilaiMatematika;

        cout << "Masukkan nilai bahasa Inggris mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i].nilaiBahasaInggris;

        // Cek apakah diterima
        if ((mahasiswa[i].nilaiMatematika + mahasiswa[i].nilaiBahasaInggris) / 2 >= 70 || mahasiswa[i].nilaiMatematika > 80) {
            mahasiswa[i].diterima = true;
        }
        else {
            mahasiswa[i].diterima = false;
        }
    }
