# 🚀 Libft Tester Suite

[cite_start]Este repositorio contiene una **suite de pruebas integral y exhaustiva** diseñada para validar cada función de la **Libft** (Tu primera librería) [cite: 1] del currículo 42.

[cite_start]El objetivo principal es asegurar que cada implementación (`ft_strlen`, `ft_calloc`, `ft_split`, etc.) se comporte de manera idéntica a su función original de la `libc` o cumpla estrictamente con las especificaciones del proyecto[cite: 55, 56].

---

## 🎯 Cobertura de Tests

El *tester* incluye pruebas para todas las funciones de la parte obligatoria y las funciones *bonus* (si están implementadas).

### I. Parte 1: Funciones de libc

[cite_start]Se prueban las funciones que replican el comportamiento de las funciones originales de la librería estándar de C (libc)[cite: 53]:

| Categoría | Funciones Cubiertas |
| :--- | :--- |
| **Clasificación de Caracteres** | [cite_start]`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` [cite: 61, 62, 63, 64, 65, 73, 74] |
| **Manipulación de Memoria** | [cite_start]`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` [cite: 67, 68, 69, 70, 78, 79] |
| **Manipulación de Cadenas (Strings)** | [cite_start]`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` [cite: 66, 75, 76, 77, 80] |
| **Asignación y Conversión** | [cite_start]`ft_atoi`, `ft_calloc`, `ft_strdup` [cite: 81, 83, 84] |
| **Funciones de Seguridad (BSD)** | [cite_start]`ft_strlcpy`, `ft_strlcat` [cite: 71, 72] |

### II. Parte 2: Funciones Adicionales

[cite_start]Se prueban las funciones de propósito general que no forman parte de la `libc` o tienen un comportamiento distinto[cite: 92]:

| Nombre | Descripción | Funciones Autorizadas |
| :--- | :--- | :--- |
| `ft_substr` | [cite_start]Crea una subcadena a partir de un índice y una longitud máxima[cite: 106, 107]. | [cite_start]`malloc` [cite: 110] |
| `ft_strjoin` | [cite_start]Concatena dos cadenas en una nueva reservada con `malloc`[cite: 104]. | [cite_start]`malloc` [cite: 104] |
| `ft_strtrim` | [cite_start]Elimina caracteres iniciales y finales de un conjunto (`set`) dado[cite: 127, 130]. | [cite_start]`malloc` [cite: 129] |
| `ft_split` | [cite_start]Separa una cadena por un delimitador (`c`) en un *array* de *strings* terminado en `NULL`[cite: 144, 149]. | [cite_start]`malloc`, `free` [cite: 147] |
| `ft_itoa` | [cite_start]Convierte un entero (`int`) en su representación como cadena[cite: 151]. | [cite_start]`malloc` [cite: 151] |
| `ft_strmapi` | [cite_start]Aplica una función a cada carácter de una cadena creando una nueva[cite: 151]. | [cite_start]`malloc` [cite: 151] |
| `ft_striteri` | [cite_start]Itera una cadena aplicando una función que puede modificar el carácter[cite: 153]. | [cite_start]Ninguna [cite: 153] |
| `ft_put*` | [cite_start]Funciones de escritura a *file descriptor* (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)[cite: 153, 155]. | [cite_start]`write` [cite: 153, 155] |

### III. Parte Bonus: Listas Enlazadas

[cite_start]Si la parte obligatoria es perfecta [cite: 178][cite_start], esta sección prueba la manipulación de la estructura de lista enlazada `t_list`[cite: 171]:

* [cite_start]**Creación:** `ft_lstnew` [cite: 195]
* [cite_start]**Adición:** `ft_lstadd_front`, `ft_lstadd_back` [cite: 207, 244]
* [cite_start]**Información:** `ft_lstsize`, `ft_lstlast` [cite: 225, 235]
* [cite_start]**Eliminación:** `ft_lstdelone`, `ft_lstclear` [cite: 250, 255]
* [cite_start]**Iteración y Mapeo:** `ft_lstiter`, `ft_lstmap` [cite: 281, 289]

---

## ⚙️ Uso e Integración

### 1. Requisitos

Asegúrate de que tu `ft_printf` esté compilada en un archivo llamado **`libftprintf.a`** y que su prototipo esté disponible en un archivo de cabecera llamado **`ft_printf.h`**. Ambos archivos deben estar ubicados en el **directorio raíz** de este repositorio de tests.

### 2. Compilación y Enlazado (Linking)

#### 2.1. Preparación de la Librería

Asegúrate de haber ejecutado previamente el comando `make` en tu repositorio de `ft_printf` para generar el archivo **`libftprintf.a`**.

#### 2.2. Enlazado de los Tests

Una vez que tengas `libftprintf.a` lista, puedes compilar el archivo de pruebas y **enlazarlo** con tu librería usando el siguiente comando:

```bash
cc nombre_del_test.c -L. -lftprintf -o test_runner
```
