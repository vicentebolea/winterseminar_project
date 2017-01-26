#!/bin/sh

libtoolize -cq
aclocal -I ./ --install           # Generate aclocal
autoconf                          # Generate configure script 
autoheader                        # Generate config.h
automake --add-missing --copy     # Generate Makefile.in and other scripts 
