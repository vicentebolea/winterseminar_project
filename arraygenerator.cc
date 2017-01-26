#include "arraygenerator.hh"
#include "insertionsort.hh"
#include "selectionsort.hh"

ArrayGenerator::ArrayGenerator(int idx) { 
  switch (idx) {
    case 1: algorithm = new InsertionSort();
    case 2: algorithm = new SelectionSort();
  }
}

ArrayGenerator::~ArrayGenerator() { 
  delete algorithm;
}

ArrayGenerator::assing(int* p) { this->array = p; }
ArrayGenerator::sort() { this->array = p; }
