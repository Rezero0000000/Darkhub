## Linked List

struktur data dalam pemrograman komputer yang digunakan 
untuk menyimpan dan mengorganisasi sejumlah elemen data.
Dalam linked list, setiap elemen data disebut "node," dan setiap
node mengandung dua komponen utama: data itu sendiri dan
referensi (atau tautan) ke node berikutnya dalam urutan. 
Ini memungkinkan data untuk disusun secara dinamis dalam 
urutan linear.

### A. Single Linked List

struktur data yang mengatur elemen data
dalam urutan linear, di mana setiap elemen (node) memiliki data
dan tautan ke node berikutnya. Anda hanya dapat melintasi
dari awal ke akhir.

### B. Double Linked List

struktur data linear yang terdiri dari simpul-simpul yang terhubung
satu sama lain dengan dua pointer, yaitu pointer ke simpul sebelumnya
dan pointer ke simpul berikutnya. Ini memungkinkan untuk traversal
maju dan mundur dengan mudah, membuatnya efisien untuk operasi
penyisipan dan penghapusan elemen di berbagai posisi dalam
list.

### C. Circular Single Linked List

- Circular Linked List adalah sekumpulan node atau simpul yang tidak 
terdapat nilai NULL pada satupun
nodenya.
- Bentuk node pada Circular Single Linked List sama dengan Single 
Linked List yang mempunyai data dan
pointer next.
- Yang membedakan adalah jika pada Single Linked List node terakhir 
menunjuk ke NULL, tapi di Circular Single Linked List node terakhir
menunjuk ke node pertama.

### D. Circular Double Linked List

- Struktur node sama seperti Double Linked List yang mana terdapat 
data, pointer prev dan pointer next.

- Karena Circular linked list maka pointer next pada tail menunjuk 
ke head dan pointer prev pada head menunjuk ke tail.


- Stack atau tumpukan adalah sebuah kumpulan data dimana data yang
diletakkan di atas data yang lain.

- Stack atau tumpukan adalah kumpulan elemen yang hanya dapat 
ditambah dan atau dihapus dari satu ujung (gerbang) yang sama.

- Karakteristik penting stack adalah bersifat LIFO (Last In First Out)
artinya data yang terakhir masuk merupakan data yang akan keluar
terlebih dahulu.

## Stack
- Stack mempunyai batas maksimal banyak data.

- Stack bisa diimplementasikan dengan array dan linked list.

## Queue

- Queue (Antrian) adalah suatu kumpulan data yang mana penambahan 
data / elemen hanya dapat dilakukan pada sisi belakang sedangkan 
penghapusan / pengeluaran elemen dilakukan pada sisi depan.

- Karakteristik penting queue adalah bersifat FIFO (First In First Out) 
artinya data yang terlebih dahulu masuk merupakan data yang akan keluar 
terlebih dahulu.

- Seperti halnya pada antrian yang biasa kita lakukan 
sehari-hari, di manapun. Antrian dimulai dari depan ke belakang, jika yang 
berada didepan belum pergi meninggalkan antrian maka antrian yang ada 
dibelakang akan terus bertambah dan antrian paling belakang disini 
dinamakan rear/tail.

- Jika ada yang keluar dari antrian (dequeue) maka data tersebut 
adalah yang paling depan (head/front), dan data berikutnya setelah data 
yang keluar berubah menjadi yang paling depan (head/front).

## Hashing 

- Hashing adalah transformasi aritmatika sebuah string dari karakter 
menjadi nilai yang merepresentasikan string aslinya.

- Menurut bahasanya, hash berarti memenggal dan kemudian menggabungkan.

- Hashing digunakan sebagai metode untuk menyimpan data dalam sebuah
larik (array) agar penyimpanan data, pencarian data, penambahan data, dan
penghapusan data dapat dilakukan dengan cepat.

- Hashing digunakan untuk mengindex dan mendapatkan kembali key di
database (hash table), karena lebih cepat untuk mengambil key yang sudah 
dihash daripada mencarinya menggunakan original value.

- Hashing juga dikenal sebagai konsep pendistribusian key dalam sebuah 
array (Hash Table) menggunakan fungsi yang sudah diketahui
sebelumnya (Hash Function).

### Hash Table

Hash Table adalah array dengan sel-sel yang ukurannya telah ditentukan 
dan dapat berisi data atau key yang berkesesuaian dengan data.

### Method

- Mid-Square
- Division (Most Common)
- Folding
- Digit Extraction
- Rotating Hash
- Truncation

### Collision

Dikatakan terjadi collision (tabrakan) jika dua buah keys dipetakkan 
pada sebuah sel yang sama.


### Collision Resolution

- Closed Hashing (Open Addressing)
- Linear Probing.
- Quadratic Probing.
- Double Hashing.
- Open Hashing (Chaining)
