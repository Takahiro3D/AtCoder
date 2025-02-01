#!/bin/bash

ROOT_DIR=$(dirname $0)/../
CONTEST_NAME=$1
CONTEST_DIR=$ROOT_DIR/src/$CONTEST_NAME

mkdir $CONTEST_DIR
cd $CONTEST_DIR

echo "[Warning] ABC is not allowed to read problem statement. " >&2

echo -n "Do you want to proceed? (yes/no): "
read answer

if [[ "$answer" == "yes" ]]; then
    echo "Proceeding..."
    # Login is required for realtime contest
    oj login https://atcoder.jp/
    oj-prepare https://atcoder.jp/contests/$CONTEST_NAME > prepare.log
elif [[ "$answer" == "no" ]]; then
    echo "Operation canceled."
else
    echo "Invalid input. Please enter 'yes' or 'no'."
fi
