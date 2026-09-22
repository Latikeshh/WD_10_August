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
        ├─────┼─────┼─────┤    ├─────┼─────┼─────┤    ├─────┼─────┼─────┤
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
