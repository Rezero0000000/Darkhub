#include <stdio.h>
#include <string.h>

void selectionSort (char arr[][100], int n);

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

  // for string
  char strings[][100] = {"Rem", "Haju", "Lain", "Arisu", "Kurumi", "Aruna"};
  int n = sizeof(strings)/sizeof(strings[0]);
 
  printf("\nBefore: ");
  for (int i = 0; i < n; i++){
    printf("%s, ", strings[i]);
  } 

  selectionSort (strings, n);

  printf("\nAfter: ");
  for (int i = 0; i < n; i++){
    printf("%s, ", strings[i]);
  } 

  return 0;
}

void selectionSort (char arr[][100], int n) {
  char temp[100];

  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if (strcmp(arr[j], arr[minIndex]) < 0) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      strcpy(temp, arr[i]);
      strcpy(arr[i], arr[minIndex]);
      strcpy(arr[minIndex], temp);
    }
  } 

}
