CC=g++

aa:calculate.h calculate.cc main.cc
	$(CC) calculate.h calculate.cc main.cc -o aa

clean:
	sudo rm aa