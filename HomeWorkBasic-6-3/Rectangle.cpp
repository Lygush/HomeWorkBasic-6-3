#include "Parallelogram.h"
#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90, "�������������") {}
Rectangle::Rectangle(int a, int b, std::string name) : Parallelogram(a, b, 90, 90, name) {}