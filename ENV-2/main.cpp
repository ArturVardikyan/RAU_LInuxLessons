#include <iostream>
#include "Sorting.h"
#include "ComplexNumber.h"
#include <vector>

int main(){
    // creating several objects of the complex number class and placing them in a vector
    std::vector<ComplexNumber> numbers = { 
        ComplexNumber(3,4),
        ComplexNumber(2,1),
        ComplexNumber(4,3),
        ComplexNumber(6,8)
    };
    
    sortComplexNumbers(numbers);// calling the sorting method with the parameter - our vector described above
    // output in a loop by index in the vector, using a method defined in advance
    for (int i = 0; i < 4; i++)
    {
        numbers[i].print();
    }
    
}
