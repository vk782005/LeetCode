# Write your MySQL query statement below

SELECT a.user_id , ROUND(COALESCE(SUM(b.action = 'confirmed')/ count(b.action) , 0.00) ,2 )as confirmation_rate
FROM Signups as a LEFT JOIN COnfirmations as b
ON a.user_id = b.user_id
GROUP BY a.user_id;