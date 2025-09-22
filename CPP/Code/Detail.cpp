#include <iostream>
#include "Produk.cpp"
using namespace std;

class Detail : public Produk{

	//atribut pakenya private
	private:
		int stok;
		int daya;
		double berat;

	//method yang bersifat public
	public:

		//constructor untuk inisiasi atribut
		Detail(string nama, string kode, string merk, int stok, int daya, double berat) : Produk(nama, kode, merk) {
            this->stok = stok;
            this->daya = daya;
            this->berat = berat;
		}

		//getter stok
		void setStok(int stok) {
			this->stok = stok;
		}
		
		//setter stok
		int getStok() {
			return this->stok;
		}
		
		//getter daya
		void setDaya(int daya) {
			this->daya = daya;
		}
		
		//setter daya
		int getDaya() {
			return this->daya;
		}
		
		//getter berat
		void setBerat(double berat) {
			this->berat = berat;
		}
		
		//setter berat
		double getBerat() {
			return this->berat;
		}
		
		~Detail(){ }

};