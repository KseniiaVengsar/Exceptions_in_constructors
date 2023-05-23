#pragma once
#include "Quadrangle.h"
#include <iostream>
#include <stdexcept>

class Rhombus : public Quadrangle {
public:
    Rhombus(int a_, int A_, int B_);
    void check() override;
};
