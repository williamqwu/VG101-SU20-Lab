<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Worksheet</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 3</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:14px;line-height:17px;font-family: 'Courier New', Courier, monospace;font-weight:250;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:16px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Code Quality Requirement</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:25px;line-height:23px;font-size:11.5px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• Ensure proper indentation<br>• Make naming meaningful <br>• Include necessary comments<br>• Split the code over functions<br>• Test the code as much as you can</div>
</div>
<!-- Last modified: 05-27-2020-->

---


| Category | Exercise title | Tag |
| -------- | -------- | -------- |
| basic syntax exercise    | /   | function, basic plot    |
| practical exercise    | Narcissistic Number     | loop, function     |
| practical exercise    | Goldbach’s Conjecture     | function, enumeration     |
| practical exercise    | Minesweeper     | function    |
| practical exercise    | Pascal Triangle    | formatted output, FileIO   |
| practical exercise    | Complex Electric Field Simulation| 3D plot, MVC    |

- In-lab quiz will test your understanding of some of these problems, get prepared.
- Remember to submit your code on time, otherwise your attendance score will be deducted.
- Coding is not that difficult. Think before programming to see whether there is an easier implementation. Make your life easier.

# Basic Syntax Exercise

## Function

In this part, you may use the code skeleton provided below to fulfill the following requirements. You're free to specify anything by yourself that is not covered in the problem statement.

1. Complete the function `isSquared` that returns 1 if the parameter is a **perfect square**. Otherwise, return 0.
2. Write a function that returns the **surface area** and **volume** with height and radius parameter given.
3. Complete the function `allDigits` that returns all digits of a parameter as a vector.
4. Complete the function `isPrime` that returns 1 if the integer parameter is a **prime number**. Otherwise, return 0. You're not allowed to use the MATLAB function `isprime`.

Code skeleton you may use:
```matlab
clearvars;clc;
disp([isSquared(257) isSquared(256)])
[a,v] = calcCylinder(1,3);
disp([a,v])
disp(allDigits(1234))
disp([isPrime(1) isPrime(23333) isPrime(19260817)])

%Don't modify the code above

function result=isSquared(x)
	% TODO: check whether x is a square number
end
 
%--------------------------------------------------------%
% TODO: Define and finish the calcCylinder function here %
%--------------------------------------------------------%

function result=allDigits(x)
	% TODO: return all the digits of x, can be done in one line
end

function result=isPrime(x)
	% TODO: check whether x is prime
end
```

Note that the input has already been included in the code skeleton. Expected output is:
```matlab
     0     1

   75.3982   28.2743

     1     2     3     4

     0     1     1
```


## Plot

5. Use `plot` to draw functions $y_1=sin(x)$ and $y_2=cos(x)$ **at the same time**.
6. Use `fill` to draw several **polygons** like squares, rectangle, octagon, circle **at the same time**.
7. Animate a clockwise-rotating square and a counter-clockwise-rotating equilateral triangle at the same time.
8. Wrap problem 5 and 6 into functions.

# Practical Exercises

## Narcissistic Number

Narcissistic number is a number that is the sum of its own digits each raised to the power of the number of digits, like $9474=9^4+4^4+7^4+4^4$

Use the function implemented in 1.3 to find all the Narcissistic number  smaller than $10^8$. 



## Goldbach's Conjecture

Use the function implemented in 1.4 to validate the Goldbach's Conjecture: 
Input an even number $n$, find two prime number $p,q$ that $p+q=n$.

Sample input/output:
```matlab
9870
          11        9859
```


## Minesweeper

Write a function ```myMinesweeper(r, c)```, which takes the number of rows ```r > 3``` and columns ```c > 3``` as inputs, and randomly generate an r x c truth board, with 0 indicating safe position, and 1 indicating a mine in that position.

Start from an empty board containing only 0s. Then until the user wins (with all mines identified without touching them) or loses (touched a mine), the user is prompted to input two numbers `[r,c]` indicating a guess **(comma separated, bracket enclosed)**. Then the number in the position is updated with the number of mines surrounded, i.e., the number of mines within a 3 x 3 grid centered at the guessed location. If the game ends, the user should be prompted with either `Congratulations, you wins`, or `Sorry, you lose`. For each intermediate round, the updated board should be printed in the command window.

```matlab
4
4
[2 2]
     0     0     0     0
     0     5     0     0
     0     0     0     0
     0     0     0     0

[4 4]
     0     0     0     0
     0     5     0     0
     0     0     0     0
     0     0     0     2

[2 4]
     0     0     0     0
     0     5     0     5
     0     0     0     0
     0     0     0     2

[4 3]
     0     0     0     0
     0     5     0     5
     0     0     0     0
     0     0     3     2

[4 1]
     0     0     0     0
     0     5     0     5
     0     0     0     0
     1     0     3     2

[3 1]
     0     0     0     0
     0     5     0     5
     1     0     0     0
     1     0     3     2

[2 1]
     0     0     0     0
     2     5     0     5
     1     0     0     0
     1     0     3     2

[3 2]
     0     0     0     0
     2     5     0     5
     1    -1     0     0
     1     0     3     2

Sorry, you lose
```

## Pascal Triangle

*Pascal's triangle* is a triangular array composed of the binomial coefficients. Write a MATLAB function taking as input an integer n and which outputs n lines of Pascal's triangle in a **text file**.

(Hint: either generate it using the fact that each number in the triangle is the sum of the two numbers directly above it or using the functions `pascal diag`, and `rot90`.)

Sample input/output:
```matlab
7
                1   
              1   1   
            1   2   1   
          1   3   3   1   
        1   4   6   4   1   
      1   5   10   10   5   1   
    1   6   15   20   15   6   1   
```

## Complex Electric Field Simulation \*

Try to simulate a charged particle's movement in an electric field formed by several fixed charges. You can modify the code in "Three-body Animation" part. 

Can you extend the case to three dimension?