/*
#include <string>
#include <iostream>
using namespace std;

class Produk {

	private:
		string nama;
		string kode;
		string merk;

	public:

		Produk(string nama, string kode, string merk){
            this->nama = nama;
            this->kode = kode;
            this->merk = merk;
		}

		void setNama(string nama) {
			this->nama = nama;
		}
		
		string getNama() {
			return this->nama;
		}
		
		void setKode(string kode) {
			this->kode = kode;
		}
		
		string getKode() {
			return this->kode;
		}
		
		void setMerk(string merk) {
			this->merk = merk;
		}
		
		string getMerk() {
			return this->merk;
		}
		
		~Produk(){ }

};
*/

#include <string>
#include <iostream>
using namespace std;

class Produk {
private:
    string nama;
    string kode;
    string merk;

public:
    Produk() {}

    Produk(string nama, string kode, string merk) {
        this->nama = nama;
        this->kode = kode;
        this->merk = merk;
    }

    void setNama(string nama) { this->nama = nama; }
    string getNama() { return this->nama; }

    void setKode(string kode) { this->kode = kode; }
    string getKode() { return this->kode; }

    void setMerk(string merk) { this->merk = merk; }
    string getMerk() { return this->merk; }

    ~Produk() {}
};
