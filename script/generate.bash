#!/bin/bash

FILE_DIR=$1
GEN_COUNT=$2

cd $FILE_DIR
oj generate-input "python3 generate.py" $GEN_COUNT
