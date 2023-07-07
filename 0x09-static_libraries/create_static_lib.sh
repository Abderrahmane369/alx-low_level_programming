#!bin/bash

ar rcs liball.a
ar rcs liball.a *.o
nm liball.a
