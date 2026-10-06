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
### SELECT e.emp_name, d.dept_name FROM employee INNER JOIN department ON e.dept_id = d.dept_id;
### SELECT e.emp_name, e.salary, d.location FROM employee INNER JOIN department d ON e.dept_id = d.dept_id;
### SELECT d.dept_name, e.emp_name FROM department LEFT JOIN employee ON d.dept_id = e.dept_id;
### SELECT e.emp_name, d.dept_name FROM employee RIGHT JOIN department d ON e.dept_id = d.dept_id;
### SELECT e.emp_name, d.dept_name, d.location FROM employee JOIN department d ON e.dept_id = d.dept_id WHERE d.location = 'Pune';
### SELECT d.dept_name, SUM(e.salary) AS total_salary FROM employee JOIN department d ON e.dept_id = d.dept_id GROUP BY d.dept_name ORDER BY total_salary DESC;
### 