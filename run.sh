#!/bin/bash

set -eo pipefail

rm -rf build/
mkdir -p build/
cd build

# Build the project
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..

make

cp ./compile_commands.json ../

cp ./ThumbnailGenerator ../

cd ..

./ThumbnailGenerator sample.mp4
