test: build
	ctest --test-dir build

usage: build
	build/linkedlist_usage

build: linkedlist.cpp linkedlist_usage.cpp linkedlist_test.cpp
	cmake -S . -B build
	cmake --build build

clean:
	rm -r build
