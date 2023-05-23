#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int a_, int b_, int A_, int B_) : Triangle(a_, b_, b_, A_, B_, B_) {
    if (a != c && A != C) {
        throw std::domain_error("������ �������� ������. �������: ������� a � c �� �����, ���� A � C �� �����");
    }
}

void Isosceles_triangle::check() {
    std::cout << "�������������� �����������: (�������: " << a << "," << b << "," << c << "; ����: " << A << "," << B << "," << C << ") ������" << std::endl;
}