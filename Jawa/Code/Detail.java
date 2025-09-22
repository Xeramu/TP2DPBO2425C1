public class Detail extends Produk{

    //atributnya private
    private int stok;
    private int daya;
    private double berat;

    //constructoir
    public Detail(String nama, String kode, String merk, int stok, int daya, double berat){
        super(nama, kode, merk); // panggil constructor Produk
        this.stok = stok;
        this.daya = daya;
        this.berat = berat;
    }

    //getter stok
    public int getStok() {
        return stok;
    }

    //setter stok
    public void setStok(int stok) {
        this.stok = stok;
    }

    //getter daya
    public int getDaya() {
        return daya;
    }

    //setter daya
    public void setDaya(int daya) {
        this.daya = daya;
    }

    //getter daya
    public double getBerat() {
        return berat;
    }

    //setter daya
    public void setBerat(int berat) {
        this.berat = berat;
    }
}