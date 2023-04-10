#!/bin/bash

gcc -c liball.a *.c
ar rc liball.a *.o
echo y | rm -I *.o
