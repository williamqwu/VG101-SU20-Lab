<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Worksheet</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 5</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:13px;line-height:16px;font-family: 'Courier New', Courier, monospace;font-weight:80;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Haoxuan SHAN<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:16px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Code Quality Requirement</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:25px;line-height:23px;font-size:11.5px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• Ensure proper indentation<br>• Make naming meaningful <br>• Include necessary comments<br>• Split the code over functions<br>• Test the code as much as you can</div>
</div>

<!-- Last modified: 06-12-2020-->

---


[TOC]


# Basic Syntax Exercises

## 🦖Hello World!

Write a program to print `Hello World` to the console.

`#printf`

## Output Quotation Mark
Try to output double quotation mark with `printf`.

\* Use search engine wisely.

`#printf`

## Introduction to ASCII

Try this code yourself and check the output.
```c
for ( int i = 0 ; i < 255 ; ++ i )
    printf("%c ",char(i));
```
\* You may refer to https://theasciicode.com.ar/ to review what ASCII is. 

`#char`

## Uppercase Converter

Write a program to ask users to input an alphabetic character, and print out the capitalized version of this character.

`#char`

## A+B Problem

Write a program, input 2 integers and output their sum.

```
Input:
5 495
Output:
500
```

`#assignment`

## Variable Swap

Write a program, input 2 integers, swap and output them respectively.

```
Input:
495 19260817
Output:
19260817 495
```

`#assignment`

## Triangle

Input $a,b,c$, check whether they can be the edge lengths of a triangle. Your output should either be `Yes` or `No`.

`#if-condition`

## Days Matter
Input two integers representing a year and a month (later than 1900, earlier than 2020). Find how many days are there in this month. 

```
Input:
2020 2
Output:
29
```

`#if-condition`

## BMI Calculator

Write a program to calculate the body mass index (BMI) and output the health condition. Input people's weight (in kg) and height (in cm). Notice that the output BMI should be rounded to have precision to 0.1 and the status is determined according to BMI with this precision. 
$$ BMI = \frac{weight_{kg}}{{height_{m}}^2} $$

| BMI | Category (Output) |
|-|-|
| $\leq$ 18.4 | "underweight" |
| 18.5 $\leq$ BMI $\leq$ 23.9 | "normal" |
| 24.0 $\leq$ BMI $\leq$ 27.9 | "Overweight" |
| $\geq$ 28.0 | "Obese" |


`#if-condition`

## Maximal Number

Given a sequence with $n$ distinct integers, output the maximal number and its index in the sequence.

\* Note that you don't need array here.

`#if-condition` `#loop`

```
Input:
10
1 2 3 4 495 5 6 7 8 9
Output:
495 4
```

## Fibonacci Number

Output the $m^{th}$ Fibonacci Number. $m<80$.

You may use the integer type `long long int`.

`#loop` `#assignment`

## Number Pyramid

Write a program to output the shape below with an input `n` indicating the layer of the pyramid. 

```
Input:
7
Output:
      #
     ###
    #####
   #######
  #########
 ###########
#############
```

`#nested loop`

# Tricks in C

## Logical Expression in C

Try to assign different logical expressions to integer variables and output them.

```c
int a=1>0;
printf("%d\n", a);
```

Besides, predict the following output.

```c
for (int i=-3;i<=3;i++)
{
    if (i) printf("True: %d", i);
    else printf("False: %d", i);
}
```

## "Return Value" of Assignment

Try 
```c
int a=0;
int c=(a=10);
printf("%d",c);
```

And explain what will happen if you write

```c
if (a=9) printf("%d",a);
```

And hence conclude that always write like
```c
if (9==a) ...
```
to avoid potential bugs.

## Shorthand Operator

<center>
<img style="height:600px" src="https://codimd.s3.shivering-isles.com/demo/uploads/upload_71c7355b6b27ff2de0cb1eab7eadb586.png" alt="">
</center>


## Short Circuit Operator

```c
int a=1,c=0;
// Guess which of these will work
if (c!=0&&a/c==1) printf("%d",a/c);
if (a/c==1&&c!=0) printf("%d",a/c);
```



## Mechanism of FOR

Compare the following two program pieces.

```
for(int i=1;i<=10;i++)
    printf("%d",i);
```
and
```
for(int i=1;i<=10;printf("%d",i))
    i++;
```

And conclude that
```c
for(A;B;C)
    D;
/*
During the loop:
A->B->DC->B->DC->...->B->DC->B->Exit
*/
```

## Increment and Decrement Operators

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_2af97d3743b2ad7246268bfb673bc0dd.png)

And thus predict the output of the following code:
```c
for (int i=3;i--;)
    printf("%d ",i);
    
for (int i=3;--i;)
    printf("%d ",i);
```

## Naughty Switch

Copy the following code and record the output. Uncomment four lines of `break` and compare the new output with previous one. What's happening here?

```cpp
int a=1;
switch (a)
{
    case 1:
        a++;
        // break;
    case 2:
        a+=2;
        // break;
    case 3:
        a=99;
        // break;
    case 4:
        a=-99;
        // break;
}
printf("%d",a);
```
**Always remember to check the existence of `break` in a switch statement :-)**


Copy the following code and try to fix error(s):

```cpp
int a; scanf("%d",&a);
switch (a)
{
    case 1:
        int b = 1;
        printf("[1] %d", b);
        break;
    case 2:
        b = 2;
        printf("[2] %d", b);
        break;
}
```

**Avoid declaring variables inside a switch statement !!!**


# Appendix 

## C Operator Precedence

The following table lists the precedence and associativity of C operators. Operators are listed top to bottom, in descending precedence.

<div style="line-height: 6.2px;font-size: 13.6px">
<table class="wikitable">
<th style="text-align: left"> Precedence
</th>
<th style="text-align: left"> Operator
</th>
<th style="text-align: left"> Description
</th>
<th style="text-align: left"> Associativity
</th></tr>
<tr>
<th rowspan="6"> 1
</th>
<td style="border-bottom-style: none"> <code>++</code> <code>--</code>
</td>
<td style="border-bottom-style: none"> Suffix/postfix increment/decrement
</td>
<td style="vertical-align: top" rowspan="6"> Left-to-right
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>()</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Function call
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>[]</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Array subscripting
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>.</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Structure and union member access
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>-&gt;</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Structure and union member through pointer
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>(<i>type</i>){<i>list</i>}</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Compound literal<span class="t-mark-rev t-since-c99">(C99)</span>
</td></tr>
<tr>
<th rowspan="8"> 2
</th>
<td style="border-bottom-style: none"> <code>++</code> <code>--</code>
</td>
<td style="border-bottom-style: none"> Prefix increment and decrement<sup id="cite_ref-1" class="reference"></sup>
</td>
<td style="vertical-align: top" rowspan="8"> Right-to-left
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+</code> <code>-</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Unary plus and minus
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>!</code> <code>~</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Logical NOT and bitwise NOT
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>(<i>type</i>)</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Cast
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Indirection (dereference)
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&amp;</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Address-of
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>sizeof</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Size-of<sup id="cite_ref-2" class="reference"></sup>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>_Alignof</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Alignment requirement<span class="t-mark-rev t-since-c11">(C11)</span>
</td></tr>
<tr>
<th> 3
</th>
<td> <code>*</code> <code>/</code> <code>%</code>
</td>
<td> Multiplication, division, and remainder
</td>
<td style="vertical-align: top" rowspan="11"> Left-to-right
</td></tr>
<tr>
<th> 4
</th>
<td> <code>+</code> <code>-</code>
</td>
<td> Addition and subtraction
</td></tr>
<tr>
<th> 5
</th>
<td> <code>&lt;&lt;</code> <code>&gt;&gt;</code>
</td>
<td> Bitwise left shift and right shift
</td></tr>
<tr>
<th rowspan="2"> 6
</th>
<td style="border-bottom-style: none"> <code>&lt;</code> <code>&lt;=</code>
</td>
<td style="border-bottom-style: none"> For relational operators &lt; and ≤ respectively
</td></tr>
<tr>
<td style="border-top-style: none"> <code>&gt;</code> <code>&gt;=</code>
</td>
<td style="border-top-style: none"> For relational operators &gt; and ≥ respectively
</td></tr>
<tr>
<th> 7
</th>
<td> <code>==</code> <code>!=</code>
</td>
<td> For relational = and ≠ respectively
</td></tr>
<tr>
<th> 8
</th>
<td> <code>&amp;</code>
</td>
<td> Bitwise AND
</td></tr>
<tr>
<th> 9
</th>
<td> <code>^</code>
</td>
<td> Bitwise XOR (exclusive or)
</td></tr>
<tr>
<th> 10
</th>
<td> <code>|</code>
</td>
<td> Bitwise OR (inclusive or)
</td></tr>
<tr>
<th> 11
</th>
<td> <code>&amp;&amp;</code>
</td>
<td> Logical AND
</td></tr>
<tr>
<th> 12
</th>
<td> <code>||</code>
</td>
<td> Logical OR
</td></tr>
<tr>
<th> 13
</th>
<td> <code>?:</code>
</td>
<td> Ternary conditional<sup id="cite_ref-3" class="reference"></sup>
</td>
<td style="vertical-align: top" rowspan="6"> Right-to-Left
</td></tr>
<tr>
<th rowspan="5"> 14<sup id="cite_ref-4" class="reference"></sup>
</th>
<td style="border-bottom-style: none"> <code>=</code>
</td>
<td style="border-bottom-style: none"> Simple assignment
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+=</code> <code>-=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by sum and difference
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*=</code> <code>/=</code> <code>%=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by product, quotient, remainder
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&lt;&lt;=</code> <code>&gt;&gt;=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by bitwise left shift and right shift
</td></tr>
<tr>
<td style="border-top-style: none"> <code>&amp;=</code> <code>^=</code> <code>|=</code>
</td>
<td style="border-top-style: none"> Assignment by bitwise AND, XOR, and OR
</td></tr>
<tr>
<th> 15
</th>
<td> <code>,</code>
</td>
<td> Comma
</td>
<td> Left-to-right
</td></tr></tbody></table>
</div>

See more details [here!](https://en.cppreference.com/w/c/language/operator_precedence)
