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

Untuk melindungi aplikasi web dari serangan path traversal, sangat penting
untuk memvalidasi input pengguna dengan cermat, membatasi akses ke file dan
direktori, dan mengimplementasikan kontrol akses yang kuat. Selain itu, penggunaan
mekanisme keamanan seperti Web Application Firewall (WAF) juga dapat membantu
mengidentifikasi dan mencegah serangan path traversal.


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

