#pragma once
#include "sortalgorithm.hh"

class ArrayGenerator {
  public:
    ArrayGenerator(int);
    ~ArrayGenerator();
    void assign(int*, int);
    void sort();

  protected:
    int* array;
    int size;
    
    SortAlgorithm* algorithm;
};
