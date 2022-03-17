CC=clang
OBJ=out
SRC=main.c source2.c 
FLAGS=-std=c2x -Wall -O3

$(OBJ):$(SRC)
	@($(CC) main.c $(FLAGS) -o $(OBJ))
	@(echo "Program build successfully")
.PHONY: clean
clean:
	@(rm ./$(OBJ))
	@(echo "program build removed.")
