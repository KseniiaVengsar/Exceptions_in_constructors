#pragma once
#include "Quadrangle.h"
#include <iostream>
#include <stdexcept>

class Rectangle : public Quadrangle {
public:
    Rectangle(int a_, int b_, int A_);
    void check() override;
};