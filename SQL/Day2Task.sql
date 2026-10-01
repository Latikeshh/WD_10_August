CREATE DATABASE company;

CREATE TABLE project (
    project_id INT,
    project_name VARCHAR(100),
    start_date DATE,
    budget INT,
    status VARCHAR(30)
);

INSERT INTO project (project_id, project_name, start_date, budget, status)
VALUES
(1, 'Website Development', '2026-01-10', 500000.00, 'Completed'),
(2, 'Mobile Application', '2026-02-15', 750000.00, 'Running'),
(3, 'Cloud Migration', '2026-03-01', 900000.00, 'Running'),
(4, 'Security System', '2026-04-10', 650000.00, 'Pending'),
(5, 'Data Analytics', '2026-05-20', 800000.00, 'Running');

CREATE TABLE emp (
    emp_id INT,
    emp_name VARCHAR(100),
    department VARCHAR(50),
    salary INT,
    project_id INT
);

INSERT INTO emp (emp_id, emp_name, department, salary, project_id)
VALUES
(1, 'Rahul Sharma', 'IT', 55000.00, 1),
(2, 'Priya Patil', 'HR', 48000.00, 2),
(3, 'Amit Verma', 'IT', 62000.00, 3),
(4, 'Sneha Joshi', 'Security', 58000.00, 4),
(5, 'Rohit Deshmukh', 'Analytics', 70000.00, 5);

CREATE TABLE training (
    training_id INT,
    training_name VARCHAR(100),
    trainer VARCHAR(100),
    duration_days INT,
    emp_id INT
);

INSERT INTO training (training_id, training_name, trainer, duration_days, emp_id)
VALUES
(1, 'Java Programming', 'Anil Kumar', 10, 1),
(2, 'Web Development', 'Neha Singh', 15, 2),
(3, 'Cloud Computing', 'Raj Mehta', 12, 3),
(4, 'Cyber Security', 'Vikas Patil', 8, 4),
(5, 'Data Analytics', 'Pooja Shah', 14, 5);

CREATE DATABASE business;

CREATE TABLE dept (
    dept_id INT,
    dept_name VARCHAR(100),
    manager VARCHAR(100),
    location VARCHAR(100),
    employees INT
);

INSERT INTO dept (dept_id, dept_name, manager, location, employees)
VALUES
(1, 'IT', 'Rajesh Kumar', 'Pune', 25),
(2, 'HR', 'Sunita Sharma', 'Mumbai', 12),
(3, 'Finance', 'Amit Joshi', 'Delhi', 15),
(4, 'Marketing', 'Priya Patil', 'Nashik', 18),
(5, 'Sales', 'Rohan Verma', 'Pune', 30);

CREATE TABLE schedule (
    schedule_id INT,
    meeting_name VARCHAR(100),
    meeting_date DATE,
    meeting_time TIME,
    department_id INT
);

INSERT INTO schedule (schedule_id, meeting_name, meeting_date, meeting_time, department_id)
VALUES
(1, 'IT Weekly Meeting', '2026-10-05', '10:00:00', 1),
(2, 'HR Review Meeting', '2026-10-06', '11:00:00', 2),
(3, 'Finance Meeting', '2026-10-07', '12:00:00', 3),
(4, 'Marketing Planning', '2026-10-08', '14:00:00', 4),
(5, 'Sales Meeting', '2026-10-09', '15:00:00', 5);

CREATE TABLE task (
    task_id INT,
    task_name VARCHAR(100),
    assigned_to VARCHAR(100),
    priority VARCHAR(20),
    status VARCHAR(30)
);

INSERT INTO task (task_id, task_name, assigned_to, priority, status)
VALUES
(1, 'Update Website', 'Rahul', 'High', 'Completed'),
(2, 'Prepare Employee Report', 'Priya', 'Medium', 'Running'),
(3, 'Create Budget', 'Amit', 'High', 'Pending'),
(4, 'Marketing Campaign', 'Sneha', 'Medium', 'Running'),
(5, 'Customer Analysis', 'Rohan', 'Low', 'Pending');
