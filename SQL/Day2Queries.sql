CREATE DATABASE tcs,wipro;
DROP DATABASE tcs,fortunecloud;
CREATE TABLE student (id INT, NAME VARCHAR(10), city VARCHAR(10));
ALTER TABLE emp RENAME emp1;

INSERT INTO student (id, NAME, city) VALUES (1,"abc","pune");
INSERT INTO student VALUES (1,"abc","pune");
INSERT INTO emp SELECT * FROM student
