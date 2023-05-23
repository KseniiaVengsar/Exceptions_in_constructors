#include "Quadrangle.h"

Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) : Figure() {
    a = a_;
    b = b_;
    c = c_;
    d = d_;
    A = A_;
    B = B_;
    C = C_;
    D = D_;
    if (A + B + C + D != 360) {
        throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    }
}

void Quadrangle::check() {
    std::cout << "Четырёхугольник: (Стороны: " << a << "," << b << "," << c << "," << d << "; Углы: " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
}
