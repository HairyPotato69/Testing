CREATE TABLE my_employee
(id  NUMBER(4) CONSTRAINT my_employee_id_pk primary key,
 last_name VARCHAR2(25) NOT NULL,
 first_name VARCHAR2(25),
 userid  VARCHAR2(8),
 salary  NUMBER(9,2));