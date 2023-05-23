#include "Rhombus.h"

Rhombus::Rhombus(int a_, int A_, int B_) : Quadrangle(a_, a_, a_, a_, A_, B_, A_, B_) {
    if (A != B && C != D) {
        throw std::domain_error("������ �������� ������. �������: ���� A,C � B,D �� �����");
    }
}

void Rhombus::check() {
    std::cout << "����: (�������: " << a << "," << b << "," << c << "," << d << "; ����: " << A << "," << B << "," << C << "," << D << ") ������" << std::endl;
}