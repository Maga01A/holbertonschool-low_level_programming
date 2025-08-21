# More malloc, free

This project is part of **Holberton School Low Level Programming**.

## Task 0: malloc_checked
Write a function that allocates memory using **malloc**.

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory.
- If malloc fails, the function should cause normal process termination with a status value of `98`.

### Files
- **0-malloc_checked.c** → Implementation of malloc_checked
- **main.h** → Header file with prototype
- **0-main.c** → Test file (given by Holberton)

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```
