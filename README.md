# AtCoder
Competitive programming environment for AtCoder

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/Takahiro3D/AtCoder)

## Supported language

- C++

## Usage

All work is registered in VSCode tasks.  
The task runs the following packages.
- [atcoder-tools](https://github.com/kyuridenamida/atcoder-tools)

Below is a flowchart of how it is used in AtCoder programming contests.

### 1. Prepare contest

> [!INFO]
> ABC is not allowed to read problem statement.  
> It will be not generated io part in ABC.

Run task `AtCoder: Prepare contest`.  
Enter the contest name in the dialogue.

(one time only)
Enter AtCoder username and password. 

Results of task execution can be ignored.

### 2. Solve question

The question directory is located in the following path.
`src/practice/practice_1`

Edit `main.cpp` or `main.py` in the language you want to use.

### 3. Check test case

Run task `AtCoder: Check test case` with the source code that solved the problem open.  

### 4. Submit code

Run task `AtCoder: Submit code` with the source code that solved the problem open.  

## Debug

### Create manual test case

You can create test case manually.
Put the test input `in_*.txt` and output `out_*.txt` in the question directory.
The test is executed when task check test case is executed.

### How to launch debugger (Only C++ supported)

Press `F5` key or `C/C++: build and debug` in `Run and Debug`.
Enter the test case name for input stored in the `test` of question directory in dialogue.

## License

MIT License
