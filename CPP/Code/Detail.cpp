#include <iostream>
#include "Produk.cpp"
using namespace std;

class Detail : public Produk{

	private:
		int stok;
		int daya;
		double berat;

	public:

		Detail(string nama, string kode, string merk, int stok, int daya, double berat) : Produk(nama, kode, merk) {
            this->stok = stok;
            this->daya = daya;
            this->berat = berat;
		}

		void setStok(int stok) {
			this->stok = stok;
		}
		
		int getStok() {
			return this->stok;
		}
		
		void setDaya(int daya) {
			this->daya = daya;
		}
		
		int getDaya() {
			return this->daya;
		}
		
		void setBerat(double berat) {
			this->berat = berat;
		}
		
		double getBerat() {
			return this->berat;
		}
		
		~Detail(){ }

};