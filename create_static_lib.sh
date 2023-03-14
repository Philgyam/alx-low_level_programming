#!/bin/bash
gcc -Wall -pedantic -Werror -Wextrs -c *.c
ar -rc liball.a *.a
ranlib liball.a
