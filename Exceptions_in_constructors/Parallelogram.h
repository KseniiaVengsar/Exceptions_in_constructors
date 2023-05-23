#pragma once
#include "Quadrangle.h"
#include <iostream>
#include <stdexcept>

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a_, int b_, int A_, int B_);
    void check() override;
};
