#!/bin/bash

PROGRAM_PATH=$1
PROBLEM_PATH=$(dirname $PROGRAM_PATH)

cd $PROBLEM_PATH
atcoder-tools test
