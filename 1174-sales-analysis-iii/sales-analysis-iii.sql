# Write your MySQL query statement below

SELECT a.product_id, a.product_name
FROM Product AS a
JOIN Sales AS b
ON a.product_id = b.product_id
GROUP BY a.product_id, a.product_name
HAVING MIN(b.sale_date) >= '2019-01-01'
   AND MAX(b.sale_date) <= '2019-03-31';