# CASE Statement in Control Statements

The `CASE` statement is a conditional control statement used to execute different blocks of code based on specified conditions. It is similar to the `IF-ELSIF-ELSE` statement in PL/SQL.

## Keywords Used

- **`DECLARE`**: Used to declare variables, constants, and other local items before the executable section of a PL/SQL block. It is optional if no declarations are required.
- **`CASE`**: Begins a CASE statement to evaluate conditions or compare values.
- **`WHEN`**: Specifies a condition or value to check.
- **`THEN`**: Defines the statement or action executed when the corresponding condition matches.
- **`ELSE`**: Specifies the default action when none of the `WHEN` conditions match. It is optional.
- **`END CASE`**: Marks the end of a PL/SQL CASE statement.

## Types of CASE Statements

1. **Simple CASE Statement:** Compares one expression against multiple possible values.
2. **Searched CASE Statement:** Evaluates multiple Boolean conditions.

## Syntax

```sql
DECLARE
    -- Variable declarations
BEGIN
    CASE
        WHEN condition1 THEN
            statements;
        WHEN condition2 THEN
            statements;
        ELSE
            statements;
    END CASE;
END;
/
```

## Example

```sql
DECLARE
    marks INT := 75;
BEGIN
    CASE
        WHEN marks >= 90 THEN
            DBMS_OUTPUT.PUT_LINE('Grade A');
        WHEN marks >= 60 THEN
            DBMS_OUTPUT.PUT_LINE('Grade B');
        ELSE
            DBMS_OUTPUT.PUT_LINE('Grade C');
    END CASE;
END;
/
```

**Output:**
```text
Grade B
```

## Important Points

- `DECLARE` is optional and is used only when variables or other declarations are needed.
- `BEGIN` marks the start of the executable section.
- `WHEN` conditions are evaluated in order; the first matching condition is executed.
- `ELSE` is optional, but it is useful for handling unmatched conditions.
- `END CASE;` terminates a PL/SQL CASE statement.
- A PL/SQL block ends with `END;`, and `/` on a separate line is commonly used to execute the block in tools such as SQL*Plus.
- If no condition matches and there is no `ELSE` branch, a PL/SQL CASE statement raises a `CASE_NOT_FOUND` exception.

**Note:** This syntax is for Oracle PL/SQL. MySQL stored programs use different syntax for `CASE` statements and do not use Oracle's `DBMS_OUTPUT.PUT_LINE`.



```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION check_casee(val INT)
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
DECLARE income_level varchar(20);
CASE val 
WHEN 1000 THEN
SET income_level='Low income';
WHEN 5000 THEN
SET income_level='Avg income';
ELSE
SET income_level='Invalid';
END CASE;
RETURN income_level;
END $$
DELIMITER ;
SELECT check_casee(2000);
```
# Loops in PL/SQL

A **loop** is a control statement used to execute a block of code repeatedly until a specified condition is met or the loop is terminated.

Loops help reduce code repetition and are useful when performing repetitive tasks, calculations, and data processing.

## Types of Loops in PL/SQL

1. **Simple LOOP:** Repeats statements until an `EXIT` or `EXIT WHEN` condition terminates the loop.
2. **WHILE LOOP:** Repeats statements as long as the specified condition is true.
3. **FOR LOOP:** Repeats statements for a specified range of values.
4. **Nested LOOP:** A loop placed inside another loop.

## 1. Simple LOOP

A simple loop executes its statements repeatedly. An `EXIT` statement is generally used to stop the loop.

### Syntax

```sql
LOOP
    statements;
    EXIT WHEN condition;
END LOOP;
```

### Example

```sql
DECLARE
    i INT := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE(i);
        i := i + 1;
        EXIT WHEN i > 5;
    END LOOP;
END;
/
```
## 2. WHILE LOOP

A `WHILE LOOP` executes statements repeatedly as long as its condition remains true. The condition is checked before each iteration.

### Syntax

```sql
WHILE condition LOOP
    statements;
END LOOP;
```

### Example

```sql
DECLARE
    i INT := 1;
BEGIN
    WHILE i <= 5 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
        i := i + 1;
    END LOOP;
END;
/
```

## 3. FOR LOOP

A `FOR LOOP` executes statements for a specified range of integer values. The loop variable is automatically initialized and incremented or decremented.

### Syntax

```sql
FOR variable IN start_value..end_value LOOP
    statements;
END LOOP;
```

### Example

```sql
BEGIN
    FOR i IN 1..5 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;
END;
/
```

**Output:**
```text
1
2
3
4
5
```

### Reverse FOR LOOP

Use `REVERSE` to iterate from the upper bound down to the lower bound.

```sql
BEGIN
    FOR i IN REVERSE 1..5 LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;
END;
/
```

## 4. Nested LOOP

A nested loop is a loop placed inside another loop. It is useful for working with patterns, tables, and multidimensional data.

### Example

```sql
BEGIN
    FOR i IN 1..3 LOOP
        FOR j IN 1..3 LOOP
            DBMS_OUTPUT.PUT_LINE(i || ' ' || j);
        END LOOP;
    END LOOP;
END;
/
```
## Important Loop Keywords

- **`LOOP`**: Starts a loop.
- **`WHILE`**: Specifies a condition that must remain true for the loop to continue.
- **`FOR`**: Defines a loop that iterates over a range of values.
- **`REVERSE`**: Reverses the direction of a numeric `FOR LOOP`.
- **`EXIT`**: Immediately terminates the current loop.
- **`EXIT WHEN`**: Terminates the loop when the specified condition becomes true.
- **`CONTINUE`**: Skips the remaining statements in the current iteration and proceeds to the next iteration.
- **`END LOOP`**: Marks the end of a loop.

## Difference Between Loops

| Loop Type | Condition Check | Best Used For |
|---|---|---|
| Simple LOOP | At the `EXIT` condition | Repetition controlled by an exit statement |
| WHILE LOOP | Before each iteration | Repetition based on a condition |
| FOR LOOP | Automatically controlled by a range | Repeating a known number of times |
| Nested LOOP | Depends on the inner and outer loops | Patterns and multidimensional tasks |

## Important Points

- A simple loop can run indefinitely if no exit condition is provided.
- A `WHILE LOOP` might execute zero times if its condition is initially false.
- A numeric `FOR LOOP` automatically manages its loop variable.
- Use `END LOOP;` to close every PL/SQL loop.
- PL/SQL loops are commonly used inside the executable section of a block, between `BEGIN` and `END`.
- Oracle PL/SQL loop syntax differs from MySQL stored-program loop syntax.