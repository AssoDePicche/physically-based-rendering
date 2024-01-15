INCLUDE=./include
SOURCE=./src

CC = g++
CFLAGS = -I $(INCLUDE) -std=c++20 -Wall -Wextra -Wpedantic -Wcast-align -g -O3

SRCS = $(wildcard $(SOURCE)/*.cpp)

OBJ = $(patsubst $(SOURCE)/.cpp, %.o, $(SRCS))

raytracing: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: $(SOURCE)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

format:
	clang-format -i --style=Google --sort-includes --verbose $(INCLUDE)/* $(SOURCE)/*

clean:
	rm raytracing

.PHONY: format

.PHONY: clean
