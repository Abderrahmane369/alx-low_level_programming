#!/bin/bash

gcc -wall -pedantic -werro -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.c
