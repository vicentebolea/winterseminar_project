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

void ArrayGenerator::assign(int* p, int s) { 
  this->array = p; 
  this->size = s; 
}

void ArrayGenerator::sort() { algorithm->sort(array, size); }
