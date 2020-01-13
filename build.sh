#!/bin/bash

(
  files=()
  cd src
  for f in $(find . -regex ".*\.cpp")
  do 
    if [ $f != ./main.cpp ]; then
      files+=("${f}")
    fi
  done
  g++ -Os -s main.cpp -o ../bin/text-adventure.o ${files[*]}
)
