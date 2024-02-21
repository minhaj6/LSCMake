#! /bin/sh

cmake -DGLFW_BUILD_DOCS=OFF -S . -B build
cd build
sudo make install