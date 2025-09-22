<?php

require_once "Produk.php";

class Detail extends Produk {
    private int $stok;
    private int $daya;
    private float $berat;

    public function __construct(string $nama, string $kode, string $merk, int $stok, int $daya, float $berat) {
        parent::__construct($nama, $kode, $merk);
        $this->setStok($stok);
        $this->setDaya($daya);
        $this->setBerat($berat);
    }

    public function getStok(): int { 
        return $this->stok;
    }
    public function setStok(int $stok): void { 
        $this->stok = ($stok < 0) ? 0 : $stok; 
    }

    public function getDaya(): int { 
        return $this->daya;
    }
    public function setDaya(int $daya): void { 
        $this->daya = ($daya < 0) ? 0 : $daya; 
    }

    public function getBerat(): float { 
        return $this->berat;
    }
    public function setBerat(float $berat): void { 
        $this->berat = ($berat < 0) ? 0.0 : $berat; 
    }
}
