#include "../include/point.h"
#include "iostream"

point::point(float x, float y, float z)
    :x{x}, y{y}, z{z}
    {}

std::ostream& operator<<(std::ostream& os, const point& a) {
    os << "x : " << a.x << " y :" << a.y << " z : " << a.z;
    return os;
}

vec3 operator+(point& a, point& b) {
    return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

vec3 operator-(point& a, point& b) {
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

int main() {
    point origin = point(0.0f, 0.0f, 0.0f);
    std::cout << origin;
    point a = point(1.0f, 1.0f, 1.0f);
    vec3 b = a - origin;
    std::cout << '\n' << b;
}
