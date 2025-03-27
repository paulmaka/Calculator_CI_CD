CXX = g++
CXXFLAGS = -std=c++17 -Wall

app: main.cpp math.cpp
	$(CXX) $(CXXFLAGS) main.cpp math.cpp -o app

test: test.cpp math.cpp
	$(CXX) $(CXXFLAGS) test.cpp math.cpp -o test

run-tests: test
	./test

clean:
	rm -f app test
