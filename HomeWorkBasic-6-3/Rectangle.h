#include "Parallelogram.h"

#pragma once
class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b);
    Rectangle(int a, int b, std::string name);
};