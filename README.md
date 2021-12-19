<h1 align="center">string_lib</h1>
<p align="center">Let's implement the C string library</h1>

## API

### str_len

Return the length of the string.

```c
size_t str_len(const char *s);
```

### str_cmp

Return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.

```c
int str_cmp(const char *s1, const char *s2);
```

## Requirement

* C compiler of your choice
* make

## Commands

- Run program:
```bash
$ make use
```

- Build sources only:
```bash
$ make build
```

## Links

* https://github.com/openbsd/src/blob/master/include/string.h
* https://linux.die.net/man/3/string
* https://github.com/capitnflam/6502/blob/master/CMakeLists.txt
* https://github.com/capitnflam/6502/blob/master/lib6502/CMakeLists.txt
