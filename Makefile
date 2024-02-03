all: 
	g++ -std=c++11 -c src/**/*.cpp -o bin/exe
	rm -rf *.o

clean:
	rm -rf *.o bin/*