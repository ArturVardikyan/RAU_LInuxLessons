#include "Sorting.h"
#include <algorithm>

// defining a method to compare 2 complex numbers by modulus
bool compareByAbs(const ComplexNumber& a,const ComplexNumber& b){ 
    return a.abs() < b.abs();
}

// defining a method for sorting by modulus
void sortComplexNumbers(std::vector<ComplexNumber>& numbers){
    std::sort(numbers.begin(), numbers.end(), compareByAbs);
}
