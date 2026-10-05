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
SELECT columname(username) FROM student;
SELECT DISTINCT id FROM student;
SELECT DISTINCT * FROM student;
SELECT * FROM student WHERE id=4;
SELECT * FROM student WHERE id=1 AND username="abc";
SELECT * FROM student WHERE id=1 OR username="abc";
SELECT * FROM student ORDER BY id ASC ; --- for ASCending
SELECT * FROM student ORDER BY id DESC ;--- for DESCending
SELECT * FROM student ORDER BY RAND(id);--- for Randomly result
SELECT * FROM student ORDER BY RAND(id) LIMIT 5 ;--- for random but in LIMITed
SELECT * FROM student LIMIT 5 ;--- for returning selected records
