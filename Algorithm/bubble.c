#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void bubbleChar (char arr[][100], int n) {
    int i, j;
    char temp[100];

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main () {
  int numbers[7] = {4,7,2,3,6,1,5};
  int status = true;
  
  while (status) { 
    status = false;
  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]) - 1; i++) {
        if (numbers[i] > numbers[i + 1]){
          int temp = numbers[i];
          numbers[i] = numbers[i + 1]; 
          numbers[i+1] = temp;
          status = true;
        }
      }  
    }

  printf("\n");

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    printf("%d ", numbers[i]);
  }

  // or
  int numbers2[7] = {4,7,2,3,6,1,5};

  for (int i = 0; i < sizeof(numbers2)/sizeof(numbers2[0]); i++) {
    for (int i = 0; i < sizeof(numbers2)/sizeof(numbers2[0]) - 1; i++) {
      if (numbers2[i] > numbers2[i+1]){
        int temp = numbers2[i];
        numbers2[i] = numbers2[i+1];
        numbers2[i+1] = temp;
      }
    }
  }
  printf("\n");
  for (int i = 0; i < sizeof(numbers2)/sizeof(numbers2[0]); i++) {
    printf("%d ", numbers2[i]);
  }

  // for String
  char arr[][100] = {"Schwartz", "Rem", "Nobara", "Haju", "Fubuki"};
  
  printf("\n\nBefore: ");
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf("%s, ",arr[i]);
  } 

  bubbleChar (arr, sizeof(arr)/sizeof(arr[0]));

  printf("\nAfter: ");
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf("%s, ",arr[i]);
  }
  
  return 0;
}
