# 🚀 Libft Tester

This repository contains a **test suite** designed to validate every function in the **Libft** (Your first library) from the 42 curriculum.

The main goal is to ensure that each implementation (`ft_strlen`, `ft_calloc`, `ft_split`, etc.) behaves identically to its original `libc` function or strictly adheres to the project's specifications.

---

## 🎯 Test Coverage

The *tester* includes tests for all functions in the mandatory part and the *bonus* functions (if implemented).

### I. Part 1: libc Functions

Functions that replicate the behavior of the original C standard library (libc) functions are tested:

| Category | Covered Functions |
| :--- | :--- |
| **Character Classification** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| **Memory Manipulation** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| **String Manipulation** | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| **Allocation and Conversion** | `ft_atoi`, `ft_calloc`, `ft_strdup` |
| **Security Functions (BSD)** | `ft_strlcpy`, `ft_strlcat` |

### II. Part 2: Additional Functions

General-purpose functions that are not part of `libc` or have a distinct behavior are tested:

| Name | Description | Authorized Functions |
| :--- | :--- | :--- |
| `ft_substr` | Creates a substring from an index and a maximum length. | `malloc`|
| `ft_strjoin` | Concatenates two strings into a new one allocated with `malloc`. | `malloc` |
| `ft_strtrim` | Removes initial and final characters from a given set. | `malloc`  |
| `ft_split` | Splits a string by a delimiter (`c`) into a `NULL`-terminated array of strings. | `malloc`, `free` |
| `ft_itoa` | Converts an integer (`int`) into its string representation. | `malloc` |
| `ft_strmapi` | Applies a function to each character of a string, creating a new one. | `malloc` |
| `ft_striteri` | Iterates a string, applying a function that can modify the character. | None |
| `ft_put*` | Writing functions to a *file descriptor* (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`). | `write`|

### III. Bonus Part: Linked Lists

If the mandatory part is perfect, this section tests the manipulation of the linked list structure `t_list`:

* **Creation:** `ft_lstnew` 
* **Addition:** `ft_lstadd_front`, `ft_lstadd_back` 
* **Information:** `ft_lstsize`, `ft_lstlast` 
* **Deletion:** `ft_lstdelone`, `ft_lstclear` 
* **Iteration and Mapping:** `ft_lstiter`, `ft_lstmap`

---
## ⚙️ Usage and Integration

### 1. Requirements

Make sure your functions **are** compiled into a file named **`libft.a`** and that their prototype is available in a header file named **`libft.h`**. Both files must be located in the **root directory** of this test repository.

### 2. Compilation and Linking

#### 2.1. Library Preparation

Ensure you have previously run the `make` command in your `libft` repository to generate the **`libft.a`** file.

#### 2.2. Linking the Tests

Once you have `libft.a` ready, you can compile the test file and **link it** with your library using the following command:

```bash
cc test_file_name.c -L. -lft -o test_runner
```

**⚠️ Replace** `test_file_name.c` with the name of the test file you want to execute (e.g., `test_atoi.c`).

---

## 💡 Explanation of the linking
| Flag | Purpose | Explanation |
| :--- | :--- | :--- |
| **`-L.`** | Library path | Indicates to the linker to search for static libraries in the **current directory** (`.`). |
| **`-lft`** | Library name | Tells to the linker to search for a library called **`libft.a`** in the specified paths. |
---
### 3. Execution
After compiling and linking, execute the genereted test program:
```bash
./test_runner
```
---


## 🤝 Contributions (Reporting Issues)

Contributions are highly welcome and are crucial for improving the quality of this test suite!

If you encounter any of the following issues, please **open an issue** in this repository:

1.  **False Negative:** If you believe your funtion works correctly, but the test suite marks a **FAIL**.
2.  **False Positive:** If you know your function has a bug, but the test marks **PASS** (meaning a test case is missing).
3.  **Tester Errors:** If you find any errors in the syntax, logic, or compilation of the tester code itself.

---

### How to Contribute

1.  **Report an Issue:** Open a new *Issues* tab on GitHub and describe the error you found, including the **exact test case** that is failing or missing.
2.  **Submit a Pull Request (Optional):** If you have created a new test to fix the problem, you can directly submit a *Pull Request* for us to review and integrate.

**Your collaboration ensures that this test suite is as robust and complete as possible for the entire community.**

---
A **Spanish** version of the README is also available (see document `README_es.md`)
