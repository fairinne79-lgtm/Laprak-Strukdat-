#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Jumlah mahasiswa (maks 10): ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;

        cin.ignore();
        cout << "Nama  : ";
        getline(cin, mhs[i].nama);

        cout << "NIM   : ";
        getline(cin, mhs[i].nim);

        cout << "UTS   : ";
        cin >> mhs[i].uts;

        cout << "UAS   : ";
        cin >> mhs[i].uas;

        cout << "Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].uts,
            mhs[i].uas,
            mhs[i].tugas
        );
    }

    cout << "\n===== DATA MAHASISWA =====" << endl;
    cout << left
         << setw(15) << "Nama"
         << setw(15) << "NIM"
         << setw(8) << "UTS"
         << setw(8) << "UAS"
         << setw(8) << "Tugas"
         << setw(12) << "Nilai Akhir"
         << endl;

    for(int i = 0; i < n; i++) {
        cout << left
             << setw(15) << mhs[i].nama
             << setw(15) << mhs[i].nim
             << setw(8) << mhs[i].uts
             << setw(8) << mhs[i].uas
             << setw(8) << mhs[i].tugas
             << setw(12) << fixed << setprecision(2) << mhs[i].nilaiAkhir
             << endl;
    }

    return 0;
}