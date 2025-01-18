#include <iostream>

#include "Graphics.h"

auto main(void) -> int {
  const auto aspect_ratio = 16.0f / 9.0f;

  const auto image_width = 256u;

  const auto image_height =
      int(image_width / aspect_ratio) < 1 ? 1 : int(image_width / aspect_ratio);

  const auto viewport_height = 2.0f;

  const auto viewport_width =
      viewport_height * (double(image_width) / image_height);

  const auto focal_length = 1.0f;

  const auto camera_center = Vector3D(0, 0, 0);

  const auto viewport_u = Vector3D(viewport_width, 0, 0);

  const auto viewport_v = Vector3D(0, -viewport_width, 0);

  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

  for (uint16_t i = 0u; i < image_width; ++i) {
    for (uint16_t j = 0; j < image_height; ++j) {
      const auto red = int(255.999f * double(j) / (image_width - 1));

      const auto green = int(255.999f * double(i) / (image_height - 1));

      const auto blue = 0.0f;

      std::cout << red << ' ' << green << ' ' << blue << '\n';
    }
  }
}
