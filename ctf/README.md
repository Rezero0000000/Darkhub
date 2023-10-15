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
adalah serangan keamanan yang  mencoba mengakses file atau direktori di luar batasan yang
seharusnya diizinkan. Penyerang melakukan ini dengan memanipulasi path file. 
Jika aplikasi tidak memvalidasi input dengan benar, serangan ini dapat berhasil. 

Contoh: 
mengakses file dengan mengubah path melalui URL, seperti mengakses `/etc/passwd`
dengan `../../../../../etc/passwd`. 

1. `/etc/shadow`: File ini berisi informasi kata sandi terenkripsi (hash) pengguna pada sistem Unix-like.

2. `/etc/`: Direktori `/etc/` direktori konfigurasi sistem yang mungkin berisi file-file sensitif atau konfigurasi.

3. `/var/www/`: direktori yang sering digunakan dalam pengembangan web. 

4. `/usr/local/`: berisi berbagai file aplikasi dan pustaka yang mungkin menjadi target serangan.

### Access Control Vulnerabilities
jenis kerentanan keamanan yang terjadi ketika sistem atau aplikasi tidak
secara tepat mengontrol atau mengelola akses ke sumber daya atau fungsionalitas tertentu.
access controll itu adalah sebuah halaman yang mengatur berbagai hal dalam sistem seperti 
sistem crud dalam data user.

#### "Unprotected functionality"
adalah kerentanan yang muncul ketika sebuah aplikasi tidak menerapkan perlindungan untuk
fungsi yang sensitif. Sebagai contoh, fungsi administratif mungkin terhubung dari halaman
selamat datang administrator tetapi tidak dari halaman selamat datang pengguna biasa.
Namun, seorang pengguna biasa mungkin dapat mengakses fungsi administratif dengan
menelusuri URL admin yang relevan.

contoh

https://situs-web-tidak-aman.com/admin
URL ini mungkin dapat diakses oleh semua pengguna

https://situs-web-tidak-aman.com/robots.txt

Dalam beberapa kasus, URL administratif mungkin diungkapkan di
lokasi lain, seperti dalam file robots.txt.
Ini adalah kerentanan yang memungkinkan pengguna untuk mengakses fungsi atau
data yang seharusnya tidak dapat diakses oleh mereka.

Dalam beberapa kasus, fungsi yang sensitif disembunyikan dengan memberikan URL yang kurang
dapat ditebak. 

Bayangkan sebuah aplikasi yang menyediakan fungsi administratif pada URL berikut:

https://situs-web-tidak-aman.com/administrator-panel-yb556

URL ini mungkin tidak langsung dapat ditebak oleh seorang penyerang. Namun, aplikasi 
tersebut mungkin tetap mengungkapkan URL . URL ini mungkin diungkapkan dalam kode JavaScript:

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

### Parameter-based access control methods

1. **Hidden Field:** 
2. **Cookie:** 
3. **Preset Query String Parameter**

Contohnya :

https://situs-web-tidak-aman.com/login/home.jsp?admin=true
https://situs-web-tidak-aman.com/login/home.jsp?role=1

seorang pengguna yang tidak memilikihak akses admin seharusnya tidak dapat mengakses
fungsi admin, tetapi dengan mengubah parameter menjadi "admin=true" atau "role=1",
mereka dapat dengan mudah mengakses fungsionalitas tersebut.

### Horizontal Privilege Escalation (Eskalasi Hak Akses Horizontal) 
adalah jenis kerentanan dalam pengendalian akses yang terjadi ketika seorang pengguna
mencoba mendapatkan akses yang seharusnya tidak dimilikinya ke akun pengguna lain yang
memiliki tingkat izin yang sama. Dalam kata lain, pengguna mencoba "mengambil alih"
atau "mengeksploitasi" akun pengguna lain dengan hak akses yang setara.

Contoh sederhana dari eskalasi hak akses horizontal adalah sebagai berikut:

Misalkan ada sebuah aplikasi web yang memungkinkan pengguna untuk melihat dan mengedit
profil pengguna lain. Masing-masing pengguna memiliki akun yang mereka bisa akses dengan
hak akses penuh untuk profil mereka sendiri. Namun, ada kekurangan dalam aplikasi yang
memungkinkan pengguna A untuk memodifikasi URL atau parameter permintaan sehingga mereka
dapat mengakses dan mengedit profil pengguna B.

Ini adalah contoh eskalasi hak akses horizontal karena pengguna A dengan hak akses
terbatas seharusnya tidak dapat mengedit profil pengguna B. Mereka memanfaatkan kerentanan
dalam aplikasi untuk mendapatkan akses yang seharusnya tidak mereka miliki.

Untuk menghindari kerentanan eskalasi hak akses horizontal, penting untuk menerapkan kontrol
akses yang kuat dan memverifikasi izin pengguna dengan cermat, memastikan bahwa setiap pengguna
hanya dapat mengakses dan memodifikasi informasi yang seharusnya mereka akses sesuai dengan
peran atau izin mereka dalam sistem atau aplikasi.

Example: 
Find a blog post by carlos.
Click on carlos and observe that the URL contains his user ID. Make a note of this ID.
Log in using the supplied credentials and access your account page.
Change the "id" parameter to the saved user ID.
Retrieve and submit the API key.

Horizontal to Vertical Privilege Escalation adalah jenis serangan yang terjadi ketika
seorang penyerang yang telah sukses melakukan eskalasi hak akses horizontal, yaitu mendapatkan
akses ke akun pengguna lain dengan tingkat izin yang sama, kemudian memanfaatkan akses ini untuk
mencapai tingkat izin yang lebih tinggi dalam sistem. Ini dapat terjadi ketika penyerang mengambil
alih akun yang lebih tinggi hak aksesnya, seperti akun administrator.

Contoh dari serangan ini adalah sebagai berikut:

1. **Horizontal Privilege Escalation:** Seorang penyerang awalnya berhasil mendapatkan
akses ke akun pengguna lain, misalnya dengan memanipulasi parameter URL seperti yang
telah dijelaskan sebelumnya.

2. **Compromising Administrative Account:** Setelah mendapatkan akses ke akun pengguna
lain, jika akun yang disasarnya adalah akun administrator atau memiliki hak akses yang
tinggi, penyerang akan mencoba untuk mengambil alih akun ini. Ini bisa dilakukan dengan
mencari kelemahan dalam akun administrator, mengganti kata sandi, atau menggunakan
berbagai metode lainnya.

3. **Vertical Privilege Escalation:** Setelah mengambil alih akun administrator, penyerang
sekarang memiliki hak akses yang tinggi dan dapat melakukan tindakan dengan tingkat izin
yang lebih tinggi, termasuk mengakses fungsionalitas yang hanya tersedia untuk
administrator, mengendalikan seluruh sistem, atau mengakses data sensitif.

Serangan seperti ini memanfaatkan kerentanan dalam pengendalian akses dan kelemahan dalam
aplikasi untuk mendapatkan akses yang lebih tinggi dalam sistem. Untuk menghindari serangan
horizontal to vertical privilege escalation, penting untuk mengamankan semua akun pengguna, terutama
akun yang memiliki tingkat izin tinggi, dan menerapkan praktik keamanan yang ketat untuk mencegah
penyerang mengambil alih akun ini.

### Authentication Vulnerabilities

Serangan Brute-Force: Ini adalah jenis serangan di mana penyerang menggunakan sistem
percobaan dan kesalahan untuk menebak kredensial pengguna yang sah. Serangan ini umumnya
otomatis dan menggunakan daftar kata (wordlists) yang berisi kombinasi potensial dari nama
pengguna (username) dan kata sandi (password). Dengan otomatisasi, terutama menggunakan
alat khusus, penyerang dapat melakukan sejumlah besar upaya login dalam waktu singkat.

Serangan brute-force tidak selalu berarti menebak sepenuhnya secara acak nama pengguna dan
kata sandi. Penyerang juga dapat menggunakan logika dasar atau pengetahuan yang tersedia
publik untuk memperbaiki serangan brute-force mereka dan membuat tebakan yang lebih terarah.
Hal ini secara signifikan meningkatkan efisiensi serangan tersebut.

Contohnya, penyerang mungkin mengetahui bahwa banyak orang menggunakan kata sandi yang
mudah ditebak, seperti "password123". Dengan informasi ini, mereka dapat mencoba kata sandi 
tersebut terlebih dahulu sebelum mencoba yang lain. Mereka juga dapat mencoba variasi nama
pengguna, seperti menggantinya dengan kata "admin" atau "root," yang sering digunakan untuk
akun administrator.

**Username Enumeration** (Enumerasi Nama Pengguna) adalah ketika seorang penyerang dapat
mengamati perubahan perilaku situs web untuk mengidentifikasi apakah sebuah nama pengguna
tertentu adalah benar atau valid.

Username enumeration biasanya terjadi pada halaman login, misalnya ketika Anda memasukkan
nama pengguna yang valid tetapi kata sandi yang salah, atau pada formulir pendaftaran
ketika Anda memasukkan nama pengguna yang sudah ada. Hal ini sangat mengurangi waktu dan
usaha yang diperlukan untuk serangan brute-force karena penyerang dapat dengan cepat
membuat daftar pendek nama pengguna yang valid.

Saat mencoba untuk brute-force halaman login, perhatikan perbedaan dalam hal berikut:

1. **Kode status (Status codes):** Selama serangan brute-force, kode status HTTP yang
dikembalikan kemungkinan akan sama untuk sebagian besar tebakan karena sebagian besar dari
mereka akan salah. Jika sebuah tebakan mengembalikan kode status yang berbeda, ini adalah
indikasi kuat bahwa nama pengguna tersebut benar. Sebaiknya praktik terbaik bagi situs web
untuk selalu mengembalikan kode status yang sama terlepas dari hasilnya, tetapi praktik
ini tidak selalu diikuti.

2. **Pesan kesalahan (Error messages):** Terkadang pesan kesalahan yang dikembalikan
berbeda tergantung pada apakah baik nama pengguna maupun kata sandi salah atau hanya
kata sandi yang salah. Praktik terbaik bagi situs web adalah menggunakan pesan generik
dan identik dalam kedua kasus, tetapi kesalahan pengetikan kecil kadang muncul. Hanya
dengan satu karakter yang salah membuat dua pesan tersebut berbeda, bahkan dalam kasus
di mana karakter tersebut tidak terlihat pada halaman yang ditampilkan.

3. **Waktu respons (Response times):** Jika sebagian besar permintaan ditangani dengan
waktu respons yang mirip, maka permintaan yang berbeda menunjukkan bahwa ada sesuatu
yang berbeda terjadi di belakang layar. Ini merupakan indikasi lain bahwa nama pengguna
yang ditebak mungkin benar. Misalnya, sebuah situs web mungkin hanya memeriksa apakah
kata sandi benar jika nama pengguna valid. Langkah tambahan ini mungkin menyebabkan
peningkatan waktu respons yang sedikit. Ini mungkin halus, tetapi seorang penyerang
dapat membuat penundaan ini lebih jelas dengan memasukkan kata sandi yang sangat panjang
yang membuat situs web membutuhkan waktu yang lebih lama untuk memprosesnya.


Username enumeration adalah teknik yang dapat membantu penyerang mempersempit daftar
potensial nama pengguna yang valid, yang selanjutnya digunakan dalam serangan brute-force
untuk mencoba kata sandi yang cocok. Untuk melindungi sistem dari serangan semacam ini,
penting untuk mengimplementasikan perlindungan yang kuat dan menjaga konsistensi dalam
tanggapan dari situs web terhadap permintaan otentikasi yang salah.
