WFDB_HOME=C:/MinGW/msys/1.0/local

all: release
	gcc -o Release/Test.exe -Dwfdb_PROTO -I$(WFDB_HOME)/include -lwfdb-10.5 -L$(WFDB_HOME)/bin TestWfdb.c
	
release:
	if [ -e ./Release ]; \
	  then echo .;\
	  else mkdir ./Release; fi
	 