<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Manual</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 2</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:14px;line-height:17px;font-family: 'Courier New', Courier, monospace;font-weight:250;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:20px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Table of Contents</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:20px;line-height:26px;font-size:13px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• MISC: Github Tutorial<br>• Conditional Expression<br>• Loop<br>• Magic Square</div>
</div>



# Workflow

|      Content                      | Approx. Time   |
| :-----------------:               | :----:         |
|     **Github Tutorial**           | 15 mins        |
| **Warmup: Basic Syntax Exercise** | 30 mins        |
| Break                             | 10 mins        |
| **Problem: Magic Square**         |  45 mins       |
| Break                             | 10 mins        |
| **Practical Exercise**                 |  70 mins       |



# GitHub

<center>
<img src="https://www.somagnews.com/wp-content/uploads/2020/04/75-e1586981465263-696x385.png" alt="">
</center>



**[GitHub](https://github.com/)** is a community for developers to share their codes. Many wonderful open-source projects like [Linux](https://github.com/torvalds/linux), [Ruby](https://github.com/ruby/ruby), [Swift](https://github.com/apple/swift), and [PyTorch](https://github.com/pytorch/pytorch), are available on GitHub. 

## Basic Concepts in GitHub
- **Repository**
    - where the code is stored, like a cloud drive.
    - can be considered as a project.
- **Commit**
    - the action of uploading (updating) the code to the repository.
    - measures how dedicated a programmer is.
- **Clone**
    - the action of downloading the code to the computer.
- **Git**
    - a software related to GitHub, **but is not GitHub**.
    - aims at project version control, i.e. easily recover your project when you mess up
    - will discuss next week.
- **Pull Request**
    - how people collaborate on GitHub.
    - improve other's project by modifying their code
    - need approval
- **Fork**
    - the action of "cloning" other's repository for your own use.


Before looking into the GitHub, please create an account in the GitHub.

## Use GitHub Online

### Create a Repository

Repository is where you store an entire project.

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_72b8bec617c661e3cb586c99de00e086.png)

Name your repository and choose privacy.

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_18581f231dab556ca1b028e97b1be7fa.png)


### Commit the First Change

Interface of a repository:

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_f137d52f5102314d7c8c2e27771f25e1.png)

Committing a change of the `README.md` will also change the appearance in the repo interface.


### Exploring GitHub


[GithubExplore](https://github.com/explore) will give you information you may interested in:
1. Topics
2. Trending
3. Collections
4. Events
5. GitHub Sponsors

### Optional Assignment

Create a repository of your own and write a brief description of one of the repositories you are interested in on the GitHub, into the `README.md` of you repo. 

You are supposed to use features in Markdown including `header` and `lists`.

Submit **the URL of your repo** (where you can directly see the rendered README file) in the assignment.



# Conditional Expression for MATLAB


## Josephus Game


In the Jewish revolt against Rome, Josephus and 39 of his comrades were holding out against the Romans in a cave. With defeat imminent, they resolved that, like the rebels at Masada, they would rather die than be slaves to the Romans. They decided to arrange themselves in a circle. One man was designated as number one, and they proceeded clockwise killing every seventh man... Josephus (according to the story) was among other things an accomplished mathematician; so he instantly figured out where he ought to sit in order to be the last to go. But when the time came, instead of killing himself he joined the Roman side.

In our Josephus game, we start with n people numbered 1 to n around a circle, and we eliminated every k remaining person until only one survives. For example, here's the starting configuration for n = 10, k = 2, The elimination order is 2, 4, 6, 8, 10, 3, 7, 1, 9. So 5 survives.

Please determine the survivor's number for input n and k.

```
>>ex12
10
2
     5
```
**Hint**

In MATLAB, it is simple to delete one element. One way is to use the double loop.

## Magic Square

A magic square is a $n × n$ square grid (where $n$ is the number of cells on each side) filled with distinct positive integers in the range $1, 2, ..., n^2$ such that each cell contains a different integer and the sum of the integers in each row, column and diagonal is equal. The sum is called the magic constant or magic sum of the magic square. A square grid with n cells on each side is said to have "order $n$".

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_f1d85fec18cb609bfe5b054a3526475f.png)

### Construct a Magic Square

There are many ways to construct magic squares, but the standard (and most simple) way is to follow certain configurations/formulas which generate regular patterns. Magic squares exist for all values of $n$, with only one exception: *it is impossible to construct a magic square of order 2*. Magic squares can be classified into three types: **odd**, **doubly even** ($n$ divisible by four), and **singly even** ($n$ even, but not divisible by four).

In this part, we will guide you to construct a magic square through different methods.

#### Generate Magic Square using MATLAB Function

Sometimes life can be so easy. When you find it hard to do something by your own effort, remember that MATLAB has many installed functions that can satisfy your requirements very well, and what you need to do is simply looking up the documentation and learn how to use the functions correctly.

Please search for `magic square` using the MATLAB documentation and generate a magic square of any given order.

#### Magic Square of Odd Order

In this part, you're required to write a MATLAB script which takes an **odd** integer $n>1$ as input, and return a magic square of order $n$ as a matrix similar to MATLAB function `magic(n)`.

A method for constructing magic squares of odd order was published by the French diplomat *de la Loubère* in the chapter *the problem of the magical square according to the Indians* of his book *A new historical relation of the kingdom of Siam* (*Du Royaume de Siam*, 1693). The method operates as follows: The method prescribes starting in the central column of the first row with the number 1. After that, the fundamental movement for filling the squares is diagonally up and right, one step at a time. If a filled square is encountered, one moves vertically down one square instead, then continues as before. When an “up and to the right” move would leave the square, it is wrapped around to the last row or first column, respectively.

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_07c0a32a0fda7a46a9a1d1fa065cf5d7.png)

#### Magic Square of Doubly Even Order

In this part, you're required to write a MATLAB script which takes in an **doubly even** integer $n>2$ as input, and return a magic square of order $n$ as a matrix similar to MATLAB function `magic(n)`. 

Recall that doubly even means that $n$ is an even multiple of an even integer, i.e., $4, 8, 12, ...$, where $k$ is an integer. Here is an approach which is called *Narayana-De la Hire's method*.

All the numbers are written in order from left to right across each row in turn, starting from the top left hand corner. The square is split into $n^2/16$ parts of $4*4$ small squares. Numbers in the small squares are then retained in the same place if they are not on the diagonal line, or interchanged with their diametrically opposite numbers if they are on the diagonal line. Two numbers $a, b$ are diametrically opposite means than $a+b=n^2+1$.

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_fcc6f7512d469d129445058cd3b40863.png)

#### Magic Square of Singly Even Order

We will not cover this part in our lab. If interested, you can search for `Conway’s LUX method` by yourself.

### Print a Magic Square

In this part, you're required to print a generated magic square of odd order in a `.txt` file. The workflow is listed as follow:

- Read an integer $n$ from standard I/O.
- Open a file `output.txt` with write permission.
- Call the function you wrote in the previous section with the integer $n$ that you input before and print the returned matrix in `output.txt`. If the integer doesn't meet your function (i.e., $n=4$), print some error message.

**Remarks**

- Don't forget to close the opened file before your script ends.
- You're recommended to use `monospaced font` in MATLAB (and later, in other coding environments). Otherwise, you'll find it hard to align the numbers!


# Grading Rubric

|      Criteria           | Weight   |Available Time | Due Time | Entry|
| :-----------------:     | :----:   | :----: |  :----: |:----: |
|     Attendance          |  30%     |**4:00pm**, May.22 | **11:59pm**, May.22 | Canvas Assignment|
|In-lab quiz | 70% | **9:00pm**, May.22| **11:59pm**, May.22 | Canvas Quiz |
|Github bonus|10%|**9:00pm**, May.22| **11:59pm**, May.22 | Canvas Assignment |
| Challenges bonus |     | **9:00pm**, May.22 | **2:00pm**, May.23 | Canvas Quiz|

- For the attendance score, you need to submit your code for **exercises** in the **worksheet** on Canvas. We won't judge the correctness of your code.  You'll earn full credits as long as you've tried these exercises.
- The attendance, in-lab quiz, and the Github bonus will be ceiled together if greater than 100%. 
- The challenges bonus will be counted towards your final lab score.


# Reference

- VG101 Lab Manual (Summer 2019)