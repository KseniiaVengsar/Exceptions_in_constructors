#pragma once
#include "Triangle.h"
#include <iostream>
#include <stdexcept>

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(int a_, int b_, int A_, int B_);
    void check() override;
};
