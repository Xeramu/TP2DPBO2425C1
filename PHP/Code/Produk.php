<?php
class Produk {

    private string $nama;
    private string $kode;
    private string $merk;

    public function __construct(string $nama, string $kode, string $merk) {
        $this->nama = $nama;
        $this->kode = $kode;
        $this->merk = $merk;
    }

    public function getNama(): string { 
        return $this->nama; 
    }
    public function setNama(string $nama): void { 
        $this->nama = $nama; 
    }

    public function getKode(): string { 
        return $this->kode; 
    }
    public function setKode(string $kode): void { 
        $this->kode = $kode; 
    }

    public function getMerk(): string {
        return $this->merk;
    }

    public function setMerk(string $merk): void {
        $this->merk = $merk;
    }
}
