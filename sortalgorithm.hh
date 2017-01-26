#pragma once

class SortAlgorithm {
  public:
    SortAlgorithm() = default;
    //virtual ~SortAlgorithm () = 0;
    virtual void sort(int*, int) = 0;
};
