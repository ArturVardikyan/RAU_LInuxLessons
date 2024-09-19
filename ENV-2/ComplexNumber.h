#ifndef COMPLEXNUMBER_H // создание макроса для предотвращения повторной компиляции
#define COMPLEXNUMBER_H

class ComplexNumber{
    private:
        double real;
        double imag;
    public:
        ComplexNumber(double r = 0.0,double i = 0.0); // конструктор с дефолтными значениями 0 0 если в мейн не зададим значения
        
        ComplexNumber operator+(const ComplexNumber& other);// опертор +

        ComplexNumber operator-(const ComplexNumber& other);// опертор -
        
        ComplexNumber operator*(const ComplexNumber& other);// опертор *
        
        double abs() const;// метод для полученя модуля
        
        void print() const;// метод вывода значений
};

#endif