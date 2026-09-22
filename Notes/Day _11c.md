# Data Types in C

### Basic Data Types

* `int`
* `char`
* `float`

---

### Derived Data Types

* They depend on basic data types.
* They are created using basic data types.

## **Array**

* It is a derived data type which depends on basic data types.
* It is used to store a collection of elements of the **same data type**.
* Elements are accessed using the **same variable name** with an index.
* We cannot store different data types in the same array.
* Array indexing starts from `0`.

### Applications

* Easy for sorting
* Indexing starts from `0`
* Code optimization
* Useful for storing multiple values under one variable name

### Types of Array

1. **1D Array**
2. **2D Array**
3. **3D Array**

### Syntax of Array

> `ReturnType arrayName[size] = {elements};`

---

### 1️⃣ One-Dimensional Array

* Looks like a list.
* Has **one dimension**.
* Uses **one index** to access an element.
* It stores elements in a single row.

**Example of structure:**

> `[ ] [ ] [ ] [ ]`

```c
int a[4] = {12, 12, 12, 12};
```

**Index representation:**

> `[12] [12] [12] [12]`
> `  0    1    2    3`

---

### 2️⃣ Two-Dimensional Array

1. 2D array has **2 dimensions**. It will have **2 indexes**.
2. Looks like a **table**.
3. It is a **collection of 1D arrays**.
4. It contains **rows and columns**.
5. The first index represents the **row** and the second index represents the **column**.

### Visualized

> `[--] [--] [--]`
> `[--] [--] [--]`
> `[--] [--] [--]`

### **Row counting is 1D array count**

* Each row can be treated as a **1D array**.
* Example: A 3 × 2 array has **3 rows** and **2 columns**.

### Syntax

> `returnType arrayName[row][col] = {{}, {}};`

```c
int mark[3][2] = {
    {12, 24},
    {36, 48},
    {50, 60}
};
```

**Example:**

> `[12] [24]`
> `[36] [48]`
> `[50] [60]`

Here:

* `3` → Number of **rows**
* `2` → Number of **columns**
* `mark[0][0]` → `12`
* `mark[1][0]` → `36`
* `mark[2][1]` → `60`

### Simple Understanding

Think of a 2D array like a **school marks table**:

> `Row 0 → [12] [24]`
> `Row 1 → [36] [48]`
> `Row 2 → [50] [60]`

So, to access a value, we use:

> `array[row][column]`

---

### Other Derived Data Types

* Structure
* Union
* Pointer
