<?php

//manggil detail.php
require_once "Detail.php";

class Spesifikasi extends Detail {

    //atributs
    private int $harga;
    private string $garansi;
    private string $tahunproduksi;

    public function __construct(string $nama, string $kode, string $merk, int $stok, int $daya, float $berat, int $harga, string $garansi, string $tahunproduksi) {
        parent::__construct($nama, $kode, $merk, $stok, $daya, $berat);
        $this->setHarga($harga);
        $this->garansi = $garansi;
        $this->tahunproduksi = $tahunproduksi;
    }

    //getter setter atributs
    public function getHarga(): int { 
        return $this->harga;
    }
    public function setHarga(int $harga): void { 
        $this->harga = ($harga < 0) ? 0 : $harga; 
    }

    public function getGaransi(): string { 
        return $this->garansi; 
    }
    public function setGaransi(string $garansi): void { 
        $this->garansi = $garansi; 
    }

    public function getTahunproduksi(): string { 
        return $this->tahunproduksi; 
    }
    public function setTahunproduksi(string $tahunproduksi): void { 
        $this->tahunproduksi = $tahunproduksi; 
    }
}
