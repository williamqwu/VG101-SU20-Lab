<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Worksheet</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 2</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:14px;line-height:17px;font-family: 'Courier New', Courier, monospace;font-weight:250;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:16px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Code Quality Requirement</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:25px;line-height:23px;font-size:11.5px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• Ensure proper indentation<br>• Make naming meaningful <br>• Include necessary comments<br>• Split the code over functions<br>• Test the code as much as you can</div>
</div>
<!-- Last modified: 05-21-2020-->



---


| Category | Exercise title | Label |
| -------- | -------- | -------- |
| basic syntax exercise    | Odd or Even 1.0   | condition    |
| basic syntax exercise    | GPA Converter     | condition     |
| basic syntax exercise    | Simple Sum     | loop    |
| basic syntax exercise    | Unknown Length    | loop     |
| basic syntax exercise    | Odd or Even 2.0    | loop     |
| basic syntax exercise    | Repeated Number\*     | nested loop     |
| basic syntax exercise    | Prime or Not\*    | loop control     |
| basic syntax exercise    | Construction or Enumeration\*    | loop control     |
| practical exercise    | Arbitrary-Precision Plus\*     | string, loop     |
| practical exercise    | Daffodil Number\*     | loop, enumeration     |
| practical exercise    | Base Conversion     | loop, base    |
| practical exercise    | Sort\*     | loop, sort     |
| challenge     | Distinct Powers     | loop, number theory    |

- In-lab quiz will test your understanding of some of these problems, get prepared.
- Challenge is totally optional, and you will be rewarded a bonus if you do a correct implementation and submit the result on time.
- Remember to submit your code on time, otherwise your attendance score will be deducted.
- Coding is not that difficult. Think before programming to see whether there is an easier implementation. Make your life easier.
- Problems labeled with `*` are recommended.

# Basic Syntax Exercise

## Conditional Expression

### Odd or Even 1.0
Read an integer from command line, then display 1 if it's even, else display 0.

Example: (You can modify the file name or the prompt as you like)
```matlab
>> ex1
Input an integer: 3
     0

>> ex1
Input an integer: 2
     1
```

### GPA Converter
Read an integer as the score from command line, then display the letter grade according to the SJTU GPA table.

Example:
```
>>ex2
95
     A+
     
>>ex2
78
     B
```
#### SJTU GPA Table
Score|Letter Grade|Grade points
-|-|-
95∼100 |A+ |4.3
90∼94 |A |4.0
85∼89 |A- |3.7
80∼84 |B+ |3.3
75∼79 |B |3.0
70∼74 |B-| 2.7
67∼69 |C+| 2.3
65∼66 |C |2.0
62∼64 |C- |1.7
60∼61 |D |1.0
<60 |F|0

## Loop Expression

### Simple Sum

Read an integer as $n$, and then calculate,

$$
\sum_{i=1}^ni^3
$$

Example:
```
>>ex3
Input an integer: 3
    36
```

### Unknown Length

Read a sequence of integers ending with $0$, find the length of the sequence. Note that this example provides you with an idea of reading in data of unknown length.


Example:
```
>>ex4
1
2
3
4
0
     5
```

### Odd or Even 2.0

Read a sequence of integers ending with $0$, check whether every integer is odd or even.

Example:
```
>>ex5
1
     1

2
     0

3
     1

4
     0

0
```

### Repeated Number

Read a sequence of integers ending with $0$, find whether there are repeated number, i.e. an integer occurred twice or more. 

Example:
```
>>ex6
1 
3 
4 
5 
2 
0
     0

>>ex6
1
3
4
5
3
3
4
0
     1
```

## Break and Continue

### Prime or Not

Read an positive integer, determine whether it is a prime number.

You may use a variable `flag` to store your result.

```
>>ex7
233
     1
     
>>ex7
232
     0
```

### Construction or Enumeration

Read a sequence of positive integers ending with $0$. For each number $n$, find an arbitrary $m$ such that $nm+1$ is not a prime number and $m>1$.

```
>>ex8
10
     2
     
6
     4

20
     4
```


# Practical Exercises

## Arbitrary-precision Plus

Input two large integers (firstly store as strings). Display the sum of two integers.

```
>>ex9
123456789123456789123456789
987654321987654321987654321
     1111111111111111111111111110
```

Consider:
- How do you perform arithmetic plus by "vertical form"?
- Should we compute from highest digits or lowest digits?
- How to handle the "carry"?
- What if their length are different?

## Daffodil Number

The daffodil number is one of the famous interesting numbers in the mathematical world. A daffodil number is a three-digit number whose value is equal to the sum of cubes of each digit.

For example. $153$ is a daffodil as $153 = 1^3 + 5^3 + 3^3$.

Find all the three-digit daffodil number (larger then 100).

Consider:
- First write a piece code to check whether a three-digit number is "daffodil".
- Use that code to check every possible three-digit number.

## Base Conversion

Input an integer, convert it to binary base. Display the answer as a string.

```
>>ex11
31
     11111
```

## Sort

Read a vector consists of several integers, output them in the ascending order.

Example:
```
>>ex13
[2 3 1 4]
     1  2  3  4
```

Consider:
- Find the minimum of (the rest of) the sequence, and then place it to somewhere else.

# Advanced Exercise - Distinct Powers

## Description

Consider all integer combinations of $a^b$ for $2 \le a \le 5$ and $2 \le b \le 5$:
$$
2^2=4, 2^3=8, 2^4=16, 2^5=32\\
3^2=9, 3^3=27, 3^4=81, 3^5=243\\
4^2=16, 4^3=64, 4^4=256, 4^5=1024\\
5^2=25, 5^3=125, 5^4=625, 5^5=3125
$$
If they are lined up, with any repeats removed, we get the following sequence of 15 distinct terms:

$$4, 8, 9, 16, 25, 27, 32, 64, 81, 125, 243, 256, 625, 1024, 3125$$

## Problem Statement

How many distinct terms are in the sequence generated by $a^b$ for 
-  2 ≤ a ≤ 10 and 2 ≤ b ≤ 10? (0.05 marks)
-  2 ≤ a ≤ 100 and 2 ≤ b ≤ 100? (0.05 marks)
-  2 ≤ a ≤ 100000 and 2 ≤ b ≤ 100000? (0.05 marks)

**Improve the efficiency as possible as you can!**
