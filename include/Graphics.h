#pragma once

#include <algorithm>
#include <cmath>
#include <limits>
#include <memory>

#include "Camera.h"
#include "Color.h"
#include "Dielectric.h"
#include "Geometry.h"
#include "Lambertian.h"
#include "Material.h"
#include "Metal.h"
#include "Ray.h"
#include "Sphere.h"
#include "Vector3D.h"

using std::clamp;
using std::make_shared;
using std::pow;
using std::shared_ptr;
using std::sqrt;

float degrees_to_radians(const float);

float random_number(const float = 0.0f, const float = 1.0f);