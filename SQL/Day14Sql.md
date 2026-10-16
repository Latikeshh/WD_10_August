# SQL Triggers

A **Trigger** is a database object that automatically executes when a specific event occurs on a table, such as `INSERT`, `UPDATE`, or `DELETE`.

### Types of Triggers
- **BEFORE:** Executes before the specified operation.
- **AFTER:** Executes after the specified operation.

### BEFORE Trigger
A **BEFORE Trigger** executes before an `INSERT`, `UPDATE`, or `DELETE` operation is performed on a table.

**Example:** Convert a student's name to uppercase before inserting it into the table.

### AFTER Trigger
An **AFTER Trigger** executes after an `INSERT`, `UPDATE`, or `DELETE` operation is completed on a table.

**Example:** Store a message in a log table after a new student record is inserted.

### Advantages
- Automatically performs actions.
- Helps maintain data consistency.
- Records changes for auditing.
- Reduces manual work.

### Syntax (MySQL)
```sql
DELIMITER $$

CREATE TRIGGER trigger_name
BEFORE INSERT ON table_name
FOR EACH ROW
BEGIN
    -- SQL statements
END $$

DELIMITER ;
```

### Example
```sql
DELIMITER $$

CREATE TRIGGER before_insert_student
BEFORE INSERT ON student
FOR EACH ROW
BEGIN
    SET NEW.name = UPPER(NEW.name);
END $$

DELIMITER ;
```

**Explanation:**
- The trigger executes before inserting a record.
- `NEW.name` refers to the new value of the `name` column.
- `UPPER()` converts the name to uppercase.

### Deleting a Trigger
```sql
DROP TRIGGER before_insert_student;
```

**Note:** In MySQL, `OLD.column_name` refers to the existing row value, while `NEW.column_name` refers to the new row value where applicable.