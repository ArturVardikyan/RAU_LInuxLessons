#include "ComplexNumber.h"
#include <iostream>
#include <cmath>
using std::sqrt;
using std::cout;
using std::endl;

ComplexNumber::ComplexNumber(double r,double i)  : real(r) , imag(i){} // определяем  конструктор

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other){ // определяем  опертор +
    return ComplexNumber(real + other.real,imag + other.imag);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other){ // определяем  опертор -
    return ComplexNumber(real - other.real,imag - other.imag);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other){ // определяем  опертор *
    return ComplexNumber(real * other.real,imag * other.imag);
}

double ComplexNumber::abs() const{// определяем модуль
    return sqrt(real*real + imag*imag);
}

void ComplexNumber::print() const{// создаем метод для вывода 
    cout << "(" << real << " + " << imag << ")"<< endl;;
}