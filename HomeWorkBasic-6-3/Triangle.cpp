#include <string>
#include "Triangle.h"
#include "Figure.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) : Figure(name) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник") {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

std::string Triangle::Info() {
    return figureName + ":\n" + "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "\n"
        + "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + "\n\n";
}
