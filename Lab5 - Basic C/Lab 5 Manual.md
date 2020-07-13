<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Manual</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 5</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:13px;line-height:16px;font-family: 'Courier New', Courier, monospace;font-weight:80;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Haoxuan SHAN<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:20px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Table of Contents</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:20px;line-height:26px;font-size:13px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• MISC: WSL<br>• MISC: Shell<br>• Getting Start with C <br>• Tricks in C</div>
</div>



# Workflow

|      Content                      | Approx. Time   |
| :-----------------:               | :----:         |
| **MISC: WSL** *(for Windows user only)* |  20 mins      |
| **MISC: Shell**                   | 25 mins        |
| **Compile C Program**             | 20 mins   |
| Break                             | 10 mins        |
| **Warm-up: Basic Syntax Exercise** |  25 mins      |
| **Seminar: Tricks in C**     |  20 mins       |
| Break                             | 10 mins        |
| **Exercise**                 |  50 mins       |




# Command Line Interface (Shell)

Computers these days have a variety of interfaces for giving them commands; fanciful graphical user interfaces, voice interfaces, and even AR/VR are everywhere. These are great for 80% of use-cases, but they are often fundamentally restricted in what they allow you to do — you cannot press a button that isn’t there or give a voice command that hasn’t been programmed. To take full advantage of the tools your computer provides, we have to go old-school and drop down to a textual interface: The Shell.

Nearly all platforms you can get your hand on has a shell in one form or another, and many of them have several shells for you to choose from. While they may vary in the details, at their core they are all roughly the same: they allow you to run programs, give them input, and inspect their output in a semi-structured way.

## Find a Shell
![](https://viking_education.s3.amazonaws.com/web_development/prep_basics/terminal_icon_in_dock.png)
- Mac User
    - Find the terminal icon in your applications dock at the bottom of your screen and click it.
    - Type `CMD` + `SPACE` or click the magnifying glass in your top right corner to open up the "Spotlight" application and then just type "Terminal". It should be the first result.
    

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_5de72c8a562d87a7834cbf6a24a895bb.png)

- Windows User
    - Open the "Command Prompt" or "Git Bash" by searching in the Windows Search Bar.
    - Input the shell you'd like to use (including `cmd`, `wsl`, or `powershell`) in the address bar and press `Enter` to open a terminal in the current folder.
- Linux User
    - I believe you can find your way :D.

When you launch your terminal, you will see a prompt that often looks like this:

```shell
$ 
```

or

```shell
> 
```

## First Command

Type in `whoami` and press `Enter` to get your username.

Now we will only focus on Unix Shell. For Windows Command Prompt users, please refer to [Intro to command line](https://tutorial.djangogirls.org/en/intro_to_command_line/) or the appendix to look up the equivalent commands.

## Useful Shell Command

- `pwd`: <u>p</u>rint <u>w</u>orking <u>d</u>irectory.
- `cd`: <u>c</u>hange <u>d</u>irectory.
    - For example, `cd ../` brings you to your parent directory.
- `ls`: <u>l</u>i<u>s</u>t files and folders under a directory.
- `mkdir`: <u>m</u>a<u>k</u>e <u>dir</u>ectory.
- `rm`: <u>r</u>e<u>m</u>ove.
    - This is an extremely dangerous command. See the famous [bumblebee accident](<https://github.com/MrMEEE/bumblebee-Old-and-abbandoned/issues/123>).
- `cp`: <u>c</u>o<u>p</u>y.
    - Takes 2 arguments: `source` and `dest`. 
    - Be very careful if both source and destination are existing folders.
    - `-r` Copy files/folders recursively. Folders requires this option.
- `mv`: <u>m</u>o<u>v</u>e.
    - Takes 2 arguments: `source` and `dest`. 
    - Be very careful if both source and destination are existing folders.
    - Can be used for rename by making `source` = `dest`.
- `cat`: con<u>cat</u>enate.
    - Takes multiple arguments and print their content one by one to `stdout`.
- `echo`: prints its arguments to `stdout`.
- `man [command]`: get help for a command.


## Compile C Program

It is well-known that C is a compiled language, which must be compiled is before running. So in this lab section, we will guide you how to compile a C program smartly in command line.

### Compile C with gcc

- `gcc`: GNU project C and C++ compiler
    - `infile`: pass in the file to be compiled.
        - `gcc test.cpp` will generate an executable called "a.out".
    - `-std=standard`: specify the standard you are using.
        - `-std=c11` means the program is compiled under standard `c11`.
    - `-o outfile`: specify the name of the output file.
        - `-o test` will generate an executable called "test.out".
    - `-Dmacro`: specify the macro that you apply before compiling.
        - `-DScarlet` is equivalent to `#define Scarlet` for all input files.
    - `-g`: turn on debugging options.
    - `-Wwarn`: turn on compile warning options.
        - `-Wall`: turn on __all__ compile warning. Always adding `-Wall` will help you a lot.
        - `-Werror`: stop compiling when any warning occurs.
    - `-Olevel`: turn on the optimization.
        - `-O3` will optimize more compared with `-O2`.
        - `-O0` performs no optimization (default option).



# Grading Rubric

|      Criteria           | Weight   |Available Time | Due Time | Entry|
| :-----------------:     | :----:   | :----: |  :----: |:----: |
|     Attendance          |  30%     |**4:00pm**, June.12 | **11:59am**, June.13 | Canvas Assignment|
|In-lab quiz | 70% | **9:00pm**, June.12| **11:59pm**, June.14 | Canvas Quiz |
|  Shell bonus      |  20%   | **9:00pm**, June.12 | **2:00pm**, June.14 | Canvas Quiz|

- For the attendance score, you need to submit your code for **exercises** in the **worksheet** on Canvas. We won't judge the correctness of your code.  You'll earn full credits as long as you've tried these exercises.
- Unless extreme cases, late lab submissions will not be accepted.
- The attendance, in-lab quiz, and the Shell bonus will be ceiled together if greater than 100%.



# Appendix

## Equivalent Command in Command Prompt and Unix Shell

Here are several equivalent command in Command Prompt and Unix Shell.

Command (Windows)|	Command (Mac OS / Linux / WSL)|	Description|	Example
-|-|-|-
exit	|exit	|close the window	|exit
cd	|cd	|change directory	|cd test
cd	|pwd	|show the current directory	|cd (Windows) or pwd (Mac OS / Linux)
dir	|ls	|list directories/files	|dir
copy	|cp	|copy file|	copy c:\test\test.txt c:\windows\test.txt
move	|mv	|move file|	move c:\test\test.txt c:\windows\test.txt
mkdir	|mkdir	|create a new directory|	mkdir testdirectory
rmdir (or del)|	rm|	delete a file|	del c:\test\test.txt
rmdir /S|	rm -r|	delete a directory|	rm -r testdirectory
type|cat|get content in the file|type c:\windows\test.txt
[CMD] /?|	man [CMD]|	get help for a command	|cd /? (Windows) or man cd (Mac OS / Linux)

## Windows Subsystem for Linux (WSL)

Windows Subsystem for Linux is a desktop environment inside Windows, which allows you to directly run your program virtually on Linux, without building a development environment by virtual machines.

[Installation tutorial from VG100-Manuel-SU2020](http://focs.ji.sjtu.edu.cn/vg100/markdown/env)

[Installation Tutorial with illustration](https://github.com/QMonkey/wsl-tutorial). You only need to follow instructions before the `Install VcXsrv` sections.

# Credit

- [Shell](https://missing.csail.mit.edu/2020/course-shell/), Missing-Semester
- [A Command Line Crash Course](https://www.vikingcodeschool.com/web-development-basics/a-command-line-crash-course), Viking Code School
- [Intro to command line](https://tutorial.djangogirls.org/en/intro_to_command_line/), Django Girls
- [Shell](https://github.com/Mars-tin/VE280-Discussions/blob/master/week1/Week%201.md), Ziqiao Ma