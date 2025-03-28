CXX = g++
CXXFLAGS = -std=c++17 -Wall

app: Main.cpp Math.cpp
	$(CXX) $(CXXFLAGS) Main.cpp Math.cpp -o app

test: Test.cpp Math.cpp
	$(CXX) $(CXXFLAGS) Test.cpp Math.cpp -o test

run-tests: test
	./test

clean:
	rm -f app test
