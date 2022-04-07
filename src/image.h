#pragma once

#include "math.h"

struct Image {
    int width;
    int height;
    float *data;

    Image(int width, int height);
    Image(const char *filename);
    void save(const char *filename);

    void set_pixel(int i, int j, Vec3 const& color);
    Vec3 pixel(int i, int j);
};
