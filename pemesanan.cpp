#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string namaCustomer;
    int pilihanKamar, lamaInap;
    long hargaPerMalam, totalBayar;
    
    string tipeKamar[] = {"Standard", "Deluxe", "Executive"};
    long daftarHarga[] = {600000, 1000000, 1500000};

    cout << "========================================" << endl;
    cout << "     SISTEM PEMESANAN HOTEL MAGNOLIA      " << endl;
    cout << "========================================" << endl;

    cout << "Nama Pelanggan : ";
    getline(cin, namaCustomer);

    cout << "\nPilihan Tipe Kamar:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << tipeKamar[i] << " (Rp" << daftarHarga[i] << "/malam)" << endl;
    }

    cout << "\nPilih tipe kamar (1-3): ";
    cin >> pilihanKamar;

    if (pilihanKamar == 1) {
        hargaPerMalam = daftarHarga[0];
    } else if (pilihanKamar == 2) {
        hargaPerMalam = daftarHarga[1];
    } else if (pilihanKamar == 3) {
        hargaPerMalam = daftarHarga[2];
    } else {
        cout << "Pilihan tidak tersedia!" << endl;
        return 0;
    }

    cout << "Lama menginap (malam): ";
    cin >> lamaInap;

    totalBayar = hargaPerMalam * (long)lamaInap;

    cout << "\n========================================" << endl;
    cout << "           STRUK PEMBAYARAN             " << endl;
    cout << "========================================" << endl;
    cout << "Nama Pelanggan : " << namaCustomer << endl;
    cout << "Tipe Kamar     : " << tipeKamar[pilihanKamar - 1] << endl;
    cout << "Lama Inap      : " << lamaInap << " malam" << endl;
    cout << "Harga/Malam    : Rp" << hargaPerMalam << endl;
    cout << "----------------------------------------" << endl;
    cout << "TOTAL BAYAR    : Rp" << totalBayar << endl;
    cout << "========================================" << endl;
    cout << "   Terima Kasih Telah Menginap!         " << endl;

    return 0;
}
