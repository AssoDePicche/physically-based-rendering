#include <cstdint>
#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

auto main(void) -> int {
  const std::string filename = "settings.json";

  if (!std::filesystem::exists(filename)) {
    std::cerr << std::format("{} not found\n", filename);
  }

  std::ifstream stream(filename);

  nlohmann::json json = nlohmann::json::parse(stream);

  const float aspect_ratio = json["aspect-ratio"];

  const uint64_t image_width = json["image-width"];

  uint64_t image_height = image_width / aspect_ratio;

  if (image_height < 1) {
    image_height = 1;
  }

  std::cout << std::format("P3\n{} {}\n255\n", image_width, image_height);

  for (uint64_t i = 0u; i < image_width; ++i) {
    for (uint64_t j = 0; j < image_height; ++j) {
      const uint16_t red = 255.999f * double(j) / (image_width - 1);

      const uint16_t green = 255.999f * double(i) / (image_height - 1);

      const uint16_t blue = 0;

      std::cout << std::format("{} {} {}\n", red, green, blue);
    }
  }
}
