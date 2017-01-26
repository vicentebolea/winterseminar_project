#include <iostream>
#include "arraygenerator.hh"

using namespace std;

int main(int argc, char *argv[]) {
  int A[] = {4, 3 , 2 ,1 , 6 ,5};
  const int size = 6;

  cout << "Select one kind of sort (insertion = 1, selection = 2)> ";
  int opt;
  cin >> opt;

  ArrayGenerator ag (opt);
  ag.assign(A, size);
  ag.sort();

  for (int i = 0; i < size; ++i) {
    cout << A[i] << " ";
  } 
  cout << endl;

  return 0;
}
