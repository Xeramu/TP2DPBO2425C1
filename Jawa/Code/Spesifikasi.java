public class Spesifikasi extends Detail{

    //atributnya private
    private int harga;
    private String garansi;
    private String tahunproduksi;

    //constructoir
    public Spesifikasi(String nama, String kode, String merk, int stok, int daya, double berat, int harga, String garansi, String tahunproduksi) {
        super(nama, kode, merk, stok, daya, berat);// panggil constructor Detail        
        this.harga = harga;
        this.garansi = garansi;
        this.tahunproduksi = tahunproduksi;
    }

    //getter harga
    public int getHarga() {
        return harga;
    }

    //setter harga
    public void setHarga(int harga) {
        this.harga = harga;
    }

    //getter garansi
    public String getGaransi() {
        return garansi;
    }

    //setter garansi
    public void setGaransi(String garansi) {
        this.garansi = garansi;
    }

    //getter tahunproduksi
    public String getTahunproduksi() {
        return tahunproduksi;
    }

    //setter tahunproduksi
    public void setTahunproduksi(String tahunproduksi) {
        this.tahunproduksi = tahunproduksi;
    }
}