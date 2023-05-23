#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int a_, int b_, int A_, int B_) : Triangle(a_, b_, b_, A_, B_, B_) {
    if (a != c && A != C) {
        throw std::domain_error("Ошибка создания фигуры. Причина: стороны a и c не равны, углы A и C не равны");
    }
}

void Isosceles_triangle::check() {
    std::cout << "Равнобедренный треугольник: (Стороны: " << a << "," << b << "," << c << "; Углы: " << A << "," << B << "," << C << ") создан" << std::endl;
}
