# 0x16. C - Simple Shell
---
## Description
* Write a simple UNIX command interpreter.
* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* What is a pid and a ppid
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of main
* How does the shell use the PATH to find the programs
* How to execute another program with the execve system call
* How to suspend the execution of a process until one of its children terminates
* What is EOF / “end-of-file”?

## Files
---
File|Contents
---|---
builtins.c | exit_sh, cd, printenv, checkBuiltins - functions
env.c | env - function to write enviroment
execute.c | execute - function to execute, implement fork and child process
getcommand.c | get_line, split_line - functions get input from stdin and tokenize
getpath.c | pathCat, get_env, dirTok, checkPath - functions get PATH from environment
handler.c | handler - function to handle when a signal is passed
helper.c | _strcmp, _strdup, _strlen - helper functions used throughout
loop.c | main loop to initiate shell
main.c | main function that calls loop
prompt.c | prompt - function to print prompt "$ "
shell.h | header file with libraries and prototypes

Directory Name | Description
---|---
simple_shell |A simple UNIX command interpreter

## How to compile
gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
_gcc -Wall -Werror -Wextra -pedantic *.c -o hsh_
## More Info
All files are formatted in Betty style and checked using betty-style.pl and betty-doc.pl
All header files are guarded
## Example
####The shell should work like this in interactive mode:
*$ ./hsh*
*($) /bin/ls*
*hsh main.c shell.c*
*($)*
*($) exit*
*$*

####Also like this in non-interactive mode:
*$ echo "/bin/ls" | ./hsh*
*hsh main.c shell.c test_ls_2*
*$*
*$ cat test_ls_2*
*/bin/ls*
*/bin/ls*
*$*
*$ cat test_ls_2 | ./hsh*
*hsh main.c shell.c test_ls_2*
*hsh main.c shell.c test_ls_2*
*$*

## Authors
Brandyn Reindel & Osama Basheer