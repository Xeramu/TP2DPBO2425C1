#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include "Spesifikasi.cpp"

void menu(){
    cout << "== Menu Toko Elektronik el Angjay == " << endl;
    cout << "1. Create" << endl;
    cout << "2. Read" << endl;
    cout << "3. Update" << endl;
    cout << "4. Delete" << endl;
    cout << "5. Nyari barang berdasarkan kode" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main(){

    /*
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
    */

    vector<Spesifikasi> daftarBarang;
    int pilihan;

    do{
        //manggil fungsi nampilin menu
        menu();

        //minta input pilihan
        cin >> pilihan;

        if(pilihan == 1){
            //CREATE
            //minta inputan user
            string nama, kode, merk, garansi, tahunproduksi;
            int stok, daya, berat, harga;
            cout << "Masukkan Nama Barang: ";
            //biar getline engga lnsgng keskip
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Kode Barang: ";
            getline(cin, kode);
            cout << "Masukkan Merk Barang: ";
            getline(cin, merk);
            cout << "Masukkan Stok: ";
            cin >> stok;
            cout << "Masukkan Daya: ";
            cin >> daya;
            cout << "Masukkan Berat: ";
            cin >> berat;
            cout << "Masukkan Harga: ";
            cin >> harga;
            cin.ignore();
            cout << "Masukkan Garansi Barang: ";
            getline(cin, garansi);
            cout << "Masukkan Tahun Produksi Barang: ";
            getline(cin, tahunproduksi);

            //lngsng masukin barang baru ke vectorr
            daftarBarang.push_back(Spesifikasi(nama, kode, merk, stok, daya, berat, harga, garansi, tahunproduksi));
            cout << "Barang berhasil ditambahkan!\n" << endl;
        }
        else if(pilihan == 2){
            //READ
            cout << "\n== Daftar Barang Toko Elektronik el Angjay ==" << endl;
            //for looping smua barang yg ada dlm vector dari pertama sampai akhir trus ditampilin pake getter
            for(int i = 0; i < daftarBarang.size(); i++){
                cout << i+1 << ". " 
                << daftarBarang[i].getNama() << " | " 
                << daftarBarang[i].getKode() << " | " 
                << daftarBarang[i].getMerk() << " | " 
                << daftarBarang[i].getStok() << " | " 
                << daftarBarang[i].getDaya() << " | " 
                << daftarBarang[i].getBerat() << " | " 
                << daftarBarang[i].getHarga() << " | " 
                << daftarBarang[i].getGaransi() << " | " 
                << daftarBarang[i].getTahunproduksi() << endl;
                cout << "===========================================================================" <<endl;
            }
            cout << "\n";

            //klo blm ada isinya, kode bakal ngeprint enih
            if(daftarBarang.empty()){
                cout << "Belum ada barang beb\n" << endl;
            }

        }
        /*
        else if(pilihan == 3){
            //UPDATE
            string kode;
            cout << "Masukkin kode barang yang mau diupdate: ";
            //minta input user
            cin.ignore();
            getline(cin, kode);

            int idx = carikode(daftarBarang, kode);
            //klo nemu kodenya, lgsng bisa update
            if(idx != -1){
                //minta input user buwat update
                string namaBaru;
                int stokBaru, hargaBaru;
                cout << "Masukkan nama baru: ";
                getline(cin, namaBaru);
                cout << "Masukkan stok baru: ";
                cin >> stokBaru;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru;

                //ngupdate pake setter
                daftarBarang[idx].setNamabarang(namaBaru);
                daftarBarang[idx].setStok(stokBaru);
                daftarBarang[idx].setHarga(hargaBaru);

                cout << "Barang berhasil diupdate!\n" << endl;
            }
            //klo engga nemu, bakal print enih
            else{
                cout << "Engga nemu barang dengan kode: " << kode << " bang\n" << endl;
            }

        }
        else if(pilihan == 4){
            //DELETE
            //minta input user pake kode yg mau diapus
            string kode;
            cout << "Masukkan kode barang yang mau dihapus: ";
            cin.ignore();
            getline(cin, kode);

            //klo nemu kodenya, barang dengan kode itu diapus
            int idx = carikode(daftarBarang, kode);
            if(idx != -1){
                daftarBarang.erase(daftarBarang.begin() + idx);
                cout << "Barang berhasil dihapus!\n" << endl;
            } 
            //klo engga nemy, print enih
            else{
                cout << "Barang dengan kode " << kode << " tidak ditemukan!\n" << endl;
            }

        }
        else if(pilihan == 5){
            //SEARCH
            //minta inputan user
            string kode;
            cout << "Masukkan kode barang yang dicari: ";
            cin.ignore();
            getline(cin, kode);

            int idx = carikode(daftarBarang, kode);
            //klo nemu, print barang ditemukan
            if(idx != -1){
                cout << "Barang ditemukan: " << daftarBarang[idx].getNamabarang() << " | " << daftarBarang[idx].getKodebarang() << " | " << daftarBarang[idx].getStok() << " | " << daftarBarang[idx].getHarga() << "\n" << endl;
            }
            //klo engga nemu, print enih
            else{
                cout << "Barang dengan kode " << kode << " tidak ditemukan!\n" << endl;
            }

        }
            */
        //pilihan buat kluwar program. ntar print pesan pamit
        else if(pilihan == 6){
            cout << "Bye bye. Maacih :P\n" << endl;
        }
        //klo pilihan yg dimasukkan bkn 1-6, bakal print enih
        else{
            cout << "Pilihan tidak valid!\n" << endl;
        }

    }while (pilihan != 6);

	return 0;
}

//g++ -c *.cpp
//g++ Main.cpp Produk.cpp -o Produk.exe
//spesifikasi.exe