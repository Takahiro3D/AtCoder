#!/usr/bin/env python3
# from typing import *



# def solve(a: int, b: int, c: int, d: List[int], e: List[List[int]], f: List[str]) -> int:
def solve(a, b, c, d, e, f):
    pass  # TODO: edit here

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    a = int(next(tokens))
    b = int(next(tokens))
    c = int(next(tokens))
    d = [None for _ in range(b)]
    e = [[None for _ in range(d_i)] for _ in range(b)]
    f = [None for _ in range(b)]
    for i in range(b):
        d[i] = int(next(tokens))
        for j in range(d_i):
            e[i][j] = int(next(tokens))
        f[i] = next(tokens)
    assert next(tokens, None) is None
    a1 = solve(a, b, c, d, e, f)
    print(a1)

if __name__ == '__main__':
    main()