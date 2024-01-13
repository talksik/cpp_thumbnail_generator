
#include "include/ThumbnailGenerator.hpp"
#include <iostream>
#include <libavutil/mem.h>
#include <memory>

#include <filesystem>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << "Hello, World!" << std::endl;

  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
    return 1;
  }

  std::string input_file = argv[1];
  std::filesystem::path current_path = std::filesystem::current_path();
  std::cout << "current path: " << current_path << std::endl;
  std::cout << "input file: " << input_file << std::endl;
  std::string input_file_path = current_path.string() + "/" + input_file;
  std::cout << "input file path: " << input_file_path << std::endl;

  std::unique_ptr<ThumbnailGenerator> thumbnailGenerator =
      std::make_unique<ThumbnailGenerator>();

  int duration = thumbnailGenerator->get_duration_microseconds(input_file_path);
  std::cout << "duration: " << duration << std::endl;

  // thumbnailGenerator->read_video_frames(input_file_path);

  std::string thumbnail_path =
      thumbnailGenerator->generate_thumbnail(input_file_path);
  std::cout << "thumbnail path: " << thumbnail_path << std::endl;

  return 0;
}
