#!/bin/bash

ROOT_DIR=$(dirname $0)/../
CONTEST_NAME=$1
CONTEST_DIR=$ROOT_DIR/src/$CONTEST_NAME

mkdir $CONTEST_DIR
cd $CONTEST_DIR

# Login is required for realtime contest
oj login https://atcoder.jp/
oj-prepare https://atcoder.jp/contests/$CONTEST_NAME > prepare.log
