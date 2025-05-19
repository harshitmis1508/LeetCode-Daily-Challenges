SELECT (
    SELECT DISTINCT Salary
    FROM Employee
    ORDER BY Salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;

-- The above SQL query retrieves the second highest salary from the Employee table.
-- It uses a subquery to select distinct salaries, orders them in descending order,
-- and limits the result to the second highest salary using OFFSET 1.