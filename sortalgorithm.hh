#pragma once

class SortAlgorithm {
  public:
    SortAlgorithm() = default;
    virtual ~SortAlgorithm ();
    virtual void sort(int*, int) = 0;
};
