from Produk import Produk

class Detail(Produk):
    # constructor untuk inisialisasi atribut nama, kode, dan merk
    def __init__(self, nama: str, kode: str, merk: str, stok: int, daya: int, berat: float):
        super().__init__(nama, kode, merk)
        self._stok = int(stok) #underscore 1 unutk private
        self._daya = int(daya) #underscore 1 untuk private
        self._berat = float(berat) #underscore 1 untuk private

    # getter buat atibut stok barang    
    def getStok(self) -> int:
        return self._stok
        
    # setter buat atribut stok barang
    def setStok(self, stok: int) -> None:
        self._stok = int(stok)

    # getter buat atibut daya barang    
    def getDaya(self) -> int:
        return self._daya

    # setter buat atribut daya barang
    def setDaya(self, daya: int) -> None:
        self._daya = int(daya)

    # getter buat atibut berat barang    
    def getBerat(self) -> float:
        return self._berat

    # setter buat atribut verat barang
    def setBerat(self, berat: float) -> None:
        self._berat = float(berat)