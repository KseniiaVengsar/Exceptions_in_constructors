#include "Right_triangle.h"
#include "MyException.h"

Right_triangle::Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_) : Triangle(a_, b_, c_, A_, B_, C_) {
    if (C != 90) {
        throw MyException("Ошибка создания фигуры. Причина: угол C не равен 90");
    }
}

void Right_triangle::check() {
    std::cout << "Прямоугольный треугольник: (Стороны: " << a << "," << b << "," << c << "; Углы: " << A << "," << B << "," << C << ") создан" << std::endl;
}