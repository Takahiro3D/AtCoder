#!/usr/bin/env python3
# from typing import *



# def solve(N: str, M: str, A: List[str], B: List[str], C: List[str]) -> Any:
def solve(N, M, A, B, C):
    pass  # TODO: edit here

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N, M = input().split()
    A = [None for _ in range(M)]
    B = [None for _ in range(M)]
    C = [None for _ in range(M)]
    for i in range(M):
        A[i], B[i], C[i] = input().split()
    ans = solve(N, M, A, B, C)
    print(ans)  # TODO: edit here

if __name__ == '__main__':
    main()