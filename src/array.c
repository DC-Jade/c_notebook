#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct complex_struct { 
  double x, y;
} a[4];  // array including struct complex_struct

void displayArray(int array[], int len) {
  // pass by array
  for (int i = 0; i < len - 1; ++i) {
    printf("%d ", array[i]);
  }
  printf("%d\n", array[len - 1]);
}

void displayArrayPtr(int *array, int len) {
  // pass by ptr
  for (int i = 0; i < len - 1; ++i) { 
    printf("%d ", array[i]);
  }
  printf("%d\n", array[len - 1]);
}

int main() {
  srand(time(NULL));

  // int ptr
  int *array = calloc(10, sizeof(int));
  
  for (int i = 0; i < 10; ++i) {
    array[i] = rand() % 100;
  }

  displayArray(array, 10);
  displayArrayPtr(array, 10);
  free(array);
  return 0;
}
