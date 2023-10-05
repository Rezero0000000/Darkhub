#include <stdio.h>
#include <stdbool.h>

int main () {
  int numbers[7] = {4,7,2,3,6,1,5};
  int status = true;
  
  while (status) { 
    status = false;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
      if (numbers[i] < numbers[i + 1]){
        int tempA = numbers[i];
        numbers[i] = numbers[i + 1]; 
        numbers[i+1] = tempA;
        status = true;
      }
    }  
  }

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}
