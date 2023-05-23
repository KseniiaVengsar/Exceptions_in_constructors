#include "Parallelogram.h"

Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) : Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_) {
    if ((a != b && c != d) && (A != B && C != D)) {
        throw std::domain_error("������ �������� ������. �������: ������� a,c � b,d �� �����, ���� A,C � B,D �� �����");
    }
}

void Parallelogram::check() {
    std::cout << "��������������: (�������: " << a << "," << b << "," << c << "," << d << "; ����: " << A << "," << B << "," << C << "," << D << ") ������" << std::endl;
}