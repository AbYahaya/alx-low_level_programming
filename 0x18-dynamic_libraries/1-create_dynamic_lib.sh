#!/bin/bash

myC_fl=$(ls *.c)
gcc -shared -fPIC -o liball.so $myC_fl
