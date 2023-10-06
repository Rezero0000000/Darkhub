### Bubble Sort

- Mulailah sebuah iterasi untuk semua elemen
- Iterasi kedua dimulai dari elemen pertama hingga elemen sebelum terakhir.
- Selama iterasi ini, bandingkan elemen saat ini dengan elemen berikutnya.
- Jika elemen saat ini lebih besar daripada elemen berikutnya, tukar mereka.
- Pindah ke elemen berikutnya dan ulangi langkah-langkah 2-3 hingga selesai 
  iterasi pertama. Setelah iterasi pertama, elemen terbesar akan berada di 
  posisi terakhir.
- Lakukan iterasi berikutnya dengan mengabaikan elemen terakhir yang sudah 
  terurut. Iterasi ini akan memindahkan elemen terbesar kedua ke posisi 
  sebelum elemen terakhir.
- Ulangi proses di atas untuk setiap iterasi hingga seluruh daftar sudah 
  terurut dengan benar.

Pseudo Code: 
    function bubbleSort(arr) {
        var len = arr.length;
        var swapped;
    
        do {
            swapped = false;
            for (var i = 0; i < len - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                 var temp = arr[i];
                 arr[i] = arr[i + 1];
                 arr[i + 1] = temp;
                 swapped = true;
                }
            }
        } while (swapped);
        return arr;
    }
