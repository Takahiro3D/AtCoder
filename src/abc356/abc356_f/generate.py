#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = random.randint(1, 1000)  # TODO: edit here
    b = [None for _ in range(a)]
    c = [None for _ in range(a)]
    for i in range(a):
        b[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        c[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    d = random.randint(1, 10 ** 9)  # TODO: edit here
    print(a, end=' ')
    for i in range(a):
        print(b[i])
        print(c[i], end=' ')
    print(d)

if __name__ == "__main__":
    main()
