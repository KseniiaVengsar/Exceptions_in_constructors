#include "Rhombus.h"

Rhombus::Rhombus(int a_, int A_, int B_) : Quadrangle(a_, a_, a_, a_, A_, B_, A_, B_) {
    if (A != B && C != D) {
        throw std::domain_error("Ошибка создания фигуры. Причина: углы A,C и B,D не равны");
    }
}

void Rhombus::check() {
    std::cout << "Ромб: (Стороны: " << a << "," << b << "," << c << "," << d << "; Углы: " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
}