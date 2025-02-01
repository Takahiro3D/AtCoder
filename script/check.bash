#!/bin/bash

PROGRAM_PATH=$1
PROBLEM_PATH=$(dirname $PROGRAM_PATH)

if [[ $PROGRAM_PATH == *.py ]]; then
  # Python file
  oj test -S -N -c "python3 ${PROGRAM_PATH}" -d ${PROBLEM_PATH}/test/
else
  # Compiled file
  oj test -S -N -c "${PROGRAM_PATH}" -d ${PROBLEM_PATH}/test/
fi

