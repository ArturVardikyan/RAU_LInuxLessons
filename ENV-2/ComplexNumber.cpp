#include "ComplexNumber.h"
#include <iostream>
#include <cmath>
using std::sqrt;
using std::cout;
using std::endl;
ComplexNumber::ComplexNumber(double r,double i)  : real(r) , imag(i){}
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other){
    return ComplexNumber(real + other.real,imag + other.imag);
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber& other){
    return ComplexNumber(real - other.real,imag - other.imag);
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other){
    return ComplexNumber(real * other.real,imag * other.imag);
}
double ComplexNumber::abs() const{
    return sqrt(real*real + imag*imag);
}
void ComplexNumber::print() const{
    cout << "(" << real << " + " << imag << ")"<< endl;;
}