# Test Queries
##
### CREATE TABLE product (product_id INT, product_name Varchar(20), price int ,quantity int, category Varchar(10));
### CREATE TABLE student (student_id INT, student_name Varchar(20), age int ,city Varchar(10), marks int);
### CREATE TABLE customer (customer_id INT, customer_name Varchar(20),email Varchar(20), city Varchar(20), contact int);
### SELECT * FROM employee ;
### SELECT emp_name,salary,city FROM employee;
### SELECT * FROM employee WHERE salary>60000;
### SELECT * FROM `employee` WHERE city="pune"
### SELECT * FROM `employee` WHERE salary BETWEEN 30000 AND 60000;
### Letter start with 'A' is not teached.
### SELECT department, SUM(salary) AS total_salary FROM employee GROUP BY department;
### SELECT department, AVG(salary) FROM employee GROUP BY department;
### SELECT department, MAX(salary) FROM employee GROUP BY department;
### SELECT department, MIN(salary) FROM employee GROUP BY department;
### SELECT department, COUNT(emp_id) FROM employee GROUP BY department;
### SELECT department, AVG(salary) FROM employee where salary > 50000 GROUP BY department;
### SELECT * FROM employee ORDER by salary ASC;
### SELECT * FROM employee ORDER by salary DESC;
### SELECT * FROM employee ORDER by emp_name ASC;
### SELECT * FROM employee ORDER BY salary ASC, emp_name ASC;
### 
### 