# SQL Stored Procedures

A **Stored Procedure** is a group of SQL statements stored in a database and executed whenever required. It can accept parameters to receive values from the user.

### Advantages
- Reduces repeated code.
- Improves code reusability.
- Supports input and output parameters.
- Simplifies database operations.

### Types of Parameters
- **IN:** Passes a value into the procedure.
- **OUT:** Returns a value from the procedure.
- **INOUT:** Accepts a value and returns its modified value.

### Syntax (MySQL)
```sql
DELIMITER $$

CREATE PROCEDURE procedure_name(IN parameter_name INT)
BEGIN
    -- SQL statements
END $$

DELIMITER ;
```

### Example Using IN Parameter
```sql
DELIMITER $$

CREATE PROCEDURE square(IN n INT)
BEGIN
    SELECT n * n AS result;
END $$

DELIMITER ;
```

**Calling the Procedure:**
```sql
CALL square(5);
```

**Output:** `25`

### Example Using OUT Parameter
```sql
DELIMITER $$

CREATE PROCEDURE getSquare(
    IN n INT,
    OUT result INT
)
BEGIN
    SET result = n * n;
END $$

DELIMITER ;
```

**Calling the Procedure:**
```sql
CALL getSquare(5, @ans);
SELECT @ans AS result;
```

**Output:** `25`

### Deleting a Procedure
```sql
DROP PROCEDURE square;
```

**Note:** A stored procedure can contain SQL statements such as `SELECT`, `INSERT`, `UPDATE`, `DELETE`, and conditional statements.