# 📘 DDL and DML in SQL

SQL commands are commonly divided into different categories based on what they do with a database.

Two important categories are:

1. **DDL — Data Definition Language**
2. **DML — Data Manipulation Language**

---

# 1. DDL — Data Definition Language

## 📖 What is DDL?

**DDL (Data Definition Language)** is used to **define, create, modify, and remove the structure of database objects**.

Database objects can include:

* Database
* Table
* Column
* View
* Index
* Schema

DDL mainly works with the **structure/schema** of the database rather than individual records.

### Simple Example

If we create a `Student` table:

```sql
CREATE TABLE Student (
    id INT,
    name VARCHAR(50),
    age INT
);
```

The `CREATE TABLE` command defines the structure of the table.

Therefore, it is a **DDL command**.

---

# 2. Types of DDL Commands

The commonly used DDL commands are:

| Command    | Full Meaning           | Purpose                                               |
| ---------- | ---------------------- | ----------------------------------------------------- |
| `CREATE`   | Create database object | Creates a new object                                  |
| `ALTER`    | Alter database object  | Changes the structure                                 |
| `DROP`     | Drop database object   | Permanently removes an object                         |
| `TRUNCATE` | Truncate table         | Removes all records while keeping the table structure |
| `RENAME`   | Rename object          | Changes the name of an object                         |

---

# 3. CREATE

## 📖 What is CREATE?

`CREATE` is used to create a new database object.

It can be used to create:

* Database
* Table
* View
* Index
* Schema

### Create Database

```sql
CREATE DATABASE College;
```

### Create Table

```sql
CREATE TABLE Student (
    id INT,
    name VARCHAR(50),
    age INT
);
```

### Create Table with Constraints

```sql
CREATE TABLE Student (
    id INT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    age INT,
    email VARCHAR(100) UNIQUE
);
```

---

# 4. ALTER

## 📖 What is ALTER?

`ALTER` is used to **change the structure of an existing database object**.

For example, we can:

* Add a column
* Modify a column
* Rename a column
* Drop a column

### Add Column

```sql
ALTER TABLE Student
ADD email VARCHAR(100);
```

### Rename Column

Syntax can differ between database systems.

For MySQL:

```sql
ALTER TABLE Student
RENAME COLUMN name TO student_name;
```

### Drop Column

```sql
ALTER TABLE Student
DROP COLUMN email;
```

### Modify Column

MySQL example:

```sql
ALTER TABLE Student
MODIFY age INT NOT NULL;
```

> **Note:** `ALTER` syntax can vary between MySQL, PostgreSQL, SQL Server, Oracle, etc.

---

# 5. DROP

## 📖 What is DROP?

`DROP` permanently removes a database object.

### Drop Table

```sql
DROP TABLE Student;
```

After executing this command:

* The table is removed.
* Its structure is removed.
* Its data is removed.

### Drop Database

```sql
DROP DATABASE College;
```

> ⚠️ Be careful with `DROP` because the object and its data are removed.

---

# 6. TRUNCATE

## 📖 What is TRUNCATE?

`TRUNCATE` removes **all records from a table** while keeping the table structure.

```sql
TRUNCATE TABLE Student;
```

After truncating:

```text
Student Table
     ↓
All records removed
     ↓
Table structure remains
```

For example:

Before:

| id | name  | age |
| -: | ----- | --: |
|  1 | Rahul |  20 |
|  2 | Amit  |  21 |
|  3 | Priya |  19 |

After:

```sql
TRUNCATE TABLE Student;
```

The table becomes empty, but the columns still exist.

---

# 7. RENAME

## 📖 What is RENAME?

`RENAME` changes the name of a database object.

### MySQL Example

```sql
RENAME TABLE Student TO Students;
```

The table name changes from:

```text
Student
```

to:

```text
Students
```

The data remains in the table.

---

# 8. DML — Data Manipulation Language

## 📖 What is DML?

**DML (Data Manipulation Language)** is used to **work with the data stored inside database tables**.

DML mainly deals with records/rows.

The commonly used DML commands are:

* `INSERT`
* `UPDATE`
* `DELETE`

---

# 9. Types of DML Commands

| Command  | Purpose                   |
| -------- | ------------------------- |
| `INSERT` | Adds new records          |
| `UPDATE` | Modifies existing records |
| `DELETE` | Removes records           |

---

# 10. INSERT

## 📖 What is INSERT?

`INSERT` is used to add new records into a table.

### Insert One Record

```sql
INSERT INTO Student (id, name, age)
VALUES (1, 'Rahul', 20);
```

### Insert Multiple Records

```sql
INSERT INTO Student (id, name, age)
VALUES
(2, 'Amit', 21),
(3, 'Priya', 19),
(4, 'Neha', 22);
```

### Result

| id | name  | age |
| -: | ----- | --: |
|  1 | Rahul |  20 |
|  2 | Amit  |  21 |
|  3 | Priya |  19 |
|  4 | Neha  |  22 |

---

# 11. UPDATE

## 📖 What is UPDATE?

`UPDATE` is used to modify existing records.

### Example

```sql
UPDATE Student
SET age = 21
WHERE id = 1;
```

The age of the student whose `id` is `1` is changed to `21`.

### Update Multiple Columns

```sql
UPDATE Student
SET name = 'Rahul Sharma',
    age = 22
WHERE id = 1;
```

### ⚠️ Important

Always be careful with the `WHERE` condition.

```sql
UPDATE Student
SET age = 25;
```

This updates the age of **every record** in the table.

---

# 12. DELETE

## 📖 What is DELETE?

`DELETE` removes records from a table.

### Delete One Record

```sql
DELETE FROM Student
WHERE id = 3;
```

Only the record with `id = 3` is removed.

### Delete Multiple Records

```sql
DELETE FROM Student
WHERE age < 20;
```

This removes students whose age is less than 20.

### Delete All Records

```sql
DELETE FROM Student;
```

This removes all records but keeps the table structure.

> ⚠️ Always use a `WHERE` condition when you only want to delete specific records.

---

# 13. DDL vs DML

| Feature                  | DDL                                   | DML                        |
| ------------------------ | ------------------------------------- | -------------------------- |
| Full Form                | Data Definition Language              | Data Manipulation Language |
| Main Purpose             | Defines database structure            | Manipulates stored data    |
| Works With               | Schema/structure                      | Records/data               |
| Common Commands          | CREATE, ALTER, DROP, TRUNCATE, RENAME | INSERT, UPDATE, DELETE     |
| Creates Table            | ✅                                     | ❌                          |
| Changes Table Structure  | ✅                                     | ❌                          |
| Adds Records             | ❌                                     | ✅                          |
| Modifies Records         | ❌                                     | ✅                          |
| Deletes Specific Records | ❌                                     | ✅                          |
| Deletes Entire Table     | ✅                                     | ❌                          |

---

# 14. DDL vs DML — Simple Example

Suppose we want to create a student database.

### Step 1 — Create the table

```sql
CREATE TABLE Student (
    id INT,
    name VARCHAR(50),
    age INT
);
```

This is **DDL** because we are defining the table structure.

### Step 2 — Add student data

```sql
INSERT INTO Student
VALUES (1, 'Rahul', 20);
```

This is **DML** because we are adding data.

### Step 3 — Change student data

```sql
UPDATE Student
SET age = 21
WHERE id = 1;
```

This is **DML** because we are modifying data.

### Step 4 — Change table structure

```sql
ALTER TABLE Student
ADD email VARCHAR(100);
```

This is **DDL** because we are changing the table structure.

---

# 15. DROP vs TRUNCATE vs DELETE

These three commands are often confused.

| Feature                     | DROP | TRUNCATE | DELETE |
| --------------------------- | ---- | -------- | ------ |
| Removes records             | ✅    | ✅        | ✅      |
| Removes table structure     | ✅    | ❌        | ❌      |
| Can delete selected records | ❌    | ❌        | ✅      |
| `WHERE` supported           | ❌    | ❌        | ✅      |
| Table remains               | ❌    | ✅        | ✅      |
| Command category            | DDL  | DDL      | DML    |

### Example

#### DROP

```sql
DROP TABLE Student;
```

Table + data are removed.

#### TRUNCATE

```sql
TRUNCATE TABLE Student;
```

All data is removed, but the table remains.

#### DELETE

```sql
DELETE FROM Student
WHERE id = 5;
```

Only the selected record is removed.

---

# 16. DDL and DML in Real Database Work

Consider an online shopping database.

### DDL

Creating the product table:

```sql
CREATE TABLE Product (
    product_id INT PRIMARY KEY,
    product_name VARCHAR(100),
    price DECIMAL(10,2)
);
```

Adding a new column:

```sql
ALTER TABLE Product
ADD stock INT;
```

These operations change the **database structure**.

### DML

Adding a product:

```sql
INSERT INTO Product
VALUES (1, 'Laptop', 55000.00, 10);
```

Changing its price:

```sql
UPDATE Product
SET price = 52000.00
WHERE product_id = 1;
```

Removing a product:

```sql
DELETE FROM Product
WHERE product_id = 1;
```

These operations change the **data**.

---

# 17. Important Points

### DDL

* DDL deals primarily with database structure.
* `CREATE` creates objects.
* `ALTER` changes object structure.
* `DROP` removes objects.
* `TRUNCATE` removes all rows while retaining the table structure.
* `RENAME` changes an object's name.
* Exact behavior and transaction rules can differ between database systems.

### DML

* DML deals with data stored in tables.
* `INSERT` adds records.
* `UPDATE` modifies records.
* `DELETE` removes records.
* `WHERE` is important when modifying or deleting selected records.
* Without a `WHERE` condition, `UPDATE` or `DELETE` can affect all rows.

---

# 18. Easy Way to Remember

```text
DDL
│
├── CREATE
├── ALTER
├── DROP
├── TRUNCATE
└── RENAME

        ↓
   Database Structure
```

```text
DML
│
├── INSERT
├── UPDATE
└── DELETE

        ↓
      Data
```

### One-line Memory Trick

> **DDL = Defines the structure**

> **DML = Manipulates the data**

---

# 19. Practice Queries

Create this table:

```sql
CREATE TABLE Employee (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    department VARCHAR(50),
    salary DECIMAL(10,2)
);
```

### Practice 1 — Insert

```sql
INSERT INTO Employee
VALUES
(1, 'Rahul', 'IT', 50000),
(2, 'Amit', 'HR', 45000),
(3, 'Priya', 'IT', 60000);
```

### Practice 2 — Update

```sql
UPDATE Employee
SET salary = 55000
WHERE id = 1;
```

### Practice 3 — Delete

```sql
DELETE FROM Employee
WHERE id = 2;
```

### Practice 4 — Add Column

```sql
ALTER TABLE Employee
ADD email VARCHAR(100);
```

### Practice 5 — Rename Table

```sql
RENAME TABLE Employee TO Employees;
```

### Practice 6 — Remove All Records

```sql
TRUNCATE TABLE Employees;
```

---

# 20. Summary

```text
                    SQL
                     │
          ┌──────────┴──────────┐
          │                     │
         DDL                   DML
          │                     │
    Database Structure          Data
          │                     │
   ┌──────┼──────┐        ┌────┼────┐
   │      │      │        │    │    │
 CREATE  ALTER  DROP    INSERT UPDATE DELETE
          │
      TRUNCATE
          │
       RENAME
```

## Final Difference

**DDL** is mainly used to **define and change the structure of database objects**.

**DML** is used to **insert, update, and delete the data stored in those objects**.
