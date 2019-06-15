#!/bin/sh
# add google test as a submodule

git init .
git submodule add  https://github.com/google/googletest lib/googletest
git submodule update --init --recursive

