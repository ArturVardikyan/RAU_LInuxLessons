#include <iostream>
#include "Sorting.h"
#include "ComplexNumber.h"
#include <vector>

int main(){
    std::vector<ComplexNumber> numbers = {
        ComplexNumber(3,4),
        ComplexNumber(2,1),
        ComplexNumber(4,3),
        ComplexNumber(6,8)
    };
    sortComplexNumbers(numbers);
    for (int i = 0; i < 4; i++)
    {
        numbers[i].print();
    }
    
}