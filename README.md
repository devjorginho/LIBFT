
# Libft Project

Libft is a collection of essential functions written in C, which are often needed when working on C projects. The purpose of this project is to implement some of the basic functions provided by the C standard library, allowing the user to re-implement these from scratch and better understand how they work. It's also a crucial step in mastering C programming.

---

## 🧪 Example Usage

```c
#include "libft.h"

int main(void)
{
    char *str = "42 Lisbon!";
    int len = ft_strlen(str);
    printf("The length of the string is: %d
", len);
    return (0);
}
```

---

## ✅ Project Rules

- ❌ Not allowed to use any standard library functions (except `write`, `malloc`, `free`).
- ✅ You must re-implement common C functions like `strlen`, `strcpy`, `memset`, and more.
- ❌ Avoid using external libraries or dependencies.
- ✅ Functions must be implemented in pure C, focusing on optimization and efficiency.
- ✅ You must adhere to 42's coding standards and style guide.

---

## 📁 Project Structure

- `libft.h` — Header file with function prototypes.
- `srcs/` — Folder containing the implementation of functions.
  - `ft_memset.c` — Implementation of `memset`.
  - `ft_strlen.c` — Implementation of `strlen`.
  - `ft_strcpy.c` — Implementation of `strcpy`.
  - `ft_bzero.c` — Implementation of `bzero`.
  - `ft_isdigit.c` — Implementation of `isdigit`, etc.
- `Makefile` — Makefile to compile the project and generate the library.

---

## 🚀 Status

✅ Fully implemented  
✅ Passed all official 42 test cases  
✅ Optimized for performance and memory management

---

## 📜 License

This is an educational project developed at [42 Lisboa](https://42lisboa.com).  
Feel free to use and adapt for learning purposes.  


~ constantly climbing 🚀 .

---
