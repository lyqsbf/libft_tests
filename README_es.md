# 🚀 Libft Tester Suite

Este repositorio contiene una **suite de pruebas** diseñada para validar cada función de la **Libft** (Tu primera librería) del currículo 42.

El objetivo principal es asegurar que cada implementación (`ft_strlen`, `ft_calloc`, `ft_split`, etc.) se comporte de manera idéntica a su función original de la `libc` o cumpla estrictamente con las especificaciones del proyecto.

---

## 🎯 Cobertura de Tests

El *tester* incluye pruebas para todas las funciones de la parte obligatoria y las funciones *bonus* (si están implementadas).

### I. Parte 1: Funciones de libc

Se prueban las funciones que replican el comportamiento de las funciones originales de la librería estándar de C (libc):

| Categoría | Funciones Cubiertas |
| :--- | :--- |
| **Clasificación de Caracteres** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| **Manipulación de Memoria** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| **Manipulación de Cadenas (Strings)** | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| **Asignación y Conversión** | `ft_atoi`, `ft_calloc`, `ft_strdup` |
| **Funciones de Seguridad (BSD)** | `ft_strlcpy`, `ft_strlcat` |

### II. Parte 2: Funciones Adicionales

Se prueban las funciones de propósito general que no forman parte de la `libc` o tienen un comportamiento distinto:

| Nombre | Descripción | Funciones Autorizadas |
| :--- | :--- | :--- |
| `ft_substr` | Crea una subcadena a partir de un índice y una longitud máxima. | `malloc`|
| `ft_strjoin` | Concatena dos cadenas en una nueva reservada con `malloc`. | `malloc` |
| `ft_strtrim` | Elimina caracteres iniciales y finales de un conjunto (`set`) dado. | `malloc`  |
| `ft_split` | Separa una cadena por un delimitador (`c`) en un *array* de *strings* terminado en `NULL`. | `malloc`, `free` |
| `ft_itoa` | Convierte un entero (`int`) en su representación como cadena. | `malloc` |
| `ft_strmapi` | Aplica una función a cada carácter de una cadena creando una nueva. | `malloc` |
| `ft_striteri` | Itera una cadena aplicando una función que puede modificar el carácter. | Ninguna |
| `ft_put*` | Funciones de escritura a *file descriptor* (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`). | `write`|

### III. Parte Bonus: Listas Enlazadas

Si la parte obligatoria es perfecta, esta sección prueba la manipulación de la estructura de lista enlazada `t_list`:

* **Creación:** `ft_lstnew` 
* **Adición:** `ft_lstadd_front`, `ft_lstadd_back` 
* **Información:** `ft_lstsize`, `ft_lstlast` 
* **Eliminación:** `ft_lstdelone`, `ft_lstclear` 
* **Iteración y Mapeo:** `ft_lstiter`, `ft_lstmap`

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
