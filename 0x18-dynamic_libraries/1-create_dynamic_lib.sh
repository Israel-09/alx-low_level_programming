#!/usr/bin/bash
gcc -Wall -c -fPIC *.c 
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
