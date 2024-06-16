#!/bin/bash

ROOT_DIR=$(dirname $0)/../
CONTEST_NAME=$1

cd $ROOT_DIR
atcoder-tools gen $CONTEST_NAME --workspace ./src > prepare.log
