.POSIX:

FILES = 01-hello.out 02-io-fread-cars.out 02b-io-getch.out \
	03-io-argv.out 04-arrays.out 05-io-readline.out
JFILES = $(FILES:.out=.c.json)

include config.mk

all: $(FILES)

.c.out:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(FILES)

cleanAll: clean
	rm -f compile_commands.json $(JFILES)

clangd:
	find . -type f -iname "*.c" -exec sh -c 'clang ./$$0 $(CFLAGS) -MJ ./$$0.json -o /dev/null' {} \;
	sed -e '1s/^/[\n/' -e '$$s/,$$/\n]/' *.c.json > compile_commands.json

.PHONY: clean cleanAll clangd
