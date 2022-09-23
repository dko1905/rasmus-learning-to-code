.POSIX:

FILES = 01-hello.out 02-shape.out
JFILES = $(FILES:.out=.c.json)

include config.mk

all: $(FILES)

.cpp.out:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(FILES)

cleanAll: clean
	rm -f compile_commands.json $(JFILES)

clangd:
	find . -type f -iname "*.cxx" -exec sh -c 'clang ./$$0 $(CFLAGS) -MJ ./$$0.json -o /dev/null' {} \;
	sed -e '1s/^/[\n/' -e '$$s/,$$/\n]/' *.cxx.json > compile_commands.json

.PHONY: clean cleanAll clangd
