CREATE TABLE register(id int AUTO_INCREMENT, name varchar(10),city varchar(20),contact int, PRIMARY KEY(id));
CREATE TABLE address (location GEOMETRY NOT NULL,SPATIAL INDEX(location));
INSERT INTO address (location) VALUES (ST_GEOMFROMTEXT('LINESTRING(4 5, 5 6)'));
CREATE TABLE course(title varchar(10),info text, FULLTEXT(title,info));
