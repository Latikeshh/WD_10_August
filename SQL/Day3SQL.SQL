ALter table student add column email varchar(20); 
ALter table student add column sal varchar(20) after name; 
ALter table student modify sal int;
ALter table student change name username varchar(10);
ALter table student drop email; 
ALTER TABLE student ADD COLUMN valid varchar(20) FIRST;

Delete from emp1 where id=112;
delete from emp1;

Truncate table student;
Drop table emp;

select * from student;
select columnname(username) from student;
select DISTINCT id from student;
SELECT DISTINCT * FROM student;

select * from student WHERE id=4;
select * from student WHERE id=1 AND username="abc";
select * from student WHERE id=1 OR username="abc";

select * from student order by id asc ;
--- for ascending
select * from student order by id desc ;
--- for descending
select * from student order by RAND(id);
--- for Randomly result
select * from student order by RAND(id) limit 5 ;
--- for random but in limited
select * from student limit 5 ;
--- for returning selected records
