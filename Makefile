
test_Vectors.out : ./src/*.c ./tests/*.c
	gcc ./src/*.c ./tests/*.c -o test_Vectors.out
