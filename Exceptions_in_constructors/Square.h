#pragma once
#include "Quadrangle.h"
#include <iostream>
#include <stdexcept>

class Square : public Quadrangle {
public:
    Square(int a_, int A_);
    void check() override;
};
