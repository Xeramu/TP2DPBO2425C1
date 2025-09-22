public class Produk {

    //atributnya private
    private String nama;
    private String kode;
    private String merk;

    //constructoir
    public Produk(String nama, String kode, String merk){
        this.nama = nama;
        this.kode = kode;
        this.merk = merk;
    }

    //getter nama
    public String getNama() {
        return nama;
    }

    //setter nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    //getter kode
    public String getKode() {
        return kode;
    }

    //setter kode
    public void setKode(String kode) {
        this.kode = kode;
    }

    //getter kode
    public String getMerk() {
        return merk;
    }

    //setter kode
    public void setMerk(String merk) {
        this.merk = merk;
    }
}