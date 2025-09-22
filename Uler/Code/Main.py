from Spesifikasi import Spesifikasi

def read(daftarBarang):
    if not daftarBarang:
        print("Daftar barang kosong.\n")
    else:
        print("== Daftar Barang Toko Elektronik el Angjay ==")
        #header tabel
        print(f"{'No':<5}{'Nama':<15}{'Kode':<10}{'Merk':<12}{'Stok':<8}{'Daya':<8}"
              f"{'Berat':<10}{'Harga':<12}{'Garansi':<10}{'Tahun Produksi':<15}")
        print("=" * 110)

        #isi tabel
        for i, barang in enumerate(daftarBarang, start=1):
            print(f"{i:<5}{barang.getNama():<15}{barang.getKode():<10}{barang.getMerk():<12}"
                  f"{barang.getStok():<8}{barang.getDaya():<8}{barang.getBerat():<10}"
                  f"{barang.getHarga():<12}{barang.getGaransi():<10}{barang.getTahunproduksi():<15}")
        print()

def main():

    # list buat nyimpen objek
    #ada 5 objek awalnya ges
    daftarBarang = [
        Spesifikasi("Laptop", "001", "Usus", 10, 65, 2.5, 8000000, "2", "2012"),
        Spesifikasi("Mouse", "002", "Ligotech", 20, 5, 0.2, 150000, "1", "2020"),
        Spesifikasi("Keyboard", "003", "Rozor", 15, 10, 0.5, 500000, "1", "2019"),
        Spesifikasi("Monitor", "004", "Smasmug", 5, 40, 4.5, 2500000, "2", "2021"),
        Spesifikasi("Printer", "005", "PH", 8, 100, 6.0, 1200000, "1", "2018")
    ]


    read(daftarBarang)

    #user masukin data baru
    nama = input()
    kode = input()
    merk = input()
    stok = int(input())
    daya = int(input())
    berat = float(input())
    harga = int(input())
    garansi = input()
    tahunproduksi = input()

    #objek dibikin lalu dimasukan kedalam daftarbarang
    daftarBarang.append(Spesifikasi(nama, kode, merk, stok, daya, berat, harga, garansi, tahunproduksi))

    #print pesan
    print("Barang berhasil ditambahkan!\n")

    read(daftarBarang)

if __name__ == "__main__":
    main()