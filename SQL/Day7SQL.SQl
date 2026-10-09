CREATE TABLE class(id int, name varchar(12), contact int, email varchar(12), PRIMARY KEY(id));
CREATE TABLE B_class(id int, name varchar(12), contact int, email varchar(12), PRIMARY KEY(email));
CREATE TABLE reg(id int, name varchar(12), contact int, email varchar(12), PRIMARY KEY(id))ENGINE=INNODB;
CREATE TABLE admission(id int, name varchar(12), contact int, email varchar(12), PRIMARY KEY(id),FOREIGN KEY(id)REFERENCES reg(id))ENGINE=INNODB;
CREATE TABLE demo(id int, name varchar(12), contact int, email varchar(12), PRIMARY KEY(id,email,contact));
CREATE TABLE section(id int UNIQUE NOT NULL, name varchar(12), contact int UNIQUE, city varchar(12));
