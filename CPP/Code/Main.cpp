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

int main(){

    //bikin list yang dnimais pake vector
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
            int stok, daya, harga;
            double berat;
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
                string namaBaru, merkBaru, garansiBaru, tahunproduksiBaru;
                int stokBaru, dayaBaru, hargaBaru;
                double beratBaru;
                cout << "Masukkan Nama barang baru: ";
                getline(cin, namaBaru);
                cout << "Masukkan Merk barang baru: ";
                getline(cin, merkBaru);
                cout << "Masukkan Stok barang baru: ";
                cin >> stokBaru;
                cout << "Masukkan Daya barang baru: ";
                cin >> dayaBaru;
                cout << "Masukkan Berat barang baru: ";
                cin >> beratBaru;
                cout << "Masukkan Harga barang baru: ";
                cin >> hargaBaru;
                cin.ignore();
                cout << "Masukkan Garansi barang baru: ";
                getline(cin, garansiBaru);
                cout << "Masukkan Tahun Produksi barang baru: ";
                getline(cin, tahunproduksiBaru);

                //ngupdate pake setter
                daftarBarang[idx].setNama(namaBaru);
                daftarBarang[idx].setMerk(merkBaru);
                daftarBarang[idx].setStok(stokBaru);
                daftarBarang[idx].setDaya(dayaBaru);
                daftarBarang[idx].setBerat(beratBaru);
                daftarBarang[idx].setHarga(hargaBaru);
                daftarBarang[idx].setGaransi(garansiBaru);
                daftarBarang[idx].setTahunproduksi(tahunproduksiBaru);

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
                cout << "Engga nemu barang dengan kode: " << kode << " bang\n" << endl;
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
                cout << "Barang ditemukan: " << endl;
                cout << "\n== Daftar Barang Toko Elektronik el Angjay ==\n" << endl;
                //header tabel
                cout << left 
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
                cout << left
                << setw(15) << daftarBarang[idx].getNama()
                << setw(10) << daftarBarang[idx].getKode()
                << setw(12) << daftarBarang[idx].getMerk()
                << setw(8)  << daftarBarang[idx].getStok()
                << setw(8)  << daftarBarang[idx].getDaya()
                << setw(10) << daftarBarang[idx].getBerat()
                << setw(12) << daftarBarang[idx].getHarga()
                << setw(10) << daftarBarang[idx].getGaransi()
                << setw(15) << daftarBarang[idx].getTahunproduksi()
                << endl;            
            }
            //klo engga nemu, print enih
            else{
                cout << "Barang dengan kode " << kode << " tidak ditemukan!\n" << endl;
            }

        }
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

//jgn lupa ygy :D
//g++ -c *.cpp
//g++ Main.cpp Produk.cpp -o Produk.exe
//g++ Main.cpp Detail.cpp -o Detail.exe
//g++ Main.cpp Spesifikasi.cpp -o Spesifikasi.exe
//spesifikasi.exe