# 🛠️ ALTER Queries

`ALTER TABLE` is used to **change the structure of an existing table**.

It can be used to:

* Add a new column
* Add a column at a specific position
* Modify a column's datatype
* Rename a column
* Delete a column
* Change other table properties

> **Note:** `ALTER` changes the **structure/schema** of the table, not the actual data values.

---

# 🔥 DROP vs DELETE vs TRUNCATE

These three commands are often confused because all of them can remove data, but they work at different levels.

| Feature                             | `DELETE`                 | `TRUNCATE`          | `DROP`              |
| ----------------------------------- | ------------------------ | ------------------- | ------------------- |
| Removes rows                        | ✅ Yes                    | ✅ Yes               | ✅ Yes               |
| Removes table structure             | ❌ No                     | ❌ No                | ✅ Yes               |
| Table remains                       | ✅ Yes                    | ✅ Yes               | ❌ No                |
| Can use `WHERE`                     | ✅ Yes                    | ❌ No                | ❌ No                |
| Deletes selected rows               | ✅ Yes                    | ❌ No                | ❌ No                |
| Deletes all rows                    | ✅ Yes                    | ✅ Yes               | ✅ Yes, with table   |
| Usually faster for all rows         | ❌                        | ✅                   | ✅                   |
| Can reset `AUTO_INCREMENT` in MySQL | ❌ Usually no             | ✅ Yes               | Table is removed    |
| `WHERE` condition                   | ✅ Supported              | ❌ Not supported     | ❌ Not supported     |
| Main purpose                        | Remove specific/all rows | Empty table quickly | Remove entire table |

---

# 🔄 ALTER vs DELETE vs TRUNCATE vs DROP

| Command    | Works Mainly On       | What It Does              |
| ---------- | --------------------- | ------------------------- |
| `ALTER`    | Table structure       | Changes table structure   |
| `DELETE`   | Rows                  | Removes selected/all rows |
| `TRUNCATE` | Rows                  | Removes all rows          |
| `DROP`     | Table/database object | Removes the entire object |

---

# 📝 Important SQL Examples

### Add column

```sql
ALTER TABLE student
ADD COLUMN email VARCHAR(100);
```

### Add column after another column

```sql
ALTER TABLE student
ADD COLUMN salary INT
AFTER name;
```

### Add column at beginning

```sql
ALTER TABLE student
ADD COLUMN student_status VARCHAR(20)
FIRST;
```

### Modify datatype

```sql
ALTER TABLE student
MODIFY salary DECIMAL(10,2);
```

### Rename column

```sql
ALTER TABLE student
CHANGE name username VARCHAR(50);
```

### Delete column

```sql
ALTER TABLE student
DROP COLUMN email;
```

### Delete selected rows

```sql
DELETE FROM student
WHERE id = 5;
```

### Delete all rows

```sql
DELETE FROM student;
```

### Remove all rows using TRUNCATE

```sql
TRUNCATE TABLE student;
```

### Remove entire table

```sql
DROP TABLE student;
```

---

# 🎯 Quick Revision

```text
ALTER
→ Change table structure

ADD
→ Add column

MODIFY
→ Change datatype/definition

CHANGE
→ Rename column + define datatype

DROP COLUMN
→ Remove a column

DELETE
→ Remove rows
→ WHERE is allowed

TRUNCATE
→ Remove all rows
→ WHERE is NOT allowed
→ Table remains

DROP TABLE
→ Remove entire table
→ Data + structure removed
```

### DISTINCT is use for unique data returning 
---
### (1) Use of SELECT keyword with eg

### (2) Use of ALTER keyword with eg

### (3) Explain order by clause with eg

### (4) Explain where clause with eg

### (5) Explain group by and having with eg

## task day 3 CReate databse campusdrive
## create table aptitude and hr round (5 records each)

### delete students where marks=10,9,8 out of 20
### delete students where comunication="not good",confidence ="low";