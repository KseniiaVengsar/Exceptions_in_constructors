#include "Rectangle.h"

Rectangle::Rectangle(int a_, int b_, int A_) : Quadrangle(a_, b_, a_, b_, A_, A_, A_, A_) {
    if ((a != b && c != d) && (A + B + C + D != 90)) {
        throw std::domain_error("������ �������� ������. �������: ������� a,c � b,d �� �����, ���� �� ����� 90");
    }
}

void Rectangle::check() {
    std::cout << "�������������: (�������: " << a << "," << b << "," << c << "," << d << "; ����: " << A << "," << B << "," << C << "," << D << ") ������" << std::endl;
}