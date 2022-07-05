#!/bin/bash

make
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ausgabe
make clean