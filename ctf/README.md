### Hal yang harus di perhatikan dalam web exploitation
- Cek view source code 
- Cek Cookie
- Cek URL
- Bisa jadi ada text tersembunyi mengenai path atau suatu flag
yang di hash

### MD5 Collision
Collision MD5 adalah situasi di mana dua input yang berbeda menghasilkan 
nilai hash MD5 yang sama

### HTTP Header List 

1. **User-Agent:** Identifikasi browser atau agen pengguna.

2. **Host:** Nama host dari URL permintaan.

3. **Cookie:** Untuk mengirim informasi cookie.

4. **Content-Type:** Menentukan jenis konten yang dikirim oleh klien.

5. **Connection:** Mengontrol koneksi HTTP, seperti "keep-alive."

6. **Accept-Language:** Menentukan bahasa yang diinginkan oleh klien.

7. **X-Forwarded-For:** Mengidentifikasi alamat IP asli pengguna ketika melalui proxy atau CDN.

8. **Content-Length:** Menyatakan panjang isi dalam byte.

9. **Location:** Mengarahkan klien ke URL lain.

10. **Proxy-Authorization:** Digunakan untuk mengirim otorisasi kepada proxy.

### Shell Exec
`shell_exec` adalah salah satu fungsi dalam bahasa pemrograman PHP yang digunakan
untuk menjalankan perintah di lingkungan shell atau terminal sistem operasi. 

Contoh penggunaan `shell_exec` dalam PHP:

```php
// Menjalankan perintah "ls" di terminal dan mendapatkan outputnya
$output = shell_exec("ls");

// Menampilkan output dari perintah "ls"
echo $output;
```

### Path Transerval

Path traversal, juga dikenal sebagai directory traversal atau dot dot slash (..) attack, 
adalah jenis serangan keamanan komputer yang terjadi ketika seorang penyerang mencoba
mengakses file atau direktori di luar batasan yang seharusnya diizinkan oleh aplikasi
web atau perangkat lunak tertentu. Serangan ini biasanya dilakukan dengan memanfaatkan
celah keamanan yang ada dalam aplikasi web yang tidak memvalidasi dengan benar input
dari pengguna.

Cara kerja serangan path traversal adalah dengan mencoba mengganti atau memanipulasi
path file atau direktori yang diminta oleh aplikasi sehingga penyerang dapat mengakses
file atau direktori yang seharusnya tidak dapat diakses olehnya. Ini dapat menyebabkan
kebocoran informasi sensitif atau bahkan memungkinkan penyerang untuk mengunggah file
berbahaya ke server.

Contoh sederhana serangan path traversal adalah ketika seorang penyerang mencoba
mengakses file berikut melalui URL:

```
https://example.com/viewfile.php?file=../../../../../etc/passwd
```

Dalam contoh ini, penyerang mencoba naik beberapa tingkat direktori
(ditunjukkan oleh `../../`) untuk mengakses file `/etc/passwd` yang seharusnya
tidak dapat diakses oleh pengguna biasa. Jika aplikasi web tidak memvalidasi
input dengan benar, serangan ini dapat berhasil.

. `/etc/passwd`: Sebagaimana disebutkan sebelumnya, ini adalah file yang berisi informasi pengguna di sistem Unix-like.

2. `/etc/shadow`: File ini berisi informasi kata sandi terenkripsi (hash) pengguna pada sistem Unix-like. Ini adalah target yang lebih berbahaya, karena penyerang dapat mencoba mendekripsi atau mengecrack kata sandi.

3. `/etc/`: Direktori `/etc/` adalah direktori konfigurasi sistem yang mungkin berisi file-file sensitif atau konfigurasi.

4. `/var/www/`: Ini adalah direktori yang sering digunakan dalam pengembangan web. Jika sistem tidak terkonfigurasi dengan baik, penyerang dapat mencoba mengakses direktori ini untuk mencuri file-file penting dalam aplikasi web.

5. `/usr/local/`: Direktori ini berisi berbagai file aplikasi dan pustaka yang mungkin menjadi target serangan jika aplikasi tidak mengimplementasikan perlindungan yang memadai.
### Remote Code Execution (RCE)

**Remote Code Execution (RCE)** adalah serangan keamanan yang memungkinkan seorang
penyerang untuk menjalankan kode atau perintah pada sistem yang diserang dari jarak jauh.
Serangan ini terjadi ketika penyerang berhasil memanfaatkan kerentanan atau celah
keamanan dalam suatu perangkat lunak atau sistem untuk memasukkan kode berbahaya
dan menjalankannya.

Cara kerja serangan RCE adalah sebagai berikut:

1. **Identifikasi Kerentanan**: Penyerang mencari kerentanan atau celah keamanan
dalam perangkat lunak atau sistem yang menjadi target. Kerentanan ini bisa berupa
bug perangkat lunak, celah keamanan yang tidak diperbaiki, atau masalah dalam
konfigurasi yang buruk.

2. **Eksploitasi**: Setelah menemukan kerentanan, penyerang akan mencoba
memanfaatkannya dengan cara mengirimkan input yang dirancang khusus untuk
mengeksploitasi kerentanan tersebut. Input ini mungkin berisi kode berbahaya
yang ingin dijalankan oleh penyerang.

3. **Eksekusi Kode**: Jika eksploitasi berhasil, perangkat lunak atau sistem yang
diserang akan menjalankan kode berbahaya yang dimasukkan oleh penyerang. Kode ini
dapat digunakan untuk berbagai tujuan, seperti mengambil alih kendali sistem, mencuri
data sensitif, atau melakukan tindakan merusak lainnya.

4. **Kendali Jarak Jauh**: Yang membuat RCE berbeda dari serangan lain
adalah bahwa penyerang dapat menjalankan kode ini dari jarak jauh, biasanya
melalui jaringan atau internet. Ini berarti penyerang tidak perlu memiliki
akses fisik ke sistem yang diserang, yang dapat membuat serangan ini lebih berbahaya.


### Access Control Vulnerabilities
Ini adalah jenis kerentanan keamanan yang terjadi ketika sistem atau aplikasi tidak
secara tepat mengontrol atau mengelola akses ke sumber daya atau fungsionalitas tertentu.
access controll itu adalah sebuah halaman yang mengatur berbagai hal dalam sistem seperti 
sistem crud dalam data user.

#### "Unprotected functionality"
atau "Fungsi yang Tidak Dilindungi" adalah kerentanan dalam
pengendalian akses yang muncul ketika sebuah aplikasi tidak menerapkan perlindungan untuk
fungsi yang sensitif. Sebagai contoh, fungsi administratif mungkin terhubung dari halaman
selamat datang administrator tetapi tidak dari halaman selamat datang pengguna biasa
. Namun, seorang pengguna biasa mungkin dapat mengakses fungsi administratif dengan
menelusuri URL admin yang relevan.

Sebagai contoh, sebuah situs web mungkin menyediakan fungsi sensitif di URL berikut:

https://situs-web-tidak-aman.com/admin
URL ini mungkin dapat diakses oleh semua pengguna, bukan hanya oleh pengguna
administratif yang memiliki tautan ke fungsi tersebut dalam antarmuka pengguna
mereka. Dalam beberapa kasus, URL administratif mungkin diungkapkan di
lokasi lain, seperti dalam file robots.txt:

https://situs-web-tidak-aman.com/robots.txt
Meskipun URL tersebut tidak diungkapkan di mana pun, seorang penyerang mungkin dapat
menggunakan daftar kata untuk mencoba berulang-ulang mencari lokasi fungsi yang
sensitif tersebut.

Ini adalah kerentanan yang memungkinkan pengguna untuk mengakses fungsi atau
data yang seharusnya tidak dapat diakses oleh mereka, dan ini adalah contoh pelanggaran
pengendalian akses yang serius dalam sistem atau aplikasi. Oleh karena itu, penting untuk
mengidentifikasi dan mengatasi kerentanan ini untuk menjaga keamanan aplikasi
dan data yang sensitif.

Dalam beberapa kasus, fungsi yang sensitif disembunyikan dengan memberikan URL yang kurang
dapat ditebak. Ini adalah contoh dari apa yang disebut "keamanan dengan obskuritas." 
Namun, menyembunyikan fungsi yang sensitif tidak memberikan pengendalian akses yang 
efektif karena pengguna mungkin menemukan URL yang disamarkan tersebut dengan berbagai cara.

Bayangkan sebuah aplikasi yang menyediakan fungsi administratif pada URL berikut:

https://situs-web-tidak-aman.com/administrator-panel-yb556
URL ini mungkin tidak langsung dapat ditebak oleh seorang penyerang. Namun, aplikasi 
tersebut mungkin tetap mengungkapkan URL kepada pengguna. URL ini mungkin diungkapkan 
dalam kode JavaScript yang membangun antarmuka pengguna berdasarkan peran pengguna:

    <script>
	    var isAdmin = false;
	        if (isAdmin) {
		    ...
		        var adminPanelTag = document.createElement('a');
		        adminPanelTag.setAttribute('https://situs-web-tidak-aman.com/administrator-panel-yb556');
		        adminPanelTag.innerText = 'Panel Admin';
		    ...
	    }
    </script>
Script ini menambahkan tautan ke antarmuka pengguna pengguna jika mereka adalah
pengguna admin. Namun, skrip yang berisi URL tersebut terlihat oleh semua pengguna, tanpa
memandang peran mereka.

Metode pengendalian akses berbasis parameter adalah pendekatan yang digunakan oleh beberapa
aplikasi untuk menentukan hak akses atau peran pengguna saat login, dan kemudian menyimpan
informasi ini di lokasi yang dapat dikontrol oleh pengguna. Lokasi tersebut dapat berupa:


1. **Hidden Field (Bidang Tersembunyi):** Informasi hak akses atau peran pengguna disimpan
dalam bidang HTML yang tersembunyi dalam formulir.

2. **Cookie:** Informasi hak akses atau peran pengguna disimpan dalam cookie yang diterima
oleh browser pengguna.

3. **Preset Query String Parameter (Parameter Query String Tersebut):** Informasi hak akses
atau peran pengguna disertakan dalam URL sebagai parameter query string.

Aplikasi kemudian membuat keputusan pengendalian akses berdasarkan nilai yang dikirimkan. Misalnya:

https://situs-web-tidak-aman.com/login/home.jsp?admin=true
https://situs-web-tidak-aman.com/login/home.jsp?role=1

Pendekatan ini merupakan kerentanan dalam pengendalian akses karena seorang pengguna dapat
memodifikasi nilai yang dikirimkan dan mengakses fungsionalitas yang seharusnya tidak mereka
izinkan, seperti fungsi administratif. Misalnya, seorang pengguna yang tidak memiliki
hak akses admin seharusnya tidak dapat mengakses fungsi admin, tetapi dengan mengubah
parameter menjadi "admin=true" atau "role=1", mereka dapat dengan mudah mengakses
fungsionalitas tersebut.

Ini adalah contoh kerentanan yang serius karena pengguna yang tidak sah dapat memanipulasi
informasi hak akses dan mendapatkan akses yang tidak semestinya. Oleh karena itu, metode
pengendalian akses yang lebih kuat, seperti autentikasi yang kuat dan kontrol akses yang
sesuai, perlu diterapkan untuk melindungi fungsionalitas yang sensitif dalam aplikasi.

