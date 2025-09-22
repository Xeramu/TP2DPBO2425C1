#include <string>
#include <iostream>
#include <vector>

//buat print tabel yg dinamis
#include <iomanip>

using namespace std;

//manggil file kelas
#include "Spesifikasi.cpp"

//fungsi buwat menu
void menu(){
    cout << "\n== Menu Toko Elektronik el Angjay == " << endl;
    cout << "1. Create" << endl;
    cout << "2. Read" << endl;
    cout << "3. Update" << endl;
    cout << "4. Delete" << endl;
    cout << "5. Nyari barang berdasarkan kode" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
}

//fungsi buat nyari kode barang dalam list
//for loop ke smua barang yg ada dalem vector trus dimatching sama input kode yang dicari
int carikode(vector<Spesifikasi>& daftarBarang, string kode){
    for(int i = 0; i < daftarBarang.size(); i++){
        if(daftarBarang[i].getKode() == kode){
            return i;//klo nemu, return index
        }
    }
    return -1;//klo engga nemu, return -1
}

void read(vector<Spesifikasi>& daftarBarang){
    //READ
    //klo blm ada isinya, kode bakal ngeprint enih
    if(daftarBarang.empty()){
    cout << "Belum ada barang beb\n" << endl;
    }
    else{
        cout << "\n== Daftar Barang Toko Elektronik el Angjay ==\n" << endl;
        //header tabel
        cout << left 
        << setw(5)  << "No"
        << setw(15) << "Nama"
        << setw(10) << "Kode"
        << setw(12) << "Merk"
        << setw(8)  << "Stok"
        << setw(8)  << "Daya"
        << setw(10) << "Berat"
        << setw(12) << "Harga"
        << setw(10) << "Garansi"
        << setw(15) << "Tahun Produksi"
        << endl;

        cout << string(110, '=') << endl;//garis pembatas

        //for looping smua barang yg ada dlm vector dari pertama sampai akhir trus ditampilin pake getter
        //isi tabel
        for(int i = 0; i < daftarBarang.size(); i++){
            cout << left
            << setw(5)  << i+1
            << setw(15) << daftarBarang[i].getNama()
            << setw(10) << daftarBarang[i].getKode()
            << setw(12) << daftarBarang[i].getMerk()
            << setw(8)  << daftarBarang[i].getStok()
            << setw(8)  << daftarBarang[i].getDaya()
            << setw(10) << daftarBarang[i].getBerat()
            << setw(12) << daftarBarang[i].getHarga()
            << setw(10) << daftarBarang[i].getGaransi()
            << setw(15) << daftarBarang[i].getTahunproduksi()
            << endl;
        }
        cout << endl;
    }
}

int main(){

    //bikin list yang dnimais pake vector
    vector<Spesifikasi> daftarBarang;

    //5 objek awals
    daftarBarang.push_back(Spesifikasi("Laptop", "001", "Usus", 10, 65, 2.5, 8000000, "2", "2012"));
    daftarBarang.push_back(Spesifikasi("Mouse", "002", "Ligotech", 20, 5, 0.2, 150000, "1", "2020"));
    daftarBarang.push_back(Spesifikasi("Keyboard", "003", "Rozor", 15, 10, 0.5, 500000, "1", "2019"));
    daftarBarang.push_back(Spesifikasi("Monitor", "004", "Smasmug", 5, 40, 4.5, 2500000, "2", "2021"));
    daftarBarang.push_back(Spesifikasi("Printer", "005", "PH", 8, 100, 6.0, 1200000, "1", "2018"));

    //read isi daftar barang
    read(daftarBarang);

    //CREATE
    //minta inputan user
    string nama, kode, merk, garansi, tahunproduksi;
    int stok, daya, harga;
    double berat;
    getline(cin, nama);
    getline(cin, kode);
    getline(cin, merk);
    cin >> stok;
    cin >> daya;
    cin >> berat;
    cin >> harga;
    cin.ignore();
    getline(cin, garansi);
    getline(cin, tahunproduksi);

    //lngsng masukin barang baru ke vectorr
    daftarBarang.push_back(Spesifikasi(nama, kode, merk, stok, daya, berat, harga, garansi, tahunproduksi));
    cout << "Barang berhasil ditambahkan!\n" << endl;

    read(daftarBarang);

	return 0;
}

//jgn lupa ygy :D
//g++ -c *.cpp
//g++ Main.cpp Produk.cpp -o Produk.exe
//g++ Main.cpp Detail.cpp -o Detail.exe
//g++ Main.cpp Spesifikasi.cpp -o Spesifikasi.exe
//spesifikasi.exe