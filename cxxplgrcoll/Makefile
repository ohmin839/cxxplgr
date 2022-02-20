.PHONY: clean
clean:
	test -d ./bin || mkdir ./bin
	rm -fR ./bin/*

bin/collector.o: include/cxxplgr/collector.hpp src/cxxplgr/collector.cpp
	g++ \
		-std=c++17 \
		-I./include -fpermissive \
		-c -o./bin/collector.o \
		./src/cxxplgr/collector.cpp

bin/sqlite3.o: include/cxxplgr/sqlite3.hpp src/cxxplgr/sqlite3.cpp
	g++ \
		-std=c++17 \
		-I./include -fpermissive \
		-c -o./bin/sqlite3.o \
		src/cxxplgr/sqlite3.cpp

bin/cxxplgrcoll: bin/collector.o bin/sqlite3.o src/cli.cpp
	g++ \
		-std=c++17 \
		-I./include -fpermissive \
		-o./bin/cxxplgrcoll \
		./src/cli.cpp ./bin/*.o \
		-lcxxplgr2 \
		-lsqlite3

.PHONY: build
build: bin/cxxplgrcoll

.PHONY: install
install: build
	test -z ${INSTALL_DIR} || cp ./bin/cxxplgrcoll ${INSTALL_DIR}/bin
