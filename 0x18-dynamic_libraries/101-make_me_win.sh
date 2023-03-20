#!/bin/bash
gcc -c -fPIC gm.c
gcc *.o -shared -o liball.so 
