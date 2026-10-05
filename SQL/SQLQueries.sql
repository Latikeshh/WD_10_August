CREATE DATABASE tcs;
CREATE DATABASE wipro;
DROP DATABASE tcs;
DROP DATABASE fortunecloud;
CREATE TABLE student (id INT, NAME VARCHAR(10), city VARCHAR(10));
ALTER TABLE emp RENAME emp1;
INSERT INTO student (id, NAME, city) VALUES (1,"abc","pune");
INSERT INTO student VALUES (1,"abc","pune");
INSERT INTO student VALUES (2,"def","dhule");
INSERT INTO student VALUES (3,"ghi","mumbai");
INSERT INTO student VALUES (4,"jkl","nashik");
INSERT INTO student VALUES (5,"mno","delhi");
INSERT INTO emp SELECT * FROM student;
ALTER TABLE student ADD column email VARCHAR(20); 
ALTER TABLE student ADD column sal VARCHAR(20) AFTER NAME; 
ALTER TABLE student MODIFY sal INT;
ALTER TABLE student change NAME username VARCHAR(10);
ALTER TABLE student DROP email; 
ALTER TABLE student ADD COLUMN valid VARCHAR(20) FIRST;
DELETE FROM emp1 WHERE id=112;
DELETE FROM emp1;
TRUNCATE TABLE student;
DROP TABLE emp;
SELECT * FROM student;
SELECT username FROM student;
SELECT DISTINCT id FROM student;
SELECT DISTINCT * FROM student;
SELECT * FROM student WHERE id=4;
SELECT * FROM student WHERE id=1 AND username="abc";
SELECT * FROM student WHERE id=1 OR username="abc";
SELECT * FROM student ORDER BY id ASC ; --- for ASCending
SELECT * FROM student ORDER BY username ASC ; --- for ASCending
SELECT * FROM student ORDER BY username DESC ;--- for DESCending
SELECT * FROM student ORDER BY RAND(id);--- for Randomly result
SELECT * FROM student ORDER BY RAND(id) LIMIT 5;--- for random but in LIMITED
SELECT * FROM student LIMIT 5 ;--- for returning selected records
SELECT COUNT(id) FROM student;
SELECT COUNT(*) FROM student;
SELECT COUNT(DISTINCT id) FROM student;
SELECT SUM(sal) FROM student;
SELECT SUM(sal) AS "Total salary" FROM student;
SELECT username AS "Name" FROM student;
SELECT UPPER(username) FROM student;
SELECT username FROM student IS Null;
SELECT username FROM student IS NOT Null;
SELECT username FROM student WHERE city IN ("pune","mumbai","solapur");
