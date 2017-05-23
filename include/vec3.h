#pragma once
#include <iostream>

class vec3 {
public:
    const float x, y, z;
    vec3(float x,float y,float z);
    vec3 norm();
    float length();
};

vec3 operator+(const vec3& a,const vec3& b);
vec3 operator-(const vec3& a,const vec3& b);
vec3 operator*(float scalar,const vec3& a);
vec3 operator*(const vec3& a,float scalar);
std::ostream& operator<<(std::ostream& os, const vec3& a);
