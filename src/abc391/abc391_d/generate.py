#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N = random.randint(1, 1000)  # TODO: edit here
    X = [None for _ in range(N)]
    Y = [None for _ in range(N)]
    W = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(N):
        X[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        Y[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    Q = random.randint(1, 1000)  # TODO: edit here
    T = [None for _ in range(Q)]
    A = [None for _ in range(Q)]
    for i in range(Q):
        T[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        A[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N, W)
    for i in range(N):
        print(X[i], Y[i])
    print(Q)
    for i in range(Q):
        print(T[i], A[i])

if __name__ == "__main__":
    main()
