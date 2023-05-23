#include "Equilateral_Triangle.h"

Equilateral_triangle::Equilateral_triangle(int a_, int A_) : Triangle(a_, a_, a_, A_, A_, A_) {
    if ((a != c && a != b || c != a && c != b || b != a && b != c) &&
        (A != 60 || B != 60 || C != 60)) {
        throw std::domain_error("Ошибка создания фигуры. Причина: стороны не равны, углы не равны 60");
    }
}

void Equilateral_triangle::check() {
    std::cout << "Равносторонний треугольник: (Стороны: " << a << "," << b << "," << c << "; Углы: " << A << "," << B << "," << C << ") создан" << std::endl;
}
