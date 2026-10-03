# 🔧 Functions in SQL

A **Function in SQL** is used to perform a specific task on data.

For example, functions can be used to:

* Find the **total salary**
* Count the **number of entries**
* Find the **maximum or minimum value**
* Calculate the **average value**

## 📌 Types of Functions

There are mainly **2 types of SQL Functions**:

1. **SRF — Single Row Function**
2. **MRF — Multiple Row Function**

---

## 1️⃣ SRF — Single Row Function

**SRF (Single Row Function)** works on **one row at a time** and returns **one result for each input row**.

### 📊 Input → Output

```text
1 Row → 1 Result
```

### Example

```sql
SELECT UPPER(name)
FROM student;
```

If the table contains:

| name  |
| ----- |
| rahul |
| amit  |
| rohan |

Output:

| UPPER(name) |
| ----------- |
| RAHUL       |
| AMIT        |
| ROHAN       |

Here, each row is processed separately.

---

## 2️⃣ MRF — Multiple Row Function

**MRF (Multiple Row Function)** works on **multiple rows together** and returns **one result** for the group of rows.
in MRf there are multiple input but single output

### 📊 Input → Output

```text
Multiple Rows → 1 Result
```

### Example

```sql
SELECT SUM(salary)
FROM employee;
```

If salaries are:

| salary |
| -----: |
|  20000 |
|  25000 |
|  30000 |

Output:

| SUM(salary) |
| ----------: |
|       75000 |

Here, `SUM()` processes multiple rows and returns one result.

---

## 📝 Quick Difference

| Function Type | Input           | Output                | Example   |
| ------------- | --------------- | --------------------- | --------- |
| **SRF**       | 1 row at a time | 1 result for each row | `UPPER()` |
| **MRF**       | Multiple rows   | 1 result              | `SUM()`   |

> 💡 **Remember:**
> **SRF:** `1 Row → 1 Result`
> **MRF:** `Multiple Rows → 1 Result`
