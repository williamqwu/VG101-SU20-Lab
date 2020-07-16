<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Manual</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 9</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:13px;line-height:16px;font-family: 'Courier New', Courier, monospace;font-weight:80;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Haoxuan SHAN<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:20px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Table of Contents</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:20px;line-height:26px;font-size:13px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• Sort<br>• Basic Algorithm<br>• Mid 2 Sample Exam</div>



# Workflow

|      Content                      | Approx. Time   |
| :-----------------:               | :----:         |
| **Warmup: Sort** | 30 mins        |
| Break                             | 10 mins        |
| **Mid2 Sample Exam**  |  70 mins|
| Break                             | 10 mins        |
| **Practical Exercise**                 |  60 mins       |

## Mid 2 Sample Exam

### Ex1. Simple I/O

`#string` `#I/O`

**Description**

Write a program to find the number of times that a key substring occurs in some sentences. The last lines will be the key substring (it can be a word or phrase). 

**Input**

- several lines of string

**Sample #1**

input
```
I want to learn courses well.
I want to survive.
ktt wants l4d2.
cls wanted qhh and shanhx to come to his office hour.
want
```

output
```
2
```

**Sample #2**

input
```
Four hundred cannon have been thundering without a break since morning on both sides.
At the front, the cavalcades of horsemen clash with the firing squares, drumsticks come down hard on the drumheads, the whole plain is shaking with the noise since morning.
But above the battle, since morning on the two hills, the field marshals are listening to a softer sound above the human storm.
since morning
```

output
```
3
```

**Update**

- Sample code available on Canvas

### Ex2. Perplexity

`#loop`

**Description**

It is known that the multiplication of polynomials are just a convolution:

$$
f(x)=a_0+a_1x+a_2x^2+\dots,\quad g(x)=b_0+b_1x+b_2x^2+\dots,\\
(f*g)(x)=(a_0b_0)+(a_0b_1+a_1b_0)x+(a_0b_2+a_1b_1+a_2b_0)x^2+\dots
$$

That is to say, the polynomial coefficient of $f*g$ is 
$$
c_n=\sum_{k=0}^na_kb_{n-k}
$$

Now given the polynomial coefficient of $f$ and $g$ at both $n$ degrees, find the sum of all the coefficient of $f*g$.

**Input**

The first line contain only one integer $n$.

The second and the third lines both contain $n$ integers, denoting the polynomial coefficient $a_0\dots a_{n-1}$ and $b_0\cdots b_{n-1}$.

**Output**

You should print only one integer, the sum of 

**Sample #1**

input
```
4
1 2 3 4
5 6 7 8
```

output
```
260
```

**Specification**

For all test cases, $n\leq 10^6, |a_i|,|b_i|\le 10^3$.

**Explanation**

$$
(1+2x+3x^2+4x^3)(5+6x+7x^2+8x^3)= 5+16+34x^2+60x^3+61x^4+52x^5+32x^6
$$
So the coefficient sum is $5+16+34+60+61+52+32=260$.


### Ex3. Chess Movement

`#recursion`

**Description:**

Provided $2n$ chesses in a single line where $n$ white chesses are on the left and $n$ black chesses are on the right. There are two extra blank position on the right. For example, if we denote `o` as white chess, `*` as black chess and `-` as blank position, we have the following condition when $n=5$: `ooooo*****--`.

Now you need to move the chess so as to let every black chess alternating with  a white one. For example, when $n=5$, your final chess board should look like: `--o*o*o*o*o*`. However, you can only move two adjacent chess at a time.

**Input Format** 

an integer $n$ indicating the number of a kind of chess.

**Output Format**

$m$ lines, each line indicating your movement of the chess. Note that you only need to output $m$ lines with a feasible solution.

**Sample #1**

input

```
7
```
output

```
ooooooo*******--
oooooo--******o*
oooooo******--o*
ooooo--*****o*o*
ooooo*****--o*o*
oooo--****o*o*o*
oooo****--o*o*o*
ooo--***o*o*o*o*
ooo*o**--*o*o*o*
o--*o**oo*o*o*o*
o*o*o*--o*o*o*o*
--o*o*o*o*o*o*o*
```

**Specification**:

- For 100% input, $n<15$

**Notes:**

- We will use Special Judge to grade your code

# Grading Rubric


|      Criteria           | Weight   |Available Time | Due Time | Entry|
| :-----------------:     | :----:   | :----: |  :----: |:----: |
|     Sample Exam        |  60%     | **4:00pm**, July.10 | **11:59am**, July.12  | JOJ |
|   Algorithmic Exercise        | 40%         | **9:00pm**, July.10  | **11:59pm**, July.12 | JOJ |

- For Sample Exam and algorithmic exercise, you need to submit your code to JOJ before Sunday midnight. You'll earn most partial points as long as you submit the code.

