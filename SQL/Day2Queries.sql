Create Database tcs,wipro;
Drop Database tcs,fortunecloud;
CREATE TABLE student (id int, name varchar(10), city varchar(10));
ALTER TABLE emp RENAME emp1;

INSERT INTO student (id, name, city) VALUES (1,"abc","pune");
INSERT INTO student VALUES (1,"abc","pune");
INSERT INTO emp Select * From student
