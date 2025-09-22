from Detail import Detail

class Spesifikasi(Detail):
    # constructor untuk inisialisasi atribut nama, kode, dan merk
    def __init__(self, nama: str, kode: str, merk: str, stok: int, daya: int, berat: float, harga : int, garansi : str, tahunproduksi : str):
        super().__init__(nama, kode, merk, stok, daya, berat)
        self._harga = int(harga) #underscore 1 unutk private
        self._garansi = str(garansi) #underscore 1 untuk private
        self._tahunproduksi = str(tahunproduksi) #underscore 1 untuk private

    # getter buat atibut harga barang    
    def getHarga(self) -> int:
        return self._harga
        
    # setter buat atribut harga barang
    def setHarga(self, harga: int) -> None:
        self._harga = int(harga)

    # getter buat atibut garansi barang    
    def getGaransi(self) -> str:
        return self._garansi

    # setter buat atribut garansi barang
    def setGaransi(self, garansi: str) -> None:
        self._garansi = str(garansi)

    # getter buat atibut tahunproduksi barang    
    def getTahunproduksi(self) -> str:
        return self._tahunproduksi

    # setter buat atribut tahunproduksi barang
    def setBerat(self, tahunproduksi: str) -> None:
        self._tahunproduksi = str(tahunproduksi)