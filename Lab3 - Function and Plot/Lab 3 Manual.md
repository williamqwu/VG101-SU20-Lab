<div style="width:53%;height:165px;text-align:center;border:14px solid #808080;border-top:none;border-left:none;border-bottom:none;display:inline-block">
    <div style="border:4px solid #808080;border-radius:8px;width:95%;height:100%;background-color: rgb(209, 209, 209);">
        <div style="width:100%;height:30%;text-align:center;line-height:60px;font-size:22px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;">VG101 Lab Manual</div>
        <div style="width:100%;height:20%;text-align:center;line-height:26px;font-size:16px;font-familny:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Lab 3</b></div>
        <div style="width:100%;height:50%;text-align:center;font-size:14px;line-height:17px;font-family: 'Courier New', Courier, monospace;font-weight:250;"><b>Instructor: Dr. Yifei ZHU<br>TA: Hangrui CAO<br>TA: Qinhang WU<br>TA: Muchen XU<br></b></div>
    </div>
</div>
<div style="width:46%;height:165px;display:inline-block;float:right">
    <div style="width:100%;height:30%;text-align:center;line-height:65px;font-size:20px;font-family:'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;"><b>Table of Contents</b></div>
    <div style="width:100%;height:70%;text-align:left;margin-left:20px;line-height:26px;font-size:13px;font-family:Verdana, Geneva, Tahoma, sans-serif;font-weight:300;">• MISC: Git Tutorial<br>• Function and Plot <br>• Three-body Problem</div>
</div>




# Workflow

|      Content                      | Approx. Time   |
| :-----------------:               | :----:         |
|     **Git Tutorial**           | 25 mins        |
| **Warmup: Basic Syntax Exercise** | 30 mins        |
| Break                             | 10 mins        |
| **Lab Design : Three-body Animation**|35 mins      |
| Break                             | 10 mins        |
| **Practical Exercise**                 |  70 mins       |



# Git

<center>
<img src="https://git-scm.com/images/logo@2x.png" alt="">
</center>

[Git](https://git-scm.com/) is a distributed version-control system for tracking changes in source code during software development. 

It is designed for coordinating work among programmers, but it can be used to track changes in any set of files. Its goals include speed, data integrity, and support for distributed, non-linear workflows.



## Basic Topics


- Working Directory
    - the folder where the repository locates
- Index (Stage)
    - a staging area between your working directory and your repository. 
    - build up a set of changes that you want to commit together.
    - what is committed is those currently in the index, not what is in your working directory.
- Repository
    - the whole project
    - all history is recorded
- Remote (Repository)
    - remote repository (like GitHub)
    - should be synchronized with your local repository

## Usage

### Environment and Git Installation

See [Environment Setup](http://focs.ji.sjtu.edu.cn/vg100/markdown/env) and [Git Installation](http://focs.ji.sjtu.edu.cn/vg100/markdown/env.git). And you will also need a [SSH Key](http://focs.ji.sjtu.edu.cn/vg100/markdown/env.ssh) if you want to push your local repository to GitHub.

Recommended solution (in CLI):

- Windows10
    - WSL + install git from apt
- MacOS
    - install git from brew
- Otherwise
    - gitbash




### Version Control

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_27ea98baecd76ee3808b349f33491225.png)


#### Init
After installation, there will be a terminal and you can use for all following commands:

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_a654ccd10780d9dc5d71b86beec9bcf4.png)

The simple way of init: Use the git command to set up a repository. 

```shell
git init myrepo
```


#### Add

If you want to add files to version control, using the add commands:

```shell
git add filename
```

Examples:
```shell
git add mycode.c
git add README
```
You can use```git status -s``` to see whether the files have been added or not.



#### Commit

Commit is used to save the changes to local repositories. The format is:
```shell
git commit -m 'message'
```




#### Reset

Reset is used when you want to reset the changes you made. 

#### Remote Repository

![](https://codimd.s3.shivering-isles.com/demo/uploads/upload_78b84b57ddb0ffba7d8106cbcc0b2fe9.png)

Using commands of remote, you can check the branches existed:

```shell
git remote -v
```


#### Clone

Clone is used when you want to copy a git repository to local. The basic command format:

```shell
git clone [url]
```

If you need to cooperate with others or copy one project from github to see the code, you can use clone.

For more information, you can look up git commands on the official website: https://git-scm.com/docs/git-commit




#### SSH-KEY 

Before you want to push something on github (ssh url), you need a ssh key. The procedures to set up a ssh key is:

```shell
ssh-keygen -t rsa -C "caohangrui@sjtu.edu.cn"
```

-t refers to the types of code and the automatic type is rsa. -C refers to the annotation, like the email or something you like. The email is the email that you use to sign up for Github.


Then, you can add SSH-key to the ssh-agent:
```shell
# Make sure the agent is running(if you use git shell, it is running)
$ eval $(ssh-agent -s)
#add the key(when the name of the key files is id_rsa)
$ ssh-add ~/.ssh/id_rsa
```

At last, add the key to github. Copy the id_rsa.pub files(or the name of the files you set up). You can use following commands:

```shell
$ clip < ~/.ssh/id_rsa.pub
```


Click the right upper corner of your account, and find "settings->SSH and GPG keys" and paste the information you copy.



#### Push

Push is used to upload local repository content to a remote repository. The basic command format:
```
git push <remote> <branch>
```




#### Practice:

Clone one repository you set in last week and add some files in it. Test use of push and other commands.

# Lab Design

In this section, we will use a comprehensive problems to illustrate MATLAB plotting, by realizing a three-body simulation in MATLAB.

## Three-body Animation

In classical mechanics, the **three-body problem** is the problem of taking the initial positions and velocities of three point masses and solving for their subsequent motion according to Newton's laws of motion and Newton's law of universal gravitation. Indeed, no general closed-form solution exists, as the resulting dynamical system is chaotic for most initial conditions, and numerical methods are generally required.

In this section, we will simulate the three-body problem in **2D** while using **MVC** to structure the program. 

**Tags**: `#plot` `#function` `#MVC structure`

### MVC: Model - View - Controller

Model-View-Controller, denoted by MVC, is a software design pattern for user interface development. It divides the related program logic into three interconnected blocks so as to enable simultaneous development and encourage code reuse. Besides, future development or modification is easier to applied.

The **model** is responsible for managing the data of the application. It receives user input from the controller. The **view** means presentation of the model in a particular format. The **controller** responds to the user input and performs interactions on the data model objects. It receives the input, optionally validates it and then passes the input to the model. Their relationship can be illustrated as follow:

![](https://mdn.mozillademos.org/files/16042/model-view-controller-light-blue.png)


### Three-body Animation in MVC

You may use the code skeleton provided below to complete the Three-body Animation:

#### View

```matlab
% myView.m

function myView(x)
    clf;
    axis equal
    hold on;
    % TODO: draw three circles with different color
    hold off;
end

function drawCircle(coor,radius,color)
    % TODO: draw a circle with coordinate radius and color
end
```

Perform a unit test after programming. You may try `view([0 0;1 1;2 2])` to check whether your program runs as expected.

#### Model

The equation below might be useful:

$$F=G\cdot \frac{m_{1}\cdot m_{2}\cdot (r_1-r_2)}{\left | (r_1-r_2) \right |^{3}}$$

```matlab
% myModel.m

function [x,v]=myModel(x,v,t)
    x=x+v*t;
    v=v+acc(x)*t;
end

function acceleration=acc(x)
    % TODO: calculate the acceleration due to gravity
end

function force=F(x1,x2)
    % TODO: calculate the gravity force from coordinate x2 to x1
end
```

Perform a unit test after programming.

#### Controller

```matlab
% myController.m

t=0.01;         % time interval
x=rand(3,2)*100;% coordinate
v=rand(3,2)*40; % velocity
while 1
    myView(x);
    [x,v]=myModel(x,v,t);
    pause(0.01)
end
```

Main program.

# Grading Rubric


|      Criteria           | Weight   |Available Time | Due Time | Entry|
| :-----------------:     | :----:   | :----: |  :----: |:----: |
|     Attendance          |  30%     |**4:00pm**, May.29 | **11:59pm**, May.29 | Canvas Assignment|
|In-lab quiz | 70% | **9:00pm**, May.29| **11:59pm**, May.29 | Canvas Quiz |
|Git bonus|10%|**9:00pm**, May.29| **11:59pm**, May.29 | Canvas Quiz |

- For the attendance score, you need to submit your code for **exercises** in the **worksheet** on Canvas. We won't judge the correctness of your code.  You'll earn full credits as long as you've tried these exercises.
- The attendance, in-lab quiz, and the Git bonus will be ceiled together if greater than 100%. 

