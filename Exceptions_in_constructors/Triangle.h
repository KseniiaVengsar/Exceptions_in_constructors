#pragma once

#include "Figure.h"
#include <iostream>

class Triangle : public Figure {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    Triangle(int a_, int b_, int c_, int A_, int B_, int C_);
    void check() override;
};