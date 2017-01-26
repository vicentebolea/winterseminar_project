#include "selectionsort.hh"
#include <algorithm>

void SelectionSort::sort(int* a, int n) {
  int i,j;

  for (j = 0; j < n-1; j++) {
    int iMin = j;
    for (i = j+1; i < n; i++) {
      if (a[i] < a[iMin]) {
        iMin = i;
      }
    }

    if(iMin != j) {
      std::swap(a[j], a[iMin]);
    }
  }

}
