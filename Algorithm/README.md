### Bubble Sort
- Bandingkan dua angka berturut-turut dalam daftar.
- Jika angka pertama lebih besar daripada yang kedua, tukar posisi mereka.
- Lanjutkan langkah 1 dan 2 sampai seluruh daftar terurut.Pseudo Code: 

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

### Selection Sort
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
