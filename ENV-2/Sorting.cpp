#include "Sorting.h"
#include <algorithm>

bool compareByAbs(const ComplexNumber& a,const ComplexNumber& b){ // определяем метод для сравнения 2 компл чисел по модулю
    return a.abs() < b.abs();
}

void sortComplexNumbers(std::vector<ComplexNumber>& numbers){// определяем метод для сортировки по модулю 
    std::sort(numbers.begin(), numbers.end(), compareByAbs);
}