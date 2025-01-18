#!/bin/bash

SRC_PATH=$1
PROBLEM_PATH=$(dirname $SRC_PATH)

cd $PROBLEM_PATH
atcoder-tools submit -uf
