#!/bin/bash

cmake -S . -B ./build && cmake --build ./build -j12 --config release
