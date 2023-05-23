#include "Square.h"

Square::Square(int a_, int A_) : Quadrangle(a_, a_, a_, a_, A_, A_, A_, A_) {
    if ((a != b && a != c && a != d || b != a && b != c && b != d || c != a && c != b && c != d) && (A != 90 && B != 90 && C != 90 && D != 90)) {
        throw std::domain_error("Ошибка создания фигуры. Причина: углы не равны 90");
    }
}

void Square::check() {
    std::cout << "Квадрат: (Стороны: " << a << "," << b << "," << c << "," << d << "; Углы: " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
}
