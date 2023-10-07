#include <stdio.h>

int binarySearch(int arr[], int key, int left, int right) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      left = mid + 1; 
    } else {
      right = mid - 1; 
    }
  }

  return -1;
}

int main() {
  int arr[] = {4, 12, 13, 16, 18, 80, 99};
  int key = 18;
  int left = 0;
  int right = sizeof(arr) / sizeof(arr[0]) - 1;

  int result = binarySearch(arr, key, left, right);

  if (result != -1) {
    printf("Element %d found at index %d\n", key, result);
  } else {
    printf("Element %d not found in the array\n", key);
  }

  return 0;
}

