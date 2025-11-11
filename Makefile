SCR := $(wildcard src/*cpp src/**/*.cpp)
OUT := main
all:
	g++ $(SCR) -o $(OUT)
	./$(OUT)