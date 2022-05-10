## An implementation of sh in C programming language

---

### Overview

---

### Table of contents
---
* Overview
* Table of contents
* General Requirements
* Authorized functions and macros
* Compilation
* Tasks
* Installation
* Examples
* Authors

---
Requirements
---
General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to (why?)

More Info
---
### Output
- Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
- The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

Example of error with sh:

```

$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$

```

Same error with your program hsh:

```

$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$

```

---














