<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Manual</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 1</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:14px;line-height:17px;font-family: 'Courier New', Courier, monospace;font-weight:250;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:20px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Table of Contents</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:20px;line-height:26px;font-size:13px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• Installation for MATLAB<br>• Data Type for MATLAB<br>• MISC: Markdown Tutorial</div>
</div>


## Installation Guide for Matlab

In this section, we will provide a short guide to show you the process of installing Matlab.

**1. Apply for the authorization**

The Student Innovation Center of SJTU has provided us with a student license of MATLAB. You first need to access [this page](http://lic.si.sjtu.edu.cn/Softs/good/id/1636) and click the red button to log in with your Jaccount. Then you can click the button once again to apply for the license. It will automatically redirect you to a page with an application form. You need to enter your **SJTU email address** when filling the form. After you submit the form with suitable information, the verification process may finish in about 30 seconds.

If you haven't created a MathWorks account before, the process will automatically create one for you with your SJTU email. You can log into [MathWorks](https://www.mathworks.com/) and revise your password afterwards. Note that `a` stands for an offline version (which is recommended for VG101).

**2. Download the software**

You can install `2019a` or newer version of Matlab either from the [official website of MathWorks](https://www.mathworks.com/) or from the website of the [Student Innovation Center](http://lic.si.sjtu.edu.cn/Softs/good/id/1636). Please choose the one that fits your operating system.

**3. Install Matlab**

| Windows | Mac | Linux |
| :--------: | :--------: | :--------: |
| load or decompress the `.iso` file and run `setup.exe` in it | run the `.dmg` file     | mount the `.iso` file     |


1. Keep your computer connected to the Internet
2. choose `Log in with a MathWorks Account`, click `Next`
3. Select the license with tag `Individual`
4. choose your installation folder
5. select the products you would like to install. (Note that for products other than`MATLAB` and `Simulink`, they're not necessary for this course, but you can still select them anyway since you may need them in the future.)


If you are confused with these procedures or some problems occur during the process, please feel free to ask us for help during lab sessions!

**About Documentation**

Matlab provides a well-designed documentation. A common problem is that you may receive the error message `An error occurred searching the documentation` when searching in the help navigator. You can try the following procedure to fix that problem:
1. Go to `Home` and click `preference` (`布局` in Chinese);
2. Choose `help` section. For "documentation location", choose `installed locally`.

For any other concerns with MATLAB, you're encouraged to discuss these problems on **piazza**.

## Data Type for Matlab

In this section, we will learn some basic data types in computer and their conversion in MATLAB.

**1. Numeric Types**

There are two basic types of data, **numeric** and **characters/strings**. 

|type name|definition|
|----|----|
|double|Double-precision arrays|
|single|Single-precision arrays|
|int8|8-bit signed integer arrays|
|int16|16-bit signed integer arrays|
|int32|	32-bit signed integer arrays|
|int64|64-bit signed integer arrays|
|uint8|	8-bit unsigned integer arrays|
|...|...|


Review the contents learned in class, how to detect the data types? If `int8` is so limited, why we have `int8`, not every number in `int64`?


**2. Simple Conversion**

Conversion between numeric:

```matlab=
num1=int32([-20,20]);
num2=cast(num1,'uint32');
```

Conversion between Numeric and Strings:`num2str`, `str2num`

**3. Base Conversion**

How to convert base $m$ to base $n$?

$$
N = m_1\times m^{l_m-1} + m_2\times m^{l_m-2} + \cdots + m_{l_m} \\
l_n = \lceil \log_n(N + 1)\rceil \\
n_k = \left\lfloor\frac{N}{n^{l_n - k}}\right\rfloor\mod n, \qquad \mathrm{for}\ k = 1, \ldots, l_n
$$

Examples:
(1). Convert $(100011)_2$ from binary to hexadecimal.

(2). Special case: Convert $5F3EC6$ from hexadecimal to binary.


**4. String/Character Types**

|type name|definition|
|----|----|
|string|string arrays|
|char|Character arrays|
|strings|String arrays with no characters|

Compare the following two cases:
```matlab=
c='Welcome to VG101';
str="Welcome to VG101";
```

**Character Type:**


Before Matlab 2016, there is no "string array" data types in MATLAB. It is introduced to represent a strings without storing a sequence of characters. 

*note: in the string array, the strings can have different lengths:*

```matlab=
str=["Monday","Tuesday","Wednesday","Thursday","Friday"];
disp(str(3));
```

Determine whether char, string or not: `ischar, isstring`
```matlab=
a='nb';
logical_value=ischar(a);
```


## Miscellaneous Useful Skill

In this section, we will learn a useful tool, namely Markdown.

### Markdown

**Markdown** is a lightweight markup language designed for quick building of well-structured document. Documents in Markdown can be easily exported as HTML, pdf or other format. 

The standard version of Markdown (CommonMark) usually has components (blocks) including paragraph, header, emphasis, list, image, link, quote and code.

They look like below:

---

#### It's a header

This is a simple paragraph

I want to be *italic* or **bold**

- Unordered list 1
- Unordered list 2
1. Ordered list 1
2. Ordered list 2

An image and a link
![Markdown icon](https://cdn.onlinewebfonts.com/svg/img_2398.png)
[Markdown icon](https://cdn.onlinewebfonts.com/svg/img_2398.png)

> To be or not to be, that is the question. -- Shakespeare

All the previous blocks can be written in Markdown as

```markdown
#### It's a header

This is a simple paragraph

I want to be *italic* or **bold**

- Unordered list 1
- Unordered list 2
1. Ordered list 1
2. Ordered list 2

An image and a link
![Markdown icon](https://cdn.onlinewebfonts.com/svg/img_2398.png)
[Markdown icon](https://cdn.onlinewebfonts.com/svg/img_2398.png)

> To be or not to be, that is the question. -- Shakespeare
```

One can clearly see the "marks" (like `#`, `**`, `-`, `![]()`) to mark a part of text or a line as a component (block).

#### Application

You may find Markdown useful when creating a ...
- Well-structured documentation
- Neat homework
- Articles in a blog
- Draft for a paper
- Collaboration workspace
- ...


#### Recommended editors

- [Codimd](https://demo.codimd.org/), online editor, **allow real-time collaboration**.
- [StackEdit](https://stackedit.io/app#), online editor in English, maybe quick outside of GFW.
- [Cmd Markdown](https://zybuluo.com/mdeditor), online editor in Chinese,  quick in China mainland.
- [Typora](https://typora.io/), offline editor, WYSIWYG (what you see is what you get).

#### Practice Time

**Now please** refer to the lab material [`Tutorial.md`](https://github.com/Scarlet-Climax/MarkdownTutorial/blob/master/Tutorial.md) (`.md` stands for the filename extension for Markdown, and you can open it as txt file by notepad or any other editors) and **then copy the [raw content](https://raw.githubusercontent.com/Scarlet-Climax/MarkdownTutorial/master/Tutorial.md) into the editor. Enjoy exploring Markdown!**

More detailed and powerful tutorials are provided by the corresponding editors' documentation. Find them and enjoy yourself.




## Grading Rubric

| Criteria | Weight |
| :--------: | :--------: |
| Attendance |   30%   |
| In-lab quiz     |  70%    |
| Markdown quiz bonus     |   10%   |
| LCG Cracker bonus | 15% |

- For the attendance score, you need to submit your code for exercises in the worksheet to the corresponding assignment on Canvas. We won't judge the correctness of your code. You just need to go through these exercises on the worksheet and try the implementation by yourself. You'll earn full credits as long as you've tried these exercises.
- For the in-lab quiz of lab1, you need to complete it on canvas in lab.
- The lab score will be converted into your final score based on the grading policy. Note that the maximum score you can get from this lab is 100 points, i.e., if you get through all the assessments with full marks (125 points), your final score will still be rounded to 100 points.

## Reference

[1] SJTU Student Innovation Center, 2020. [Online]. Available: http://lic.si.sjtu.edu.cn/Softs/good/id/1636. [Accessed: 14-May-2020].