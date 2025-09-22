#include <iostream>
#include "Detail.cpp"
using namespace std;

class Spesifikasi : public Detail{

	//atribut pakenya private
	private:
		int harga;
		string garansi;
		string tahunproduksi;

	//method yang bersifat public
	public:
    
		//constructor untuk inisiasi atribut
        Spesifikasi(string nama, string kode, string merk, int stok, int daya, double berat, int harga, string garansi, string tahunproduksi) : Detail(nama, kode, merk, stok, daya, berat) {
            this->harga = harga;
            this->garansi = garansi;
            this->tahunproduksi = tahunproduksi;
	    }

		//getter harga
		void setHarga(int harga) {
			this->harga = harga;
		}
		
		//setter harga
		int getHarga() {
			return this->harga;
		}
		
		//getter garansi
		void setGaransi(string garansi) {
			this->garansi = garansi;
		}
		
		//setter garansi
		string getGaransi() {
			return this->garansi;
		}
		
		//getter tahunproduksi
		void setTahunproduksi(string tahunproduksi) {
			this->tahunproduksi = tahunproduksi;
		}
		
		//setter tahunproduksi
		string getTahunproduksi() {
			return this->tahunproduksi;
		}
		
		~Spesifikasi(){ }

};