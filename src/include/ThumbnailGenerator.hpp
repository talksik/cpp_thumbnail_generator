
#include <string>

class ThumbnailGenerator {
public:
  ThumbnailGenerator();
  // given a path to a video file, generate a thumbnail
  std::string generateThumbnail(std::string path);

  // reads and simply prints out information about the video frames
  void readVideoFrames(std::string path);
private:
};
