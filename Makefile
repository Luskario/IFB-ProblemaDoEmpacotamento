TARGET = ProblemaDoEmpacotamento
CFLAGS = -Wall
CC = g++
LDFLAGS = -lm

SRC = $(wildcard ./src/*.cpp)
OBJ = $(SRC:.cpp =.o)

main: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c $<


.PHONY: clean

clean:
	rm main $(OBJ)