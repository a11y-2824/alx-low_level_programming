#!/bin/bash
gcc -c -fPIC gm.c
gcc -shared -o liball.so *.o
export LD_PRELOAD=~/liball.so
