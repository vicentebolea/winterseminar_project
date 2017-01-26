#include "arraygenerator.hh"
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  int A[] = {4, 3 , 2 ,1 , 6 ,5};
  int cmp[] = {1, 2, 3, 4, 5, 6};

  ArrayGenerator ag (1);
  ag.assing(A, 6);
  ag.sort();

  for (int i = 0; i < 6; i++) {
    if (A[i] != cmp[i]) return -1;
  }
  
  return 0;
}

