# Write your MySQL query statement below
select distinct t1.author_id as id from Views as t1 where t1.author_id=t1.viewer_id order by t1.author_id;