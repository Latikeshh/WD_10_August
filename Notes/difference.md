# Comparison of Local, Static Local, and Global Variables in C

The primary differences between **local, global, and static variables** in C revolve around three concepts: **Scope** (where it can be accessed), **Lifetime** (how long it stays in memory), and **Storage Location** (where it lives in RAM).

| Feature | Local Variable | Static Local Variable | Global Variable |
| :--- | :--- | :--- | :--- |
| **Declaration Location** | Inside a function or block `{}`. | Inside a function or block with the `static` keyword. | Outside of all functions. |
| **Scope (Visibility)** | **Block Scope:** Only visible inside the declaring function/block. | **Block Scope:** Only visible inside the declaring function/block. | **Program Scope:** Visible to all functions in the file (and other files using `extern`). |
| **Lifetime** | Temporary. Created on function entry, destroyed on exit. | Permanent. Persists for the entire duration of the program. | Permanent. Persists for the entire duration of the program. |
| **Memory Segment** | **Stack**. | **Data Segment** (BSS if uninitialized, Data if initialized). | **Data Segment** (BSS if uninitialized, Data if initialized). |
| **Default Value** | Garbage (unpredictable value). | Zero (`0`). | Zero (`0`). |

---

### 1. Local Variables (Automatic)
A local variable is the standard variable type used inside functions. 

* **Behavior:** It is created on the **Stack** when the function is called and automatically destroyed when the function exits. If you call the function multiple times, the variable re-initializes every single time.

### 2. Static Local Variables
A static local variable bridges the gap between local and global variables. It has the **limited visibility of a local variable**, but the **permanent lifetime of a global variable**.

* **Behavior:** It is initialized only **once** (when the program starts). When the function ends, the variable does not die; it retains its last value for the next time the function is called.


### 3. Global Variables
A global variable is declared outside of all functions, usually at the very top of your source file.

* **Behavior:** It can be accessed and modified by **any function** anywhere in your program. It remains alive for the complete duration of the program.

> **Note on Static Global Variables:** If you add the `static` keyword to a global variable (e.g., `static int x = 0;`), it restricts its visibility strictly to the file it is declared in, preventing other C source files from accessing it via the `extern` keyword.
