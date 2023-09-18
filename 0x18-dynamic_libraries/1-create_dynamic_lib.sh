#!/bin/bash
/*gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc*/

gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
