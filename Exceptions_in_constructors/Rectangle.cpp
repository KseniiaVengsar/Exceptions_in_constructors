#include "Rectangle.h"

Rectangle::Rectangle(int a_, int b_, int A_) : Quadrangle(a_, b_, a_, b_, A_, A_, A_, A_) {
    if ((a != b && c != d) && (A + B + C + D != 90)) {
        throw std::domain_error("Ошибка создания фигуры. Причина: стороны a,c и b,d не равны, углы не равны 90");
    }
}

void Rectangle::check() {
    std::cout << "Прямоугольник: (Стороны: " << a << "," << b << "," << c << "," << d << "; Углы: " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
}