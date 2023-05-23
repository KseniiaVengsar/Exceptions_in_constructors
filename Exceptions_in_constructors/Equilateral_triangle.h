#pragma once
#include "Triangle.h"
#include <iostream>
#include <stdexcept>

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a_, int A_);
    void check() override;
};


