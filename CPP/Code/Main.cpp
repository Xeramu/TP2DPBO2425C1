#include <string>
#include <iostream>
using namespace std;

#include "Spesifikasi.cpp"

int main(){

	Spesifikasi barang1("Laptop", "001", "Asus", 10, 65, 2.5, 8000000, "2", "2012");
    Spesifikasi barang2("Mouse", "002", "Usus", 16, 40, 5.2, 50000, "2", "2016");

    cout << "================================================" <<endl;
    cout << "Barang 1:" <<endl;
    cout << "Nama   : " << barang1.getNama() << endl;
    cout << "Kode   : " << barang1.getKode() << endl;
    cout << "Merk   : " << barang1.getMerk() << endl;
    cout << "Stok   : " << barang1.getStok() << endl;
    cout << "Daya   : " << barang1.getDaya() << " Watt" << endl;
    cout << "Berat  : " << barang1.getBerat() << " Kg" << endl;
    cout << "Harga  : Rp " << barang1.getHarga() << endl;
    cout << "Garansi: " << barang1.getGaransi() << " Tahun" << endl;
    cout << "Tahun Produksi : " << barang1.getTahunproduksi() << endl;
    cout << "================================================" <<endl;

    cout << "Barang 2:" <<endl;
    cout << "Nama   : " << barang2.getNama() << endl;
    cout << "Kode   : " << barang2.getKode() << endl;
    cout << "Merk   : " << barang2.getMerk() << endl;
    cout << "Stok   : " << barang2.getStok() << endl;
    cout << "Daya   : " << barang2.getDaya() << " Watt" << endl;
    cout << "Berat  : " << barang2.getBerat() << " Kg" << endl;
    cout << "Harga  : Rp " << barang2.getHarga() << endl;
    cout << "Garansi: " << barang2.getGaransi() << " Tahun" << endl;
    cout << "Tahun Produksi : " << barang2.getTahunproduksi() << endl;
    cout << "================================================" <<endl;


	return 0;
}