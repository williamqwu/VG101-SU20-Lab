# To-do

- WSL (chr)
    - 熟悉WSL的完整安装步骤
    - 疑难问题
        - 比如微软商店打不开，下不了？
- Shell (ktt)
    - 有一个基础的文件夹用来展示大多数操作
- gcc (shx)
    - 准备一份多文件编译的样例
    - 用到编译宏的样例
    - 优化选项速度比较的样例
- tricks in C (wqh)
    - 代码都整出来，跟着试一遍就行





# From MATLAB to C (continued)

**Matlab**

- Excellent at **numerical calculations and plotting**
  - useful in many ECE program courses, like Ve215, Ve216, Ve401, ...
- Many useful toolboxes
  - not covered in Vg101
- Widely used in **academia**

But...

- Commercial and expensive
- **Task-oriented**, not for general purpose
  - no one will write an operating system using MATLAB


**C**

- Free and open source
- **Procedure-oriented**
- Excellent at system programming
- Capable of producing programs with high efficiency -->

<!-- Besides, there exists huge difference between how MATLAB scripts are interpreted and how C programs are compiled.

Matlab is a software integrated with GUI. When we click run button to run scripts and press `Enter` to execute commands, the the interface would invoke the back-end interpreter to run your code and display the result of the interpreter to you. When you are writing code, the interface invoke the back-end linter to check the syntax of your code and display the result of the linter at the warning bar on the right of the editor.

The key component for C development is the compiler. It compiles your codes to executable assembly code and stores the assembly code on your file system. You would not need a software interpreter to run the assembly code, since the hardware on your system can directly interprets assembly code.







---

| Category              | Exercise title                    | Tag             |
| --------------------- | --------------------------------- | --------------- |
| basic syntax exercise | 🦖Hello World!                     | I/O             |
| basic syntax exercise | ASCII                             | I/O, char       |
| basic syntax exercise | Uppercase Converter               | I/O, char       |
| basic syntax exercise | Quotation Mark                    | I/O             |
| basic syntax exercise | A+B Problem                       | I/O             |
| basic syntax exercise | Variable Swap                     | I/O, assignment |
| basic syntax exercise | Triangle                          | condition       |
| basic syntax exercise | Days Matter                       | condition       |
| basic syntax exercise | Maximal Number                    | loop            |
| basic syntax exercise | Fibonacci Again                   | loop            |
| basic syntax exercise | Number Pyramid                    | I/O, loop       |
| tricks                | Logical Expression in C           | operator        |
| tricks                | "Return Value" of Assignemnt      | return value    |
| tricks                | Shorthand Operator                | operator        |
| tricks                | Increment and Decrement Operators | operator        |
| tricks                | Short Circuit Operator            | operator        |
| tricks                | Variable Swap II                  | bit operator    |
| tricks                | Mechanism of FOR                  | loop            |
| tricks                | Naughty Switch                    | switch          |
| practical exercise    | Largest Number                    | loop            |
| practical exercise    | Palindromic Prime                 |                 |
