#include <string>
#include <iostream>
using namespace std;

#include "Spesifikasi.cpp"

int main(){

	Spesifikasi barang("Laptop", "LP001", "Asus", 10, 65, 2.5, 8000000, "2", "2012");

    cout << "Nama   : " << barang.getNama() << endl;
    cout << "Kode   : " << barang.getKode() << endl;
    cout << "Merk   : " << barang.getMerk() << endl;
    cout << "Stok   : " << barang.getStok() << endl;
    cout << "Daya   : " << barang.getDaya() << " Watt" << endl;
    cout << "Berat  : " << barang.getBerat() << " Kg" << endl;
    cout << "Harga  : Rp " << barang.getHarga() << endl;
    cout << "Garansi: " << barang.getGaransi() << " Tahun" << endl;
    cout << "Tahun Produksi : " << barang.getTahunproduksi() << endl;

	return 0;
}