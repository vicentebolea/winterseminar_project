#pragma once
#include "sortalgorithm.hh"

class SelectionSort: public SortAlgorithm {
  public:
    ~SelectionSort () = default;
    void sort(int*, int) override
};
