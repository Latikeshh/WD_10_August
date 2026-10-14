1) task 1
```sql
USE mongo;
DELIMITER
    $$
CREATE FUNCTION mark2(n1 INT,n2 INT) RETURNS VARCHAR(20) DETERMINISTIC BEGIN
        IF n1 >n2 THEN RETURN '1st no is greater'; ELSE RETURN '2nd no is greater' ;
    END IF ;
END $$
DELIMITER ;
SELECT mark2(5,3);
```
---
2) task 2
```sql    
USE mongo;
DELIMITER
    $$
CREATE FUNCTION voter(n1 INT) RETURNS VARCHAR(20) DETERMINISTIC BEGIN
        IF n1 >=18 THEN RETURN 'Eligible for vote'; ELSE RETURN 'Not ELigible for vote' ;
    END IF ;
END $$
DELIMITER ;
SELECT
    voter(5);
```    
---  
3) task 3
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION numbercheck(n1 INT) RETURNS VARCHAR(20) DETERMINISTIC BEGIN
        IF n1 >0 THEN RETURN '+ve no'; ELSE RETURN '-ve no' ;
    END IF ;
END $$
DELIMITER ;
SELECT numbercheck(5);
```
4) task 4
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION Leapyr(n1 INT) RETURNS VARCHAR(20) DETERMINISTIC BEGIN
        IF n1 % 400 = 0 THEN RETURN 'Yes this is leap year'; ELSE RETURN 'This is not leap year' ;
    END IF ;
END $$
DELIMITER ;
SELECT leapyr(2002);
```
---
5) task 5
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION divisible(n1 INT) RETURNS VARCHAR(20) DETERMINISTIC BEGIN
        IF n1 % 5 = 0 THEN RETURN 'divisible of 5'; ELSE RETURN 'not divisible' ;
    END IF ;
END $$
DELIMITER ;
SELECT divisible(45);
```
---
6) task 6
```sql
DELIMITER $$
CREATE FUNCTION traffic_signal(signal_color VARCHAR(10))
RETURNS VARCHAR(30)
DETERMINISTIC
BEGIN
    IF LOWER(signal_color) = 'red' THEN
        RETURN 'Stop';
    ELSEIF LOWER(signal_color) = 'yellow' THEN
        RETURN 'Get Ready';
    ELSEIF LOWER(signal_color) = 'green' THEN
        RETURN 'Go';
    ELSE
        RETURN 'Invalid Signal';
    END IF;
END $$
DELIMITER ;
SELECT traffic_signal('green');
```
---
7) task 7
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION week_name(n INT)
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
    IF n = 1 THEN
        RETURN 'Monday';
    ELSEIF n = 2 THEN
        RETURN 'Tuesday';
    ELSEIF n = 3 THEN
        RETURN 'Wednesday';
    ELSEIF n = 4 THEN
        RETURN 'Thursday';
    ELSEIF n = 5 THEN
        RETURN 'Friday';
    ELSEIF n = 6 THEN
        RETURN 'Saturday';
    ELSEIF n = 7 THEN
        RETURN 'Sunday';
    ELSE
        RETURN 'Invalid Day';
    END IF;
END $$
DELIMITER ;
SELECT week_name(3)
```
---
8) task 8
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION month_name(n INT)
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
    IF n = 1 THEN
        RETURN 'January';
    ELSEIF n = 2 THEN
        RETURN 'February';
    ELSEIF n = 3 THEN
        RETURN 'March';
    ELSEIF n = 4 THEN
        RETURN 'April';
    ELSEIF n = 5 THEN
        RETURN 'May';
    ELSEIF n = 6 THEN
        RETURN 'June';
    ELSEIF n = 7 THEN
        RETURN 'July';
    ELSEIF n = 8 THEN
        RETURN 'August';
    ELSEIF n = 9 THEN
        RETURN 'September';
    ELSEIF n = 10 THEN
        RETURN 'October';
    ELSEIF n = 11 THEN
        RETURN 'November';
    ELSEIF n = 12 THEN
        RETURN 'December';
    ELSE
        RETURN 'Invalid Month';
    END IF;
END $$
DELIMITER ;
SELECT month_name(10);
```
---
9) task 9
 
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION greaterno(n1 INT, n2 INT, n3 INT)
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
    IF n1 > n2 AND n1 > n3 THEN
        RETURN '1st no is greater';
    ELSEIF n2 > n1 AND n2 > n3 THEN
        RETURN '2nd no is greater';
    ELSE
        RETURN '3rd no is greater';
    END IF;
END $$
DELIMITER ;
SELECT greaterno(2,3,1);
```
---
10) task 10
```sql
USE mongo;
DELIMITER $$
CREATE FUNCTION check_vowel(ch CHAR(10))
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
    IF LOWER(ch) = 'a' THEN
        RETURN 'Vowel';
    ELSEIF LOWER(ch) = 'e' THEN
        RETURN 'Vowel';
    ELSEIF LOWER(ch) = 'i' THEN
        RETURN 'Vowel';
    ELSEIF LOWER(ch) = 'o' THEN
        RETURN 'Vowel';
    ELSEIF LOWER(ch) = 'u' THEN
        RETURN 'Vowel';
    ELSE
        RETURN 'Consonant';
    END IF;
END $$
DELIMITER ;
SELECT check_vowel('A');

```
---