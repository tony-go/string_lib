build:
ifeq (,$(wildcard ./dist))
	mkdir dist
endif
	clang ./src/main.c ./src/string.c -o ./dist/string_lib

use:
ifeq (,$(wildcard ./dist))
	mkdir dist
endif
	make build && ./dist/string_lib