#include "Quadrangle.h"

#pragma once
class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int A, int B);
    Parallelogram(int a, int b, int A, int B, std::string name);
};