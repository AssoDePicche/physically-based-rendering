#pragma once

#include "Geometry.h"

class Sphere : public Geometry {
 public:
  Sphere(void) = default;

  Sphere(const Vector3D, const float, shared_ptr<Material>);

  virtual bool collide(const Ray&, const float, const float,
                       Collision&) const override;

 private:
  Vector3D _center;
  float _radius;
  shared_ptr<Material> _material;
};