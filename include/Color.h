#pragma once

#include <cstdint>

#include "Geometry.h"

void write_color(ostream&, const Vector3D, const uint32_t);

Vector3D ray_color(const Ray&, const Geometry&, const uint32_t);