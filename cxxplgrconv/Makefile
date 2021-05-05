.PHONY: init
init:
	test -d ./bin || mkdir ./bin

.PHONY: clean
clean:
	rm -fR ./bin/*

./bin/cxxplgrconv: ./src/cli.cpp
	g++  \
		-std=c++17 \
		-o./bin/cxxplgrconv \
		./src/cli.cpp \
		-L${HOME}/.local/lib -lcxxplgr1

.PHONY: build
build: ./bin/cxxplgrconv

.PHONY: install
install: build
	! test -d ${INSTALL_DIR}/bin || cp ./bin/cxxplgrconv ${INSTALL_DIR}/bin

