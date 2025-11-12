OUT := main

SCR := $(wildcard src/*cpp src/**/*.cpp)

all:
	g++ $(SCR) -o $(OUT)
	./$(OUT)