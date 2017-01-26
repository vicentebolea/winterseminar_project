#include "insertionsort.hh"

void InsertionSort::sort(int* array, int n) {
  int c;

  for (c = 1 ; c <= n - 1; c++) {
    int d = c;

    while (d > 0 && array[d] < array[d-1]) {
      int t      = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;

      d--;
    }
  }
}
