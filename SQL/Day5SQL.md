# SQL JOIN

### What is JOIN?

A **JOIN** is used to combine data from **two or more tables** based on a related column between them.

It helps us retrieve related data from multiple tables and generate a **combined result table**.

### Types of JOIN

1. **INNER JOIN**
2. **LEFT JOIN**
3. **RIGHT JOIN**
4. **FULL OUTER JOIN**

---

## 1. INNER JOIN

### Definition

**INNER JOIN** is used to retrieve **only the matching records from both tables**.

If a record does not have a matching value in the other table, it will **not** appear in the result.

### Syntax

```sql
SELECT column1, column2
FROM table1
INNER JOIN table2
ON table1.common_column = table2.common_column;
```

### Example

#### Student Table

| id | name | dept_id |
|---:|---|---:|
| 1 | Rahul | 101 |
| 2 | Amit | 102 |
| 3 | Sneha | 103 |
| 4 | Priya | 104 |

#### Department Table

| dept_id | dept_name |
|---:|---|
| 101 | IT |
| 102 | HR |
| 103 | Sales |
| 105 | Finance |

### Query

```sql
SELECT student.name, department.dept_name
FROM student
INNER JOIN department
ON student.dept_id = department.dept_id;
```

### Result

| name | dept_name |
|---|---|
| Rahul | IT |
| Amit | HR |
| Sneha | Sales |

`Priya` is not included because `dept_id = 104` does not exist in the `department` table.

Similarly, `Finance` is not included because `dept_id = 105` does not exist in the `student` table.

---

## 2. LEFT JOIN

### Definition

**LEFT JOIN** returns **all records from the left table** and the matching records from the right table.

If there is no match, the columns from the right table contain **NULL**.

### Syntax

```sql
SELECT column1, column2
FROM table1
LEFT JOIN table2
ON table1.common_column = table2.common_column;
```

### Example

```sql
SELECT student.name, department.dept_name
FROM student
LEFT JOIN department
ON student.dept_id = department.dept_id;
```

### Result

| name | dept_name |
|---|---|
| Rahul | IT |
| Amit | HR |
| Sneha | Sales |
| Priya | NULL |

**Remember:**  
> LEFT JOIN = All records from LEFT table + matching records from RIGHT table.

---

## 3. RIGHT JOIN

### Definition

**RIGHT JOIN** returns **all records from the right table** and the matching records from the left table.

If there is no match, the columns from the left table contain **NULL**.

### Syntax

```sql
SELECT column1, column2
FROM table1
RIGHT JOIN table2
ON table1.common_column = table2.common_column;
```

### Example

```sql
SELECT student.name, department.dept_name
FROM student
RIGHT JOIN department
ON student.dept_id = department.dept_id;
```

### Result

| name | dept_name |
|---|---|
| Rahul | IT |
| Amit | HR |
| Sneha | Sales |
| NULL | Finance |

**Remember:**  
> RIGHT JOIN = All records from RIGHT table + matching records from LEFT table.

---

## 4. FULL OUTER JOIN

### Definition

**FULL OUTER JOIN** returns **all records from both tables**.

It includes:
- Matching records
- Unmatched records from the left table
- Unmatched records from the right table

Where there is no match, **NULL** is returned.

### Syntax

```sql
SELECT column1, column2
FROM table1
FULL OUTER JOIN table2
ON table1.common_column = table2.common_column;
```

### Example

```sql
SELECT student.name, department.dept_name
FROM student
LEFT JOIN department
ON student.dept_id = department.dept_id

UNION

SELECT student.name, department.dept_name
FROM student
RIGHT JOIN department
ON student.dept_id = department.dept_id;
```

### Result

| name | dept_name |
|---|---|
| Rahul | IT |
| Amit | HR |
| Sneha | Sales |
| Priya | NULL |
| NULL | Finance |

> **Note:** MySQL does not directly support `FULL OUTER JOIN`. It can be achieved using `LEFT JOIN`, `RIGHT JOIN`, and `UNION`.

---

# JOIN Comparison

| JOIN | What it returns |
|---|---|
| **INNER JOIN** | Only matching records from both tables |
| **LEFT JOIN** | All records from left + matching records from right |
| **RIGHT JOIN** | All records from right + matching records from left |
| **FULL OUTER JOIN** | All records from both tables |

### Easy Way to Remember

```text
INNER JOIN  → Matching data only
LEFT JOIN   → Everything from LEFT table
RIGHT JOIN  → Everything from RIGHT table
FULL JOIN   → Everything from BOTH tables
Cross Join →
```

task
create database hero and database honda

honda me tables = quotaion, customer, bill
result table must have 3 join as "all table"

hero me table = customer, diwali table, quotation
bill mhade offer ani discounts 
