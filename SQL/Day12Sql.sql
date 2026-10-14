USE mongo;
DELIMITER $$
CREATE FUNCTION check_casee(val INT)
RETURNS VARCHAR(20)
DETERMINISTIC
BEGIN
DECLARE income_level varchar(20);
CASE val 
WHEN 1000 THEN
SET income_level='Low income';
WHEN 5000 THEN
SET income_level='Avg income';
ELSE
SET income_level='Invalid';
END CASE;
RETURN income_level;

END $$
DELIMITER ;

SELECT check_casee(2000);

---2

USE mongo;
DELIMITER $$
CREATE FUNCTION cal_income(val INT)
RETURNS INT
BEGIN
DECLARE income INT;
SET income =0;
label1:LOOP
SET income=income+val ;
IF income<11 THEN
ITERATE label1;
END IF;
LEAVE label1;
END LOOP;
RETURN income;

END $$
DELIMITER ;

SELECT cal_income(1);

---3
USE mongo;
DELIMITER $$
CREATE FUNCTION calIncome(val INT)
RETURNS INT
BEGIN
DECLARE income INT;
SET income=0;
label1:WHILE income<=3000 DO
SET income=income+val;
END WHILE label1;
RETURN income;

END $$
DELIMITER ;

SELECT calIncome(1);