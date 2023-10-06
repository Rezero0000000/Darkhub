#include <stdio.h>

int main () {
  int numbers[9] = {9, 1, 6, 3, 8, 2, 5, 4, 7};

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]) - 1; i++) {
    int minIndex = i;

    for (int j = i + 1; j < sizeof(numbers)/sizeof(numbers[0]); j++) {
      if (numbers[j] < numbers[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      int temp = numbers[i];
      numbers[i] = numbers[minIndex];
      numbers[minIndex] = temp;
    }
  }

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}
