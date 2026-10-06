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
SELECT * FROM student ORDER BY id ASC ; --- For Ascending
SELECT * FROM student ORDER BY username ASC ; --- For Ascending
SELECT * FROM student ORDER BY username DESC ; --- For Descending
SELECT * FROM student ORDER BY RAND(id); --- For Randomly result
SELECT * FROM student ORDER BY RAND(id) LIMIT 5; --- For random but in LIMITED
SELECT * FROM student LIMIT 5 ; --- For returning Selected records
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
CREATE TABLE list1(id int, product_name varchar(15), price int);
CREATE TABLE list1(id int, product_name varchar(15), quantity int);
INSERT INTO `list1` (`id`, `product_name`, `price`) VALUES ('2', 'pencil', '15');
INSERT INTO `list2` VALUES ('3', 'mouse', '200');
SELECT * FROM list1 INNER JOIN list2 ON list1.id=list2.id;
SELECT * FROM `list1` RIGHT JOIN list2 list1.id=list2.id;
SELECT * FROM `list1` LEFT JOIN list2 list1.id=list2.id;
SELECT * FROM `list1` LEFT JOIN list2 list1.id=list2.id;
union
SELECT * FROM `list1` RIGHT JOIN list2 list1.id=list2.id;--- union outer join query remaining
SELECT * FROM `list1`,`list2`; ---cross joined
SELECT * FROM `list1`cross join`list2`; ---cross joined

CREATE DATABASE honda;
CREATE TABLE customer (customer_id INT PRIMARY KEY,customer_name VARCHAR(50),city VARCHAR(30));
CREATE TABLE quotation (quotation_id INT PRIMARY KEY,customer_id INT,bike_name VARCHAR(50),price INT);
CREATE TABLE bill (bill_id INT PRIMARY KEY, customer_id INT,  quotation_id INT, offer VARCHAR(50), discount INT,final_amount INT);
CREATE DATABASE hero;
CREATE TABLE customer ( customer_id INT PRIMARY KEY, customer_name VARCHAR(50), city VARCHAR(30));
CREATE TABLE diwali ( diwali_id INT PRIMARY KEY, customer_id INT, bike_name VARCHAR(50), offer VARCHAR(50), discount INT);
CREATE TABLE quotation (quotation_id INT PRIMARY KEY, customer_id INT, bike_name VARCHAR(50),price INT);
SELECT * FROM customer JOIN quotation ON customer.customer_id = quotation.customer_id JOIN diwali ON customer.customer_id = diwali.customer_id;
SELECT * FROM customer JOIN quotation ON customer.customer_id = quotation.customer_id JOIN bill ON quotation.quotation_id = bill.quotation_id;