#include <stdio.h>
#include <stdbool.h>

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

  for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    printf("%d ", numbers[i]);
  }

  // Atau
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
  return 0;
}
