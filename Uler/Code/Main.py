from Spesifikasi import Spesifikasi

def read(daftarBarang):
     #kalau daftarbarang kosong, print pesan
    if not daftarBarang:
        print("Daftar barang kosong.\n")
    else:
        #kalau daftarbarang ada isinya, for loop ke smua barang trus ditampilin pake getter
        print("== Daftar Barang Toko Elektronik el Angjay ==")
        for i, barang in enumerate(daftarBarang, start=1):
            print(f"{i}. {barang.getNama()} | {barang.getKode()} | {barang.getMerk()} | {barang.getStok()} | {barang.getDaya()} | {barang.getBerat()} | {barang.getHarga()} {barang.getGaransi()} | {barang.getTahunproduksi()}")
            print() 

def main():

    # list koshong buat nyimpen objek
    daftarBarang = []

    read(daftarBarang)

    #user masukin data baru
    nama = input
    kode = input
    merk = input
    stok = int(input)
    daya = int(input)
    berat = float(input)
    harga = int(input)
    garansi = input
    tahunproduksi = input

    #objek dibikin lalu dimasukan kedalam daftarbarang
    daftarBarang.append(Spesifikasi(nama, kode, merk, stok, daya, berat, harga, garansi, tahunproduksi))

    #print pesan
    print("Barang berhasil ditambahkan!\n")

    read(daftarBarang)

if __name__ == "__main__":
    main()