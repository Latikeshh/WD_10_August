# 3️⃣ Three-Dimensional Array

* A **3D array** is also known as a **multi-dimensional array**.
* A 3D array has **3 dimensions**, means it uses **3 indexes**.
* It is a **collection of 2D arrays**.
* We can assume a 3D array like a **cube**.
* It contains **layers, rows and columns**.
* The three indexes represent:

  * **1st index → 2D array / Layer**
  * **2nd index → Row**
  * **3rd index → Column**

### Visualized

> `[ ] [ ]`
> `[ ] [ ]`
>
> `[ ] [ ]`
> `[ ] [ ]`

Here, we can assume the above as **2 layers**, where each layer contains **2 rows × 2 columns**.

### Syntax

> `datatype arrName[no_of_2D][no_of_row][no_of_col] = {{{}, {}, ...}};`

### Simple Example

```c
int marks[2][2][2] = {
    {
        {10, 20},
        {30, 40}
    },
    {
        {50, 60},
        {70, 80}
    }
};
```

### Easy Understanding

Think of it like a **building**:

> **Layer → Floor**
> **Row → Row on the floor**
> **Column → Position in the row**

So:

> `marks[1][0][1]`

means:

* `1` → 2nd layer
* `0` → 1st row
* `1` → 2nd column
* Value → `60`

### Example Structure

**Layer 1**

> `[10] [20]`
> `[30] [40]`

**Layer 2**

> `[50] [60]`
> `[70] [80]`

So a **3D array = collection of 2D arrays**.


```text
                            3D ARRAY : int a[3][2][3]

                LAYER 0                 LAYER 1                 LAYER 2
                   ↓                       ↓                       ↓

                ┌─────┬─────┬─────┐    ┌─────┬─────┬─────┐    ┌─────┬─────┬─────┐
           0 →  │ 000 │ 001 │ 002 │    │ 100 │ 101 │ 102 │    │ 200 │ 201 │ 202 │
    Rows        ├─────┼─────┼─────┤    ├─────┼─────┼─────┤    ├─────┼─────┼─────┤
           1 →  │ 010 │ 011 │ 012 │    │ 110 │ 111 │ 112 │    │ 210 │ 211 │ 212 │
                └─────┴─────┴─────┘    └─────┴─────┴─────┘    └─────┴─────┴─────┘
                  ↑     ↑     ↑            ↑     ↑     ↑            ↑     ↑     ↑
                  0     1     2            0     1     2            0     1     2
                columns                 columns                 columns

                    └────── 2 Rows × 3 Columns ──────┘

Index format:

        [ Layer ][ Row ][ Column ]

        a[0][0][0] = 000
        a[0][1][2] = 012

        a[1][0][1] = 101
        a[1][1][2] = 112

        a[2][0][0] = 200
        a[2][1][2] = 212

```
## Array Using `char`

A `char` array is an array used to store multiple characters.

### Syntax

`returntype arrname[size] = {elements};`

### Example

```c
char myarrr[5] = {'A', 'B', 'C', 'D', 'E'};
```

Here:

* `char` → Data type of the array
* `myarrr` → Name of the array
* `[5]` → Array can store **5 characters**
* `'A'`, `'B'`, `'C'`, `'D'`, `'E'` → Characters stored in the array
* Each character gets its own index.

### Index Representation

```text
Index:    0    1    2    3    4
Value:   'A'  'B'  'C'  'D'  'E'
```

For example:

```c
printf("%c", myarrr[0]);
```

Output:

```text
A
```

The index starts from `0`, so the last element of a 5-element array is at index `4`.

---

## String Literals

A string literal is a sequence of characters written inside **double quotes**.

### `' '` → Single Character

Single quotes are used for **one character**.

```c
char ch = 'A';
```

Here, `'A'` is a single character.

```text
'A' → One character
```

---

### `" "` → Collection of Characters / String

Double quotes are used for a **string**, which is a collection of characters.

```c
char name[] = "Rahul";
```

Here:

```text
"Rahul"
 ↓
R  a  h  u  l  \0
```

The compiler adds a **null character `'\0'`** at the end of the string.

So `"Rahul"` needs **6 characters of storage**, including `'\0'`.

---

### `'" "'` → When You Want Double Quotes as Characters

If you want to store or print a **double quote character** inside a character/string context, it can be represented using a single quote around it:

```c
char quote = '"';
```

Here:

```text
'"' → One double-quote character
```

For a complete quoted sentence, use double quotes around the string and escape the inner quotes:

```c
printf("\"Hello World\"");
```

Output:

```text
"Hello World"
```

---

## Null Character

The null character is:

```c
'\0'
```

**Not:**

```c
'/o'
```

`'\0'` is used to mark the **end of a string**.

Example:

```text
H  e  l  l  o  \0
```

The `\0` tells C that the string has ended.

### Example

```c
char str[] = {'H', 'i', '\0'};
```

This is a string containing:

```text
H → Character
i → Character
\0 → End of string
```

---

## String Array Syntax

### Syntax

`char str[] = {elements};`

Example:

```c
char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

This can also be written more simply as:

```c
char str[] = "Hello";
```

Both represent the string:

```text
H  e  l  l  o  \0
```

### Simple Understanding

```text
char array
     ↓
['A'] ['B'] ['C'] ['D'] ['E']


String
     ↓
```
login user id and password using str compare `strcmp`