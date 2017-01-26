#include "arraygenerator.hh"
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  int A[] = {4, 3 , 2 ,1 , 6 ,5};
  int cmp[] = {1, 2, 3, 4, 5, 6};

  // Test 1 
  ArrayGenerator ag (1);
  ag.assign(A, 6);
  ag.sort();

  for (int i = 0; i < 6; i++) {
    if (A[i] != cmp[i]) return -1;
  }

  // Test 2 
  int B[] = {4, 3 , 2 ,1 , 6 ,5};
  ArrayGenerator ag2 (2);
  ag2.assign(B, 6);
  ag2.sort();

  for (int i = 0; i < 6; i++) {
    if (B[i] != cmp[i]) return -1;
  }
  
  return 0;
}

