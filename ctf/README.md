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

- User-Agent: Header ini mengidentifikasi agen pengguna (seperti browser 
atau alat HTTP) yang membuat permintaan. Anda dapat mengubahnya untuk 
menyamar sebagai jenis agen pengguna yang berbeda.

- Host: Menunjukkan nama host dari URL yang diminta. Biasanya, ini 
diatur secara otomatis oleh klien HTTP, tetapi dalam beberapa situasi, 
Anda mungkin perlu mengubahnya.

- Cookie: Header ini digunakan untuk mengirim cookie ke server. 
Dalam beberapa tantangan CTF, Anda mungkin perlu mengirim cookie 
khusus untuk mendapatkan akses atau izin tertentu.

- Referer: Header ini mengidentifikasi URL yang mengarahkan pengguna 
ke halaman saat ini. Terkadang, Anda harus mengatur Referer 
untuk mengeksploitasi kerentanan tertentu.

- Authorization: Digunakan untuk mengirim informasi otorisasi, 
seperti token atau kredensial. Dalam beberapa kasus, Anda mungkin 
harus menggunakan header ini untuk mengakses sumber daya yang 
dilindungi kata sandi.

- Content-Type: Header ini digunakan untuk menentukan jenis media 
konten yang dikirim dalam permintaan. Ini dapat berguna saat Anda 
mengirimkan data dalam permintaan POST.

- Accept: Header ini menentukan jenis media konten yang dapat 
diterima oleh klien. Ini bisa penting saat mencoba mengelabui 
server atau mencoba mengakses konten tertentu.

- Connection: Header ini mengontrol koneksi HTTP, seperti "keep-alive" 
untuk menjaga koneksi terbuka.

- Accept-Language: Menentukan bahasa yang diinginkan oleh klien. 
Anda dapat mengubahnya untuk menguji apakah server merespons dengan 
bahasa tertentu atau tidak.

- Host: Header Host berisi nama host dari URL yang diminta. 
Anda dapat memodifikasinya jika Anda perlu mengarahkan permintaan 
ke host yang berbeda.

- X-Forwarded-For: Header ini mengidentifikasi alamat IP asli 
pengguna ketika melalui proxy atau CDN. Dalam beberapa kasus, 
Anda dapat mencoba menyusupi header ini.

- X-Frame-Options: Header ini digunakan untuk mengendalikan bagaimana 
halaman dapat dimuat dalam iframe. Anda mungkin perlu memeriksa 
atau mengatur header ini dalam tantangan CTF yang 
melibatkan Clickjacking.

- Content-Length: Header ini menyatakan panjang isi dalam byte. 
Dalam situasi tertentu, Anda perlu memodifikasinya jika mencoba 
mengeksploitasi kerentanan terkait dengan ukuran isi.

- Cache-Control: Header ini mengontrol cara data disimpan dalam cache. 
Kadang-kadang, Anda mungkin perlu memanipulasi header ini untuk 
menghindari caching atau memaksa caching.

- Location: Header ini mengarahkan klien ke URL lain. 
Anda mungkin harus mengikuti URL yang diarahkan dalam 
tantangan tertentu.

- Proxy-Authorization: Header ini digunakan 
untuk mengirim otorisasi kepada proxy.

###
