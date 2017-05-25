#include "../include/ray.h"

ray::ray(point pos, vec3 dir, float t_min, float t_max)
    :pos{pos},dir{dir},t_min{t_min},t_max{t_max}
    {}

int main() {
    point p = point(0.0f, 0.0f, 0.0f);
    vec3 dir = vec3(1.0f,0.0f,0.0f);
    ray r = ray(p,dir,0.0f,10.0f);
}
