### Bubble Sort

Bubble sort membandingkan dan menukar pasangan elemen yang berdekatan jika mereka tidak dalam
urutan yang benar. Ini terus berlanjut hingga tidak ada lagi pertukaran yang diperlukan.

- Bandingkan dua angka berturut-turut dalam daftar.
- Jika angka pertama lebih besar daripada yang kedua, tukar posisi mereka.
- Lanjutkan langkah 1 dan 2 sampai seluruh daftar terurut.Pseudo Code: 

Pseudo Code:

    let numbers = [4, 7, 2, 3, 6, 1, 5];

    for (let i = 0; i < numbers.length; i++) {
        for (let j = 0; j < numbers.length - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Tukar elemen jika perlu
                let temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

### Selection Sort

Selection sort mencari elemen terkecil dalam daftar dan menukarnya dengan elemen pertama. 
Kemudian mencari elemen terkecil kedua dalam sisa daftar dan menukarnya dengan elemen kedua, dan s
eterusnya.

- Cari elemen terkecil dalam array.
- Tukar elemen terkecil dengan elemen pertama.
- Cari elemen terkecil dalam sisa array (tanpa elemen pertama).
- Tukar elemen terkecil ini dengan elemen kedua.
- Ulangi proses di atas untuk elemen-elemen berikutnya hingga seluruh array 
  terurut.

Pseudo Code:

    function selectionSort(arr) {
        n = arr.length;

        for (i = 0; i < n-1; i++) {
            minIndex = i;
            for (j = i+1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
        
            if (minIndex !== i) {
                var temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }

### Insertion Sort

Insertion sort membandingkan dan memindahkan elemen satu per satu ke posisi yang benar
dalam daftar yang sedang diurutkan. dimulai dari elemen ke 2, misal:

[5, 2, 1, 3] -> [2, 5, 1, 3] -> [2, 1, 5, 3] -> [1, 2, 5, 3] -> [1, 2, 3, 5]

Pseudo Code:

    for (let i = 0; i < arr.length; i++) {
        for (let j = i; j > 0; j--) {
            
            if (arr[j] < arr[j - 1]) {
                let temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } 
            else {
                break; 
            }
        }
    }



