.PHONY: clean
clean:
	test -d bin || mkdir bin
	rm -fR bin/*


bin/cxxplgrconv: src/converter/cli.cpp
	g++  \
		-std=c++17 \
		-I../lib/include \
		-obin/cxxplgrconv \
		src/converter/cli.cpp \
		../lib/bin/libcxxplgr.so


bin/collector.o: include/cxxplgr/collector.hpp src/collector/cxxplgr/collector.cpp
	g++ \
		-std=c++17 \
		-I./include -I../lib/include \
		-fpermissive \
		-c -obin/collector.o \
		src/collector/cxxplgr/collector.cpp

bin/sqlite3.o: include/cxxplgr/sqlite3.hpp src/collector/cxxplgr/sqlite3.cpp
	g++ \
		-std=c++17 \
		-I./include -I../lib/include \
		-fpermissive \
		-c -obin/sqlite3.o \
		src/collector/cxxplgr/sqlite3.cpp

bin/cxxplgrcoll: bin/collector.o bin/sqlite3.o src/collector/cli.cpp
	g++ \
		-std=c++17 \
		-I./include -I../lib/include \
		-fpermissive \
		-obin/cxxplgrcoll \
		src/collector/cli.cpp bin/*.o \
		../lib/bin/libcxxplgr.so \
		-lsqlite3


.PHONY: build
build: bin/cxxplgrconv bin/cxxplgrcoll

.PHONY: install
install: build
	test -z ${INSTALL_DIR} || cp bin/cxxplgrconv ${INSTALL_DIR}/bin
	test -z ${INSTALL_DIR} || cp bin/cxxplgrcoll ${INSTALL_DIR}/bin

