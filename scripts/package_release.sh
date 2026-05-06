#!/usr/bin/env bash
set -euo pipefail

cmake -S . -B _build -DCMAKE_BUILD_TYPE=Release
cmake --build _build
(cd _build && cpack -G TGZ)

echo "Release artifacts are in _build/"
