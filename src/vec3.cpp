#include "iostream"
#include "math.h"
#include "../include/vec3.h"


vec3::vec3(float x,float y,float z)
    : x{x}, y{y}, z{z}
    {}

float vec3::length() {
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

vec3 vec3::norm() {
    float len = this->length();
    return vec3(this->x /len, this->y /len, this->z /len);
}


vec3  operator+(const vec3& a,const vec3& b) {
    return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}


vec3 operator-(const vec3& a,const vec3& b) {
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}


vec3 operator*(float scalar,const vec3& a) {
    return vec3(scalar*a.x, scalar*a.y, scalar*a.z);
}


vec3 operator*(const vec3& a, float scalar) {
    return scalar * a;
}


std::ostream& operator<<(std::ostream& os, const vec3& a) {
    os << "x :" << a.x << " y :" << a.y << " z :" << a.z;
    return os;
}
/*
int main() {
    vec3 a = vec3(1,2,3);
    std::cout << a;
    vec3 b = a + a;
    std::cout << "\n" << b;
    vec3 unit = vec3(1.0f, 1.0f, 1.0f);
    std::cout << '\n' << unit.length() ;
    std::cout << '\n' << sqrt(3);
    vec3 norm = unit.norm();
    std::cout << unit.norm() ;
}
*/
