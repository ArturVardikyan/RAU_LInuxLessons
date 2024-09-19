#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
class ComplexNumber{
    private:
        double real;
        double imag;
    public:
        ComplexNumber(double r = 0.0,double i = 0.0);
        ComplexNumber operator+(const ComplexNumber& other);
        ComplexNumber operator-(const ComplexNumber& other);
        ComplexNumber operator*(const ComplexNumber& other);
        double abs() const;
        void print() const;
};
#endif