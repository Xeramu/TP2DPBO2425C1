class Produk:
    
    # constructor untuk inisialisasi atribut nama, kode, dan merk
    def __init__(self, nama: str, kode: str, merk: str):
        self._nama = str(nama) #underscore 1 unutk private
        self._kode = str(kode) #underscore 1 untuk private
        self._merk = str(merk) #underscore 1 untuk private

    # getter buat atibut nama barang    
    def getNama(self) -> str:
        return self._nama
        
    # setter buat atribut nama barang
    def setNama(self, nama: str) -> None:
        self._nama = str(nama)

    # getter buat atibut kode barang    
    def getKode(self) -> str:
        return self._kode

    # setter buat atribut kode barang
    def setKode(self, kode: str) -> None:
        self._kode = str(kode)

    # getter buat atibut kode barang    
    def getMerk(self) -> str:
        return self._merk

    # setter buat atribut kode barang
    def setMode(self, merk: str) -> None:
        self._merk = str(merk)