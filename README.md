# ✨ ft_printf

<p align="center">
  Reimplementation of the standard C <code>printf</code> function  
  <br>
  <i>42 School Project · Low-level formatting · Variadic functions</i>
</p>

---

## 📌 Overview

`ft_printf` is a custom implementation of the standard C `printf` function.

This project focuses on reproducing formatted output behavior using:

* variadic arguments (`stdarg.h`)
* manual format parsing
* low-level system calls (`write`)

---

## ⚙️ Supported Conversions

```txt
%c   character
%s   string
%p   pointer
%d   decimal (base 10)
%i   integer
%u   unsigned integer
%x   hexadecimal (lowercase)
%X   hexadecimal (uppercase)
%%   percent sign
```

---

## 🧩 Architecture

```txt
                +------------------+
                |   ft_printf      |
                +--------+---------+
                         |
                         v
                format string loop
                         |
           +-------------+-------------+
           |                           |
           v                           v
   normal character             '%' detected
           |                           |
           v                           v
     ft_putchar                 ft_format
                                      |
        +-----------------------------+-----------------------------+
        |        |        |        |        |        |        |
        v        v        v        v        v        v        v
      %c       %s       %d/i     %u       %x       %X       %p
   putchar   putstr   putnbr   putuint   hexlow   hexup   pointer
```

---

## ⚡ Key Features

### 🔹 Modular design

Each conversion is handled in a dedicated file:

* clear separation of concerns
* easier debugging and maintenance

### 🔹 Recursive number printing

* used for integers and hexadecimal conversions
* ensures correct digit order without buffers

### 🔹 Pointer safety

* addresses stored as `unsigned long`
* prevents truncation on 64-bit systems

### 🔹 Robust error handling

* shared `count` variable across all functions
* if `write` fails → `count = -1`
* execution stops immediately

---

## 🧠 Implementation Details

| Feature        | Behavior                  |
| -------------- | ------------------------- |
| String (`%s`)  | `NULL → (null)`           |
| Pointer (`%p`) | `NULL → (nil)`            |
| Output         | uses `write` only         |
| Counting       | total characters tracked  |
| Integers       | cast to `long` for safety |

---

## 📁 Project Structure

```bash
ft_printf/
├── ft_printf.c
├── ft_printf.h
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putunsignedint.c
├── ft_puthexlower.c
├── ft_puthexupper.c
├── ft_putpointer.c
├── Makefile
└── libft/
```

---

## 🛠️ Build

```bash
make
```

Output:

```bash
libftprintf.a
```

---

## 🧹 Clean

```bash
make clean
make fclean
make re
```

---

## 🚀 Usage

```c
#include "ft_printf.h"
```

```bash
cc main.c libftprintf.a
```

---

## 💡 Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

---

## 📚 Allowed Functions

```txt
malloc
free
write
va_start
va_arg
va_copy
va_end
```

---

## ⚠️ Limitations

Mandatory part only:

```txt
no flags
no width
no precision
no length modifiers
```

---

## 🎯 Learning Outcomes

* Variadic argument handling
* Format string parsing
* Recursive algorithms
* Base conversion (decimal / hexadecimal)
* Low-level I/O
* Clean modular C design

---

## 👤 Author

Psyche0920
https://github.com/Psyche0920

---

<p align="center">
  ⭐ If you find this project useful, feel free to star it!
</p>
