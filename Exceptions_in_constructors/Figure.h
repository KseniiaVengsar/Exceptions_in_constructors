#pragma once

class Figure {

public:
	// false -������ ��� ������������ ������ �� ����� ���� ����������
	virtual void check()=0;
};
void print_info(Figure* figure);




