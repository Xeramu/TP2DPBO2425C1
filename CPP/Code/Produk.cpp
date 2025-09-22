#include <string>
#include <iostream>
using namespace std;

class Produk {

	//atribut pakenya private
	private:
		string nama;
		string kode;
		string merk;

	//method yang bersifat public
	public:

	    //constructor untuk inisiasi atribut
		Produk(string nama, string kode, string merk){
            this->nama = nama;
            this->kode = kode;
            this->merk = merk;
		}

		//getter nama
		void setNama(string nama) {
			this->nama = nama;
		}
		
		//setter nama
		string getNama() {
			return this->nama;
		}
		
		//getter kode
		void setKode(string kode) {
			this->kode = kode;
		}
		
		//setter kode
		string getKode() {
			return this->kode;
		}
		
		//getter merk
		void setMerk(string merk) {
			this->merk = merk;
		}
		
		//setter merk
		string getMerk() {
			return this->merk;
		}
		
		~Produk(){ }

};