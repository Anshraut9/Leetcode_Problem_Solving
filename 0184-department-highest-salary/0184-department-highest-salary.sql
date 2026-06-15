# Write your MySQL query statement below
select  d.name as Department , e.name as Employee , e.salary as Salary
FROM Employee e
LEFT JOIN Department d
ON e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN
(
    SELECT departmentId,
           MAX(salary) AS Max_salary
    FROM Employee
    GROUP BY departmentId
);