#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) : Figure() {
    a = a_;
    b = b_;
    c = c_;
    A = A_;
    B = B_;
    C = C_;

    if (A + B + C != 180) {
        throw MyException("������ �������� ������. �������: ����� ����� �� ����� 180");
    }
}

void Triangle::check() {
    std::cout << "�����������: (�������: " << a << "," << b << "," << c << "; ����: " << A << "," << B << "," << C << ") ������" << std::endl;
}