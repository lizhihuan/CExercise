
make-all:	all

all: Exercise.c Exercise.h
	gcc -o Exercise.exe Exercise.c -L C:/MinGW/msys/1.0/bin -lwfdb

	
#±‡“Î≥…∂ØÃ¨¡¥Ω”ø‚
	gcc -o Exercise.dll -shared Exercise.c
	gcc -o e3.exe Exercise2c -lExercise
	
# TestWfdb.c
gcc -o TestWfdb.exe -Dwfdb_PROTO TestWfdb.c -lwfdb.10-5 -L.