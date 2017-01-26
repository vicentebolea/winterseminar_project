#pragma once
#include "sortalgorithm.hh"

class InsertionSort : public SortAlgorithm {
  public:
    ~InsertionSort () { }
    void sort(int*, int) override;
};
