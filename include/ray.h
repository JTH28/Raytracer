#pragma once
#include "vec3.h"
#include "point.h"

class ray {
public:
    point pos;
    vec3 dir;
    float t_min, t_max;
    ray(point pos, vec3 dir, float t_min, float t_max);
}
