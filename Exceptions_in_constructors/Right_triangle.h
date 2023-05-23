#pragma once
#include "Triangle.h"
#include <iostream>

class Right_triangle : public Triangle {
public:
    Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_);
    void check() override;
};