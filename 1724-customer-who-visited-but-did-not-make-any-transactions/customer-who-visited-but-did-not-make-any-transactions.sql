# Write your MySQL query statement below

SELECT a.customer_id , COUNT(customer_id) as count_no_trans
FROM
Visits as a
LEFT JOIN
Transactions as b
ON a.visit_id = b.visit_id
WHERE transaction_id is null
GROUP BY a.customer_id;