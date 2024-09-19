#include <iostream>
#include "Sorting.h"
#include "ComplexNumber.h"
#include <vector>

int main(){
    
    std::vector<ComplexNumber> numbers = { // создаем несколько обектов класса компл чисел и помещаем в вектор
        ComplexNumber(3,4),
        ComplexNumber(2,1),
        ComplexNumber(4,3),
        ComplexNumber(6,8)
    };
    
    sortComplexNumbers(numbers);// вызов метода сортеровки с параметром - наш вектор выше описанный
    
    for (int i = 0; i < 4; i++)
    {
        numbers[i].print();// вывод в чикле по идексу в векторе заррание намо определенным методом
    }
    
}