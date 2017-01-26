#pragma once
#include "sortalgorithm.hh"

class ArrayGenerator {
  public:
    ArrayGenerator(int);
    void assign(int*);
    void sort();

  protected:
    int* array;
    
    SortAlgorithm* algorithm;
};
