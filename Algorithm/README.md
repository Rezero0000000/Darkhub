## Bubble Sort

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

## Selection Sort

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

## Insertion Sort

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


## Sequental Search (Linear Search)

adalah metode sederhana untuk mencari elemen tertentu dalam array.

Pseudo Code:

    function sequentialSearch(arr, target) {
        for (let i = 0; i < arr.length; i++) {
            if (arr[i] === target) {
                return i; 
            }
        }
        return -1; 
    }

## Binary Search

 algoritma pencarian yang digunakan untuk mencari elemen tertentu 
 dalam sebuah larik atau daftar yang telah diurutkan. Algoritma ini 
 bekerja dengan membagi-bagi larik menjadi dua bagian dan memeriksa 
 elemen tengahnya. Berdasarkan perbandingan antara elemen tengah ini 
 dengan elemen yang dicari, algoritma akan menentukan apakah elemen 
 yang dicari berada di sebelah kiri atau kanan elemen tengah tersebut. 
 Proses ini terus berlanjut dengan mengurangi rentang pencarian 
 menjadi setengahnya pada setiap iterasi, hingga elemen yang dicari 
 ditemukan atau rentang pencarian telah habis.

Pseudo Code:

    function binarySearch(arr, target) {
        let left = 0;
        let right = arr.length - 1;

        while (left <= right) {
            const mid = Math.floor((left + right) / 2);

            if (arr[mid] === target) {
                return mid; 
            } else if (arr[mid] < target) {
                left = mid + 1; 
            } else {
                right = mid - 1;
            }
        }
        return -1; 
    }

## Merge Sort 

Merge sort adalah salah satu algoritma pengurutan (sorting algorithm) yang digunakan untuk 
mengurutkan sejumlah besar data. Algoritma ini termasuk dalam kategori algoritma pengurutan b
erdasarkan pemisahan (divide and conquer), yang berarti ia memecah masalah pengurutan menjadi 
beberapa submasalah yang lebih kecil, mengurutkan submasalah tersebut, dan kemudian 
menggabungkannya kembali menjadi solusi utuh.

Berikut adalah langkah-langkah utama dalam cara kerja merge sort:

1. **Pembagian (Divide)**:
   - Langkah pertama dalam merge sort adalah membagi array atau daftar yang akan 
   diurutkan menjadi dua bagian seimbang. Proses ini dilakukan secara rekursif hingga 
   setiap bagian hanya berisi satu elemen atau tidak bisa dibagi lebih lanjut.

2. **Pengurutan (Conquer)**:
   - Setelah array dibagi menjadi bagian-bagian yang lebih kecil, langkah selanjutnya 
   adalah mengurutkan masing-masing bagian tersebut. Ini bisa dilakukan dengan menggunakan 
   rekursi untuk mengurutkan setiap subarray.

3. **Penggabungan (Merge)**:
   - Tahap terakhir adalah menggabungkan kembali bagian-bagian yang sudah diurutkan 
   menjadi satu array besar yang terurut. Pada tahap ini, elemen-elemen dari dua bagian 
   yang berdekatan digabungkan menjadi satu bagian yang lebih besar dan diurutkan 
   secara bersamaan.

Proses penggabungan adalah inti dari algoritma merge sort. Selama proses 
penggabungan, dua bagian yang diurutkan dibandingkan satu sama lain, dan elemen-elemen 
dari keduanya diambil secara berurutan dengan mempertahankan urutan yang benar. Proses ini 
terus berlanjut hingga semua elemen digabungkan menjadi satu array terurut.

Keunggulan utama dari merge sort adalah bahwa ia memiliki kompleksitas waktu 
yang konstan, yaitu O(n log n), di mana n adalah jumlah elemen dalam array. 
Ini membuatnya efisien untuk mengurutkan daftar besar. Namun, salah satu kelemahannya 
adalah bahwa ia membutuhkan alokasi memori tambahan untuk menyimpan subarray sementara 
selama proses pembagian dan penggabungan, yang dapat membuatnya kurang efisien dalam hal 
penggunaan memori dibandingkan dengan beberapa algoritma pengurutan lainnya.

Example :

```
[38, 27, 43, 3, 9, 82, 10]
```

Langkah 1: Pembagian (Divide)
Pertama, kita akan membagi array ini menjadi dua bagian seimbang:

```
[38, 27, 43, 3]    [9, 82, 10]
```

Kemudian, kita akan terus membagi masing-masing subarray hingga hanya 
tersisa satu elemen dalam setiap subarray:

```
[38]  [27]  [43]  [3]    [9]  [82]  [10]
```

Langkah 2: Pengurutan (Conquer)
Selanjutnya, kita akan mengurutkan masing-masing subarray secara terpisah:

```
[27, 38]  [3, 43]    [9, 10, 82]
```

Langkah 3: Penggabungan (Merge)
Sekarang, kita akan menggabungkan kembali subarray-subarray ini sambil 
mempertahankan urutan yang benar:

1. Gabung [27, 38] dan [3, 43]:
```
[3, 27, 38, 43]
```

2. Gabung hasil gabungan sebelumnya dengan [9, 10, 82]:
```
[3, 9, 10, 27, 38, 43, 82]
```

Sekarang, array ini sudah terurut secara ascending, 
dan proses merge sort selesai. Array yang diurutkan adalah:

```
[3, 9, 10, 27, 38, 43, 82]
```

Pseudo Code: 
    
    function merge(left, right) {
        let result = [];
        let leftIndex = 0;
        let rightIndex = 0;

    while (leftIndex < left.length && rightIndex < right.length) {
        if (left[leftIndex] < right[rightIndex]) {
            result.push(left[leftIndex]);
            leftIndex++;
        } else {
            result.push(right[rightIndex]);
            rightIndex++;
        }
    }

        return result.concat(left.slice(leftIndex)).concat(right.slice(rightIndex));
    }

    function mergeSort(arr) {
        if (arr.length <= 1) {
            return arr; // Array yang sudah terurut jika hanya berisi satu elemen atau kosong
        }

        const middle = Math.floor(arr.length / 2);
        const left = arr.slice(0, middle);
        const right = arr.slice(middle);

        return merge(mergeSort(left), mergeSort(right));
    }

## Quick Sort

Algoritma ini juga termasuk dalam kategori algoritma "divide and conquer,"
seperti merge sort. Ia bekerja dengan cara membagi array atau daftar yang 
akan diurutkan menjadi dua bagian, mengurutkan masing-masing bagian
tersebut, dan kemudian menggabungkannya kembali. Namun, yang membedakan 
quick sort adalah pendekatan yang digunakan untuk pembagian dan 
penggabungan, yang lebih cepat daripada merge sort dalam beberapa kasus.

langkah-langkah:

1. **Pivot Selection (Pemilihan Pivot)**:
   - Algoritma quick sort memilih elemen tertentu sebagai "pivot." 
   Pemilihan pivot dapat dilakukan dengan berbagai cara, tetapi 
   salah satu pendekatan umum adalah memilih elemen tengah dari array 
   atau daftar yang akan diurutkan.

2. **Partisi (Partitioning)**:
   - Setelah pivot dipilih, array dibagi menjadi dua bagian: bagian
   sebelah kiri pivot yang berisi elemen-elemen yang kurang dari atau
   sama dengan pivot, dan bagian sebelah kanan pivot yang berisi
   elemen-elemen yang lebih besar dari pivot.

   - Tujuan dari langkah ini adalah memindahkan pivot ke posisi yang tepat 
   sehingga elemen-elemen di sebelah kirinya lebih kecil daripada pivot, dan
   elemen-elemen di sebelah kanannya lebih besar daripada pivot.

3. **Rekursi (Recursion)**:
   - Setelah pembagian, algoritma quick sort diterapkan secara rekursif
   pada kedua bagian yang terpisah tersebut. Artinya, langkah-langkah di atas
   diulang pada kedua subarray tersebut secara terpisah.

4. **Penggabungan (Combination)**:
   - Setelah kedua subarray terpisah diurutkan, mereka digabungkan
   kembali untuk menghasilkan array yang sudah terurut secara keseluruhan.
   
Algoritma ini terus membagi dan mengurutkan subarray hingga seluruh array
terurut. Perlu diperhatikan bahwa pemilihan pivot yang baik adalah kunci
untuk kinerja optimal dari quick sort. Jika pivot yang dipilih selalu merupakan
elemen terkecil atau terbesar, algoritma dapat memiliki kinerja terburuk, O(n^2).
Namun, jika pivot dipilih secara acak atau dengan strategi yang cerdas, quick sort
dapat mencapai kompleksitas waktu rata-rata O(n log n), yang membuatnya 
sangat efisien untuk mengurutkan array besar.

Cara memilih pivot:

1. **Pivot Tengah**: Pivot dipilih sebagai elemen tengah dari array. 
Ini sering digunakan sebagai pilihan default dan sering berfungsi baik dalam kasus umum.

2. **Pivot Acak**: Pivot dipilih secara acak dari array. Ini mengurangi 
kemungkinan terjadinya kasus terburuk dan umumnya menghasilkan kinerja
yang baik secara rata-rata.

3. **Pivot Median-of-Three**: Dalam strategi ini, kita memilih
tiga elemen (biasanya elemen pertama, tengah, dan terakhir) dari array,
dan kemudian kita pilih median dari ketiga elemen tersebut sebagai pivot.
Ini dapat mengurangi kemungkinan terjadinya kasus terburuk dan memberikan
kinerja yang baik dalam banyak situasi.

4. **Pivot Pemilihan Khusus (Misalnya, Pivoting of Medians)**: Ini adalah
pendekatan yang lebih canggih di mana kita melakukan pemilihan pivot berdasarkan
analisis statistik yang lebih mendalam dari array. Pendekatan seperti ini
lebih kompleks tetapi dapat memberikan hasil yang baik dalam kasus-kasus yang sulit.

Simulasi :

Mari kita simulasikan quick sort dengan contoh sederhana menggunakan array berikut:

```
[38, 27, 43, 3, 9, 82, 10]
```

Langkah 1: Pivot Selection (Pemilihan Pivot)
Kita akan memilih pivot dari array. Dalam contoh ini, kita akan memilih pivot pertama, 
yaitu `38`.

Langkah 2: Partisi (Partitioning)
Kita akan membagi array menjadi dua bagian: bagian sebelah kiri pivot yang berisi 
elemen-elemen yang lebih kecil daripada pivot, dan bagian sebelah kanan pivot yang
berisi elemen-elemen yang lebih besar daripada pivot.

```
[27, 3, 9, 10]    [38]    [43, 82]
```

Pivot `38` telah berada di posisi yang benar di antara bagian kiri dan kanan. 
Bagian kiri hanya berisi elemen yang lebih kecil daripada pivot, dan bagian 
kanan hanya berisi elemen yang lebih besar.

Langkah 3: Rekursi (Recursion)
Kita akan menerapkan quick sort secara rekursif pada kedua subarray yang 
terpisah (bagian kiri dan kanan).

Pada bagian kiri `[27, 3, 9, 10]`:
- Pivot: `27`
- Partisi:
  ```
  [3, 9, 10]    [27]
  ```

Kita akan menerapkan quick sort pada kedua subarray tersebut, tetapi dalam 
contoh ini, mereka sudah terurut.

Pada bagian kanan `[43, 82]`:
- Pivot: `43`
- Partisi:
  ```
  [43]    [82]
  ```

Kedua subarray tersebut juga sudah terurut.

Langkah 4: Penggabungan (Combination)
Terakhir, kita akan menggabungkan kembali subarray-subarray yang sudah 
terurut menjadi satu array terurut.

```
[3, 9, 10, 27, 38, 43, 82]
```

Sekarang, array ini sudah terurut secara ascending, dan proses quick sort selesai.

Demikianlah contoh simulasi singkat dari quick sort. Algoritma ini akan bekerja 
dengan cara yang serupa untuk array yang lebih besar dan lebih kompleks, dengan 
pemilihan pivot yang sesuai untuk setiap situasi.

Pseudo Code:

    function partition(arr, low, high) {
        const pivot = arr[high];
        let i = low - 1;

        for (let j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                // Tukar elemen ke-i dan ke-j
                [arr[i], arr[j]] = [arr[j], arr[i]];
            }
        }

        // Tukar pivot dengan elemen ke-(i+1)
         [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];
        
        return i + 1;
        
    }

    function quickSort(arr, low, high) {
        if (low < high) {
            // Temukan pivot yang benar dan lakukan partisi
            const pivotIndex = partition(arr, low, high);

            // Rekursi pada dua subarray
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }
