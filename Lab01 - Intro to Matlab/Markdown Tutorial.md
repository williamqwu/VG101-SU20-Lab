# Markdown Tutorial

## Basic Syntax (CommonMark)

### Paragraphs

> A sequence of non-blank lines that cannot be interpreted as other kinds of blocks forms a paragraph. The contents of the paragraph are the result of parsing the paragraph’s raw content as inlines. The paragraph’s raw content is formed by concatenating the lines and removing initial and final whitespace. 
>
> Final spaces are stripped before inline parsing, so a paragraph that ends with two or more spaces will not end with a hard line break:[^2]

[^2]:Quoted form https://github.github.com/gfm/#paragraphs

Summary

- Paragraph: The raw content typed in, with two blank lines around.
- The markdown parser will normally omit the extra spaces
- Two or more spaces at the end of a paragraph will make a line break [^1]

_Just **copy** the code into the blank line and see the result._ 



```markdown
aaa  
aaaaaaaa
aaa

aaaaaaaaaaaaaa

   aaaaaaaaaa

a                  aaaaaaaaaa

Markdown is amazing.
```

[^1]: Many Markdown parser may not strictly follow the rules in CommonMarks. They tend to be more friendly and comfortable for typing and visualizing. (e.g. allow user to put in any number of spaces). This means the Markdown documents rendered on GitHub may not be same as what you see in other editors.

### Header



```markdown
# This is an h1 tag
## This is an h2 tag
###### This is an h6 tag
```

#### Emphasis



```markdown
*This text will be italic*

**This text will be bold**
```

#### Lists

##### Unordered



```markdown
* Item 1
* Item 2
  * Item 2a
  * Item 2b
```

##### Ordered



```markdown
1. Item 1
2. Item 2
3. Item 3
   1. Item 3a
   2. Item 3b
```

#### Images



```markdown
![awsl](https://s2.ax1x.com/2019/09/17/n5Sve1.jpg)
```

#### Links



```markdown
[Scarlet's blog](https://scarlet-climax.github.io/)

https://scarlet-climax.github.io/ - automatic!
```

#### Blockquotes



```markdown
> Many Markdown parser may not strictly follow the rules in CommonMarks. 
> 
> They tend to be more friendly and comfortable for typing and visualizing. 
> 
> This means the Markdown documents rendered on GitHub  
> may not be same as what you see in other editors.
```

#### Inline code



```markdown
Python use `^` to denote xor operator，while `**` stands for power operator.
That means, for python, `3^3==0` and `3**3==81`.
```

### Extended Markdown Syntax (GitHub Flavored Markdown, GFM)

GitHub made a dialect of Markdown called GitHub Flavored Markdown (GFM). GFM is a superset of CommonMark. It supports table, task list, syntax highlighting and strikethrough, which facilitates the communication on GitHub.

#### Syntax Highlighting



~~~markdown
```cpp
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```
~~~

#### Task Lists



```markdown
- [x] moyu
- [x] l4d2
- [ ] VP260 Assignment
- [ ] VV286 Assignment
- [ ] VE215 Assignment
- [ ] VE270 Lab
- [ ] VE300 Assignment
```

#### Tables



```markdown
A | B | $\oplus$ 
--- | - | - 
0 | 0 | 0 
0 | 1 | 1 
1 | 0 | 1 
1 | 1 | 0 
```

#### Strikethrough 删除线



```markdown
~~Don't you think Markdown is easy and also useful?~~
```


