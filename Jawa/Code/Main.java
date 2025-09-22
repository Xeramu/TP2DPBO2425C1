import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    //fungsi buat read isi daftar barang
    public static void read(ArrayList<Spesifikasi> daftarBarang) {
    System.out.println("\n== Daftar Barang Toko Elektronik el Angjay ==\n");

    if (daftarBarang.isEmpty()) {
        System.out.println("Belum ada data barang.");
    } else {
        // header tabel
        System.out.printf("%-5s %-15s %-10s %-12s %-8s %-8s %-10s %-12s %-10s %-15s%n",
                "No", "Nama", "Kode", "Merk", "Stok", "Daya", "Berat", "Harga", "Garansi", "Tahun Produksi");

        System.out.println("=".repeat(110));//garis pembatas

        // isi tabel
        for (int i = 0; i < daftarBarang.size(); i++) {
            Spesifikasi b = daftarBarang.get(i);
            System.out.printf("%-5d %-15s %-10s %-12s %-8d %-8d %-10.2f %-12d %-10s %-15s%n",
                    i + 1,
                    b.getNama(),
                    b.getKode(),
                    b.getMerk(),
                    b.getStok(),
                    b.getDaya(),
                    b.getBerat(),
                    b.getHarga(),
                    b.getGaransi(),
                    b.getTahunproduksi()
            );
        }
        System.out.println();
    }
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Spesifikasi> daftarBarang = new ArrayList<>();

        //5 objek awal
        daftarBarang.add(new Spesifikasi("Laptop", "001", "Usus", 10, 65, 2.5, 8000000, "2 tahun", "2019"));
        daftarBarang.add(new Spesifikasi("Mouse", "002", "Ligotech", 20, 5, 0.2, 150000, "1 tahun", "2020"));
        daftarBarang.add(new Spesifikasi("Keyboard", "003", "Rozor", 15, 10, 0.5, 500000, "1 tahun", "2018"));
        daftarBarang.add(new Spesifikasi("Monitor", "004", "Smasmug", 5, 40, 4.5, 2500000, "2 tahun", "2021"));
        daftarBarang.add(new Spesifikasi("Printer", "005", "PH", 8, 100, 6.0, 1200000, "1 tahun", "2017"));

        //read isi daftar
        read(daftarBarang);

        // CREATE
        String nama = sc.nextLine();
        String kode = sc.nextLine();
        String merk = sc.nextLine();
        int stok = sc.nextInt();
        int daya = sc.nextInt();
        double berat = sc.nextDouble();
        int harga = sc.nextInt();
        sc.nextLine();//buang newline biar ga keskip
        String garansi = sc.nextLine();
        String tahunproduksi = sc.nextLine();

        //masukin ke list
        daftarBarang.add(new Spesifikasi(nama, kode, merk, stok, daya, berat, harga, garansi, tahunproduksi));
        System.out.println("Barang berhasil ditambahkan!");

        //read isi setelah add
        read(daftarBarang);
    }
}

//run pake ini
//javac *.java
//java Main