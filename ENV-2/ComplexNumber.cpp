#include "ComplexNumber.h"
#include <iostream>
#include <cmath>
using std::sqrt;
using std::cout;
using std::endl;
//defining the constructor
ComplexNumber::ComplexNumber(double r,double i)  : real(r) , imag(i){}

// defining the operator +
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other){
return ComplexNumber(real + other.real,imag + other.imag);
}

// defining the operator -
ComplexNumber ComplexNumber::operator-(const ComplexNumber& other){ 
    return ComplexNumber(real - other.real,imag - other.imag);
}

// defining the operator *
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other){
    return ComplexNumber(real * other.real,imag * other.imag);
}

// defining the module
double ComplexNumber::abs() const{
    return sqrt(real*real + imag*imag);
}

// creating a method for output
void ComplexNumber::print() const{ 
    cout << "(" << real << " + " << imag << ")"<< endl;;
}
