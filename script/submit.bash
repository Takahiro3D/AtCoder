#!/bin/bash

SRC_PATH=$1
PROBLEM_PATH=$(dirname $SRC_PATH)
PROBLEM_NAME=$(basename $PROBLEM_PATH)
CONTEST_NAME=$(basename $(dirname $PROBLEM_PATH))

oj login https://atcoder.jp/

if [[ $SRC_PATH == *.py ]]; then
  # Python file
  oj submit --language 5055 https://atcoder.jp/contests/$CONTEST_NAME/tasks/$PROBLEM_NAME $SRC_PATH
elif [[ $SRC_PATH == *.cpp ]]; then
  # C++ file
  oj submit https://atcoder.jp/contests/$CONTEST_NAME/tasks/$PROBLEM_NAME $SRC_PATH
fi
