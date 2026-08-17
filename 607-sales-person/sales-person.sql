# Write your MySQL query statement below

SELECT name
FROM
SalesPerson
WHERE sales_id NOT IN (
    SELECT s.sales_id
    FROM SalesPerson AS s
    LEFT JOIN Orders AS o
    ON s.sales_id = o.sales_id
    WHERE o.com_id  IN (
        SELECT com_id
        FROM Company
        WHERE name = "RED"
    )
);

