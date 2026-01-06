#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlahKandidat, jumlahPemilih;
    
    cout << "=== SISTEM VOTING SEDERHANA ===" << endl;
    
    cout << "Masukkan jumlah kandidat: ";
    cin >> jumlahKandidat;
    
    string namaKandidat[jumlahKandidat];
    int perolehanSuara[jumlahKandidat];
    
    for (int i = 0; i < jumlahKandidat; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        cin >> namaKandidat[i];
        perolehanSuara[i] = 0;
    }
    
    cout << "\nMasukkan jumlah pemilih: ";
    cin >> jumlahPemilih;
    
    for (int i = 0; i < jumlahPemilih; i++) {
        int pilihan;
        cout << "\n--- Pemilih ke-" << i + 1 << " ---" << endl;
        for (int j = 0; j < jumlahKandidat; j++) {
            cout << j + 1 << ". " << namaKandidat[j] << endl;
        }
        
        cout << "Pilihan Anda (nomor): ";
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= jumlahKandidat) {
            perolehanSuara[pilihan - 1]++;
            cout << "Berhasil." << endl;
        } else {
            cout << "Tidak Valid." << endl;
        }
    }
    
    cout << "\n==============================" << endl;
    cout << "         HASIL VOTING         " << endl;
    cout << "==============================" << endl;
    
    int skorTertinggi = -1;
    string pemenang = "";
    bool statusSeri = false;

    for (int i = 0; i < jumlahKandidat; i++) {
        cout << namaKandidat[i] << ": " << perolehanSuara[i] << " suara" << endl;
        
        if (perolehanSuara[i] > skorTertinggi) {
            skorTertinggi = perolehanSuara[i];
            pemenang = namaKandidat[i];
            statusSeri = false;
        } else if (perolehanSuara[i] == skorTertinggi && skorTertinggi != 0) {
            statusSeri = true;
        }
    }
    
    cout << "------------------------------" << endl;
    if (statusSeri) {
        cout << "Hasil: SERI" << endl;
    } else if (skorTertinggi <= 0) {
        cout << "Hasil: Tidak Ada Pemenang" << endl;
    } else {
        cout << "Pemenang: " << pemenang << endl;
    }
    
    return 0;
}