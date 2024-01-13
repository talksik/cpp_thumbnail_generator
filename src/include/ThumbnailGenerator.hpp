
#include <string>

class ThumbnailGenerator {
public:
  ThumbnailGenerator();
  // given a path to a video file, generate a thumbnail
  std::string generate_thumbnail(std::string path, int frame_number = 1);

  // reads and simply prints out information about the video frames
  void read_video_frames(std::string path);

  int get_duration_microseconds(std::string path);

private:
};
