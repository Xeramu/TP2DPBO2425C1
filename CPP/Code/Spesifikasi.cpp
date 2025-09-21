#include <iostream>
#include "Detail.cpp"
using namespace std;

class Spesifikasi : public Detail{

	private:
		int harga;
		string garansi;
		string tahunproduksi;

	public:
    
        Spesifikasi(string nama, string kode, string merk, int stok, int daya, double berat, int harga, string garansi, string tahunproduksi) : Detail(nama, kode, merk, stok, daya, berat) {
            this->harga = harga;
            this->garansi = garansi;
            this->tahunproduksi = tahunproduksi;
	    }

		void setHarga(int harga) {
			this->harga = harga;
		}
		
		int getHarga() {
			return this->harga;
		}
		
		void setGaransi(string garansi) {
			this->garansi = garansi;
		}
		
		string getGaransi() {
			return this->garansi;
		}
		
		void setTahunproduksi(string tahunproduksi) {
			this->tahunproduksi = tahunproduksi;
		}
		
		string getTahunproduksi() {
			return this->tahunproduksi;
		}
		
		~Spesifikasi(){ }

};