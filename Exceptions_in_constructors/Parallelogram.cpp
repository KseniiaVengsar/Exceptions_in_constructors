#include "Parallelogram.h"

Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) : Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_) {
    if ((a != b && c != d) && (A != B && C != D)) {
        throw std::domain_error("Ошибка создания фигуры. Причина: стороны a,c и b,d не равны, углы A,C и B,D не равны");
    }
}

void Parallelogram::check() {
    std::cout << "Параллелограмм: (Стороны: " << a << "," << b << "," << c << "," << d << "; Углы: " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
}
