// creating a macros to prevent re-compilation
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber{
    private:
        double real;
        double imag;
    public:
    
        // constructor with default values 0, 0 if values are not provided in main
        ComplexNumber(double r = 0.0,double i = 0.0); 
        
        // operator +".
        ComplexNumber operator+(const ComplexNumber& other);

        // operator -".
        ComplexNumber operator-(const ComplexNumber& other);
        
        // operator *".
        ComplexNumber operator*(const ComplexNumber& other);
        
        // method for obtaining the modulus
        double abs() const;
        
        // method for outputting values
        void print() const;
};

#endif
