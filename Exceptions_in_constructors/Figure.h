#pragma once

class Figure {

public:
	// false -фигура без определенных сторон не может быть правильной
	virtual void check()=0;
};
void print_info(Figure* figure);




