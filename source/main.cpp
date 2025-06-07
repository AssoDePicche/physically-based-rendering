#include <cstdint>
#include <format>
#include <iostream>

auto main(void) -> int {
  const auto aspect_ratio = 16.0f / 9.0f;

  const auto image_width = 256u;

  int image_height = image_width / aspect_ratio;

  if (image_height < 1) {
    image_height = 1;
  }

  std::cout << std::format("P3\n{} {}\n255\n", image_width, image_height);

  for (uint16_t i = 0u; i < image_width; ++i) {
    for (uint16_t j = 0; j < image_height; ++j) {
      const int red = 255.999f * double(j) / (image_width - 1);

      const int green = 255.999f * double(i) / (image_height - 1);

      const int blue = 0;

      std::cout << std::format("{} {} {}\n", red, green, blue);
    }
  }
}
