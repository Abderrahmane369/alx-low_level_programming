#!/bin/bash
gcc -Wall -Wedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
