#include <stdio.h>

int main () {
  int arr[] = {1, 2, 3, 7, 8, 4,5};
  
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    if (arr[i] == 7){
      printf("Element 7 found at index %d", i);
    }
  }

  return 0;
}
