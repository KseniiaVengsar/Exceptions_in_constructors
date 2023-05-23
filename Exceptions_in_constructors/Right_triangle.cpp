#include "Right_triangle.h"
#include "MyException.h"

Right_triangle::Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_) : Triangle(a_, b_, c_, A_, B_, C_) {
    if (C != 90) {
        throw MyException("������ �������� ������. �������: ���� C �� ����� 90");
    }
}

void Right_triangle::check() {
    std::cout << "������������� �����������: (�������: " << a << "," << b << "," << c << "; ����: " << A << "," << B << "," << C << ") ������" << std::endl;
}