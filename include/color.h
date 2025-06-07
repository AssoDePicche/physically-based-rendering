#pragma once

#include <cstdint>

#include "geometry.h"

void write_color(std::ostream&, const Vector3D, const uint32_t);

Vector3D ray_color(const Ray&, const Geometry&, const uint32_t);
