#!/bin/bash

ROOT_DIR=$(dirname $0)/../
CONTEST_NAME=$1

cd $ROOT_DIR
atcoder-tools gen $CONTEST_NAME --template ./config/atcoder-tools/template.cpp --workspace ./src > ./prepare.log
