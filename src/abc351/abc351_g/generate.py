#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = random.randint(1, 10)  # TODO: edit here
    c = [None for _ in range(a)]
    d = [None for _ in range(a)]
    b = random.randint(1, 10)  # TODO: edit here
    e = [None for _ in range(b)]
    f = [None for _ in range(b)]
    for i in range(a):
        c[i] = random.randint(1, 10)  # TODO: edit here
    for i in range(a):
        d[i] = random.randint(1, 10)  # TODO: edit here
    for i in range(b):
        e[i] = random.randint(1, 10)  # TODO: edit here
        f[i] = random.randint(1, 10)  # TODO: edit here
    print(a, b)
    print(*[c[i] for i in range(a)])
    print(*[d[i] for i in range(a)])
    for i in range(b):
        print(e[i], f[i])

if __name__ == "__main__":
    main()
