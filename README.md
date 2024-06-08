# AtCoder
Competitive programming environment for AtCoder

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/Takahiro3D/AtCoder)

## Supported language

- C++
- Python (maybe)

## Usage

All work is registered in VSCode tasks.  
The task runs the following packages.
- [online-judge-tools](https://github.com/online-judge-tools/oj)
- [online-judge-template-generator](https://github.com/online-judge-tools/template-generator)

Below is a flowchart of how it is used in AtCoder programming contests.

### 1. Prepare contest

:::note warn
ABC is not allowed to read problem statement.
Do not use this script in ABC.
:::

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

Run task `AtCoder: Check test case (C++)` or `AtCoder: Check test case (Python)` with the source code that solved the problem open.  

### 4. Submit code

Run task `AtCoder: Submit code` with the source code that solved the problem open.  

## Debug

### Create manual test case

You can create test case manually.
Put the test input and output in `test` in the question directory.
The test is executed when task check test case is executed.

### Generate random input test case

You can generate random input test cases with `generator.py`.
Run task `AtCoder: Generate test` with `generetor.py` open.
Enter the number of generation random test generation.
The test is executed when task check test case is executed.

### How to launch debugger (Only C++ supported)

Press `F5` key or `C/C++: build and debug` in `Run and Debug`.
Enter the test case name for input stored in the `test` of question directory in dialogue.

## License

MIT License
