# PL/SQL
### Procedural Language Extension of SQL

- PL/SQL is Oracle's procedural extension of SQL.
- It is a **block-structured language** that can contain multiple blocks.
- A group of characters in PL/SQL is called a **lexical unit**.

## 1. Data Types

There are two main types of data types:

### A) Scalar Data Types
Store a single value.

- `NUMBER` – Numeric values
- `BOOLEAN` – TRUE, FALSE, or NULL
- `DATE` – Date and time
- `CHAR` – Fixed-length text
- `VARCHAR2` – Variable-length text

### B) Composite Data Types
Store multiple values.

- `RECORD` – Stores multiple fields.
- `COLLECTION` – Stores multiple elements.
- `VARRAY` – Stores a fixed maximum number of elements.
- `NESTED TABLE` – Stores a collection of elements.

### C) Reference Data Types
Store references to other data items.

- `REF CURSOR` – References a query result set.
- `REF` – References an object.

### D) LOB Data Types
Store large amounts of data.

- `BLOB` – Binary data, such as images.
- `CLOB` – Large character data.
- `NCLOB` – Large Unicode character data.
- `BFILE` – Binary files stored outside the database.

## 2. Operators

| Type | Operators |
|---|---|
| Arithmetic | `+`, `-`, `*`, `/` |
| Relational | `=`, `!=`, `<`, `>`, `>=`, `<=` |
| Logical | `AND`, `OR`, `NOT` |
| Comparison | `LIKE`, `BETWEEN`, `IN`, `IS NULL` |
| String | `||` (concatenation) |

## 3. PL/SQL Block Structure

A PL/SQL block has three sections:

```sql
DECLARE
    -- Variable declarations
BEGIN
    -- Executable statements
EXCEPTION
    -- Error handling
END;
/
```

- `DECLARE` – Optional; declares variables.
- `BEGIN` – Mandatory; contains executable statements.
- `EXCEPTION` – Optional; handles errors.
- `END` – Marks the end of the block.

## 4. Variables and Constants

- **Variable:** A value that can change.
- **Constant:** A value that cannot change after initialization.

```sql
DECLARE
    v_age NUMBER := 20;
    c_pi CONSTANT NUMBER := 3.14;
BEGIN
    DBMS_OUTPUT.PUT_LINE(v_age);
END;
/
```

## 5. Conditional Statements

Used to make decisions.

- `IF` – Executes statements when a condition is true.
- `IF-ELSE` – Selects between two alternatives.
- `ELSIF` – Checks additional conditions.
- `CASE` – Selects statements based on conditions.

## 6. Loops

Used to repeat statements again and again until conditon is break.

- **Simple LOOP** – Repeats until explicitly exited.
- **WHILE LOOP** – Repeats while a condition is true.
- **FOR LOOP** – Repeats over a specified range.

## 7. Cursors

A cursor processes query results.

- **Implicit Cursor** – Created automatically by Oracle.
- **Explicit Cursor** – Declared by the programmer.

## 8. Exception Handling

Used to handle runtime errors.

- `ZERO_DIVIDE` – Division by zero.
- `NO_DATA_FOUND` – No row found.
- `TOO_MANY_ROWS` – More than one row returned.
- `OTHERS` – Handles other exceptions.

## 9. Procedures and Functions

- **Procedure:** Performs a task; may return values through parameters.
- **Function:** Returns a value using `RETURN`.

## 10. Triggers

A trigger executes automatically when a specified database event occurs, such as `INSERT`, `UPDATE`, or `DELETE`.

## 11. Advantages of PL/SQL

- Supports procedural programming.
- Reduces network traffic.
- Supports exception handling.
- Allows code reuse.
- Improves integration with Oracle SQL.

---
## Function syntax
```sql
Delimiter $$;
create function square(n int)
returns int
deterministic
Begin
        return n*n;
end $$
delimiter;
```
