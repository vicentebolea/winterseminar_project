#pragma once

class SortAlgorithm {
  public:
    virtual ~SortAlgorithm () { };
    virtual void sort(int*, int) = 0;
};
