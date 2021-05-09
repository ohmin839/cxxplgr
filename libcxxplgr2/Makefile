.PHONY: clean
clean:
	test -d ./bin || mkdir ./bin
	rm -fR ./bin/*

bin/accent.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/secondary/accent.cpp \
		-c -o./bin/accent.o

bin/breath.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/secondary/breath.cpp \
		-c -o./bin/breath.o

bin/case.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/secondary/case.cpp \
		-c -o./bin/case.o

bin/dialesis.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/secondary/dialesis.cpp \
		-c -o./bin/dialesis.o

bin/iota.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		./src/cxxplgr/secondary/iota.cpp \
		-c -o./bin/iota.o

bin/utf8util.o:
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		-fPIC \
		./src/cxxplgr/secondary/utf8util.cpp \
		-c -o./bin/utf8util.o

bin/secondary.o: bin/accent.o bin/breath.o bin/case.o bin/dialesis.o bin/iota.o bin/utf8util.o
	g++ \
		-std=c++17 \
		-I./include \
		-fPIC \
		-c -o./bin/secondary.o \
		./src/cxxplgr/secondary.cpp

bin/test_split_into_words: test/test_split_into_words.cpp bin/secondary.o include/cxxplgr/secondary/grammar.hpp include/cxxplgr/secondary/action.hpp
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_split_into_words.cpp \
		-o./bin/test_split_into_words

bin/test_without_accent: test/test_without_accent.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_without_accent.cpp \
		-o./bin/test_without_accent

bin/test_without_breath: test/test_without_breath.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_without_breath.cpp \
		-o./bin/test_without_breath

bin/test_to_lower: test/test_to_lower.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_to_lower.cpp \
		-o./bin/test_to_lower

bin/test_to_upper: test/test_to_upper.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_to_upper.cpp \
		-o./bin/test_to_upper

bin/test_without_dialesis: test/test_without_dialesis.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_without_dialesis.cpp \
		-o./bin/test_without_dialesis

bin/test_without_iota_subscriptum: test/test_without_iota_subscriptum.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_without_iota_subscriptum.cpp \
		-o./bin/test_without_iota_subscriptum

bin/test_to_sortable: test/test_to_sortable.cpp bin/secondary.o
	g++ \
		-std=c++17 \
		-I./include \
		-fpermissive \
		./bin/accent.o \
		./bin/breath.o \
		./bin/case.o \
		./bin/dialesis.o \
		./bin/iota.o \
		./bin/utf8util.o \
		./bin/secondary.o \
		./test/test_to_sortable.cpp \
		-o./bin/test_to_sortable

.PHONY: test
test: bin/test_split_into_words bin/test_without_accent bin/test_without_breath bin/test_to_lower bin/test_to_upper bin/test_without_dialesis bin/test_without_iota_subscriptum bin/test_to_sortable
	./bin/test_split_into_words
	./bin/test_without_accent
	./bin/test_without_breath
	./bin/test_to_lower
	./bin/test_to_upper
	./bin/test_without_dialesis
	./bin/test_without_iota_subscriptum
	./bin/test_to_sortable

bin/libcxxplgr2.so: bin/secondary.o
	g++ -shared -fPIC -o./bin/libcxxplgr2.so ./bin/*.o

.PHONY: build
build: bin/libcxxplgr2.so

.PHONY: install
install: include/cxxplgr/secondary.hpp bin/libcxxplgr2.so
	test -z ${INSTALL_DIR} || test -d ${INSTALL_DIR}/include/cxxplgr || mkdir ${INSTALL_DIR}/include/cxxplgr
	cp ./bin/libcxxplgr2.so ${INSTALL_DIR}/lib
	cp ./include/cxxplgr/secondary.hpp ${INSTALL_DIR}/include/cxxplgr/

