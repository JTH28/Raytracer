#include "iostream"
#include "math.h"
//#include "../include/vec3.h"

template<typename T>
class Vec3
{
public:
    // 3 most basic ways of initializing a vector
    Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
    Vec3(const T &xx) : x(xx), y(xx), z(xx) {}
    Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {}
    T x, y, z;

    T length(){
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }

    //This produces a normalized vector, meaning it has the same direction but unit length.
    Vec3 norm() {
        T len = this->length();
        return Vec3(this->x /len, this->y /len, this->z /len);
    }

    //Overloading the ostream to produce the vectors components.
    friend std::ostream & operator << (std::ostream &os, const Vec3 &a) {
        os << "x :" << a.x << " y :" << a.y << " z :" << a.z;
        return os;
    }

    //Some basic operator overloading for vector arithmetic.
    friend Vec3  operator+(const Vec3 &a,const Vec3 &b) {
        return Vec3(a.x + b.x, a.y + b.y, a.z + b.z);
    }

    friend Vec3 operator-(const Vec3& a,const Vec3& b) {
        return Vec3(a.x - b.x, a.y - b.y, a.z - b.z);
    }

    friend Vec3 operator*(T scalar,const Vec3 &a) {
        return Vec3(scalar * a.x, scalar * a.y, scalar * a.z);
    }

    friend Vec3 operator*(const Vec3 &a, T scalar) {
        return scalar * a;
    }
};

int main() {
    Vec3<int> a = Vec3<int>(1,2,3);
    std::cout << "a: " << a <<"\n";
    Vec3<float> b = Vec3<float>(3.0f,4.0f,5.0f);
    std::cout << "b.length(): " << b.length() << "\n";
    std::cout << "b.norm(): " << b.norm() << "\n";
    std::cout << "b.norm().length(): " << b.norm().length() << "\n";
    Vec3<int> c = a + a;
    std::cout << "c: " << c << "\n";
    Vec3<int> d = c - a;
    std::cout << "d: " << d << "\n";
    std::cout << "d * 5: " << d * 5 << "\n";
    Vec3<float> unit = Vec3<float>(1.0f, 1.0f, 1.0f);
    std::cout << "unit.length(): " << unit.length() << '\n';
    std::cout << "sqrt(3): " << sqrt(3) << '\n';
    Vec3<float> norm = unit.norm();
    std::cout << "unit.norm(): " << unit.norm() << '\n';
    std::cout << "unit.norm().length(): " << unit.norm().length() << '\n';
}
