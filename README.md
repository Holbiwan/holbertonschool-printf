# **C – printf**

## **Description**

This repository contains a new version of the _printf() function in the standard library (stdio.h).
Its purpose is to display text and an indefinite number of variables according to precise rules.	

![This is an image](https://zupimages.net/up/23/30/9a23.png)

## **Requirements**
-	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-	All your files should end with a new line
-	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-	You are not allowed to use global variables
-	No more than 5 functions per file
-	The prototypes of all your functions should be included in your header file called main.h
-	All your header files should be include guarded
## **Authorized functions and macros**
  - `write` (`man 2 write`)
  - `malloc` (`man 3 malloc`)
  - `free` (`man 3 free`)
  - `va_start` (`man 3 va_start`)
  - `va_end` (`man 3 va_end`)
  - `va_copy` (`man 3 va_copy`)
  - `va_arg` (`man 3 va_arg`)

## **Files Description**

Specifiers characters at the end define the type and the interpretation of its corresponding argument:


| Specifier  | Output          |
|------------|-----------------|
| `c`        | character       |
| `s`        | string          |
| `%`        | %               |
| `d`        | Signed integer  |
| `i`        | Signed integer  |

|**Functions**|**Description**|
|--------|---------------|
|get_function|For test the specifier character|
|_putchar|Prints characters|:pushpin:
|printf|Prints the output according format|
|print_str|Prints strings|
|print_char|Prints characters|
|print_dec|Prints integers|

## **Compilation** 
•	Your code will be compiled this way:

```

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```
## Mandatory Tasks :warning:


### **0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**

* Write a function that produces output according to a format.

### **1. Education is when you read the fine print. Experience is what you get if you don't**

* Handle the following conversion specifiers.

### **2. Just because it's in print doesn't mean it's the gospel**

* Create a man page for your function.


## **Flowchart**
![flowchart](https://zupimages.net/up/23/30/vzp5.jpg)

*********


## Authors :pencil2:

Sabrina Papeau  - [Github](https://github.com/Holbiwan)

Claudine Sillam - [Github](https://github.com/Coconuts-del)
