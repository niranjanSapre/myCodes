use practice;
desc Employee;
desc Department;
SELECT 
    *
FROM
    Employee;
SELECT 
    *
FROM
    Department;
 
SELECT 
    Employee.*, Department.*
FROM
    Department
        INNER JOIN
    Employee ON department.dno = Employee.dno;
 
SELECT 
    Employee.*, Department.*
FROM
    Department
        LEFT JOIN
    Employee ON department.dno = Employee.dno;
  
SELECT 
    Employee.*, Department.*
FROM
    Department
        RIGHT JOIN
    Employee ON department.dno = Employee.dno;
    
SELECT 
    Employee.*, Department.*
FROM
    Department
        INNER JOIN
    Employee ON department.dno = Employee.dno;
 
SELECT 
    Employee.*, Department.*
FROM
    Department
        LEFT JOIN
    Employee ON department.dno = Employee.dno 
UNION SELECT 
    Employee.*, Department.*
FROM
    Department
        RIGHT JOIN
    Employee ON department.dno = Employee.dno;
    
/*Group By*/

SELECT 
    eid, ename, esal, edesignation
FROM
    Employee
GROUP BY eid , ename , esal
HAVING esal > 50000; 

/*Order by*/

select ename,esal from Employee order by esal DESC;