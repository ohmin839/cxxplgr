.PHONY: clean
clean:
	test -d ./bin || mkdir ./bin
	rm -fR ./bin/*

bin/char_mapping.o:
	g++ \
 		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/primary/char_mapping.cpp \
		-c -o./bin/char_mapping.o

bin/primary.o: bin/char_mapping.o
	g++ \
        -std=c++17 \
        -I./include \
		-fPIC \
		./src/cxxplgr/primary.cpp \
		-c -o./bin/primary.o

bin/test_to_polytonic: bin/primary.o test/test_to_polytonic.cpp
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./bin/primary.o \
		./src/cxxplgr/primary/char_mapping.cpp \
		./test/test_to_polytonic.cpp \
		-o./bin/test_to_polytonic

.PHONY: test
test: bin/test_to_polytonic
	./bin/test_to_polytonic

bin/libcxxplgr1.so: bin/primary.o
	g++ -shared -fPIC -o./bin/libcxxplgr1.so ./bin/*.o

.PHONY: build
build: bin/libcxxplgr1.so

.PHONY: install
install: include/cxxplgr/primary.hpp bin/libcxxplgr1.so
	test -z ${INSTALL_DIR} || test -d ${INSTALL_DIR}/include/cxxplgr || mkdir ${INSTALL_DIR}/include/cxxplgr
	cp ./bin/libcxxplgr1.so ${INSTALL_DIR}/lib
	cp ./include/cxxplgr/primary.hpp ${INSTALL_DIR}/include/cxxplgr/
