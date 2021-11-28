test: build
	ctest --test-dir build

usage: build
	build/arraylist_usage

build: arraylist.cpp arraylist_usage.cpp arraylist_test.cpp
	cmake -S . -B build
	cmake --build build

clean:
	rm -r build
