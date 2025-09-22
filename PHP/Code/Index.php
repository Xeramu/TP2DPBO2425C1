<?php
//manggil spesifikasi.php
require_once __DIR__ . '/Spesifikasi.php';

//bikin daftar barang langsung isi 5 objek
$daftarBarang = [
    new Spesifikasi("Laptop", "001", "Usus", 10, 65, 2.5, 8000000, "2", "2012", "img/radatuli.jpg"),
    new Spesifikasi("Mouse", "002", "Ligotech", 20, 5, 0.2, 150000, "1", "2020", "img/mieayam.jpg"),
    new Spesifikasi("Keyboard", "003", "Rozor", 15, 10, 0.5, 500000, "1", "2019", "img/java.jpg"),
    new Spesifikasi("Monitor", "004", "Smasmug", 5, 40, 4.5, 2500000, "2", "2021", "img/cobra.jpg"),
    new Spesifikasi("Printer", "005", "PH", 8, 100, 6.0, 1200000, "1", "2018", "img/aycabron.jpeg"),
];
?>
<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Toko Elektronik</title>
    <style>
        table { border-collapse: collapse; width: 95%; margin: 20px auto; }
        th, td { border: 1px solid black; padding: 8px; text-align: center; }
        img { max-width: 80px; }
    </style>
</head>
<body>
<h2 style="text-align:center;">== Daftar Barang Toko Elektronik el Angjay ==</h2>

<table>
    <tr>
        <th>No</th>
        <th>Nama</th>
        <th>Kode</th>
        <th>Merk</th>
        <th>Stok</th>
        <th>Daya</th>
        <th>Berat</th>
        <th>Harga</th>
        <th>Garansi</th>
        <th>Tahun Produksi</th>
        <th>Gambar</th>
    </tr>
    <?php foreach ($daftarBarang as $i => $b): ?>
        <tr>
            <td><?= $i+1 ?></td>
            <td><?= $b->getNama() ?></td>
            <td><?= $b->getKode() ?></td>
            <td><?= $b->getMerk() ?></td>
            <td><?= $b->getStok() ?></td>
            <td><?= $b->getDaya() ?></td>
            <td><?= $b->getBerat() ?></td>
            <td><?= $b->getHarga() ?></td>
            <td><?= $b->getGaransi() ?></td>
            <td><?= $b->getTahunproduksi() ?></td>
            <td><img src="<?= $b->getGambar() ?>" alt="gambar barang"></td>
        </tr>
    <?php endforeach; ?>
</table>
</body>
</html>
