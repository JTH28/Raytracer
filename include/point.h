#pragma once
#include "vec3.h"

class point {
public:
    float x, y, z;
    point(float x, float y, float z);
};

std::ostream& operator<<(std::ostream& os, const point& a);
vec3 operator+(const point& a,const point& b);
vec3 operator-(const point& a,const point& b);
