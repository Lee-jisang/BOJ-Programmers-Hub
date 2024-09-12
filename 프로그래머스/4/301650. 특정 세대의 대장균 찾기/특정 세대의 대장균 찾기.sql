# -- 코드를 작성해주세요
# select a.id as ID
# from(
# select id, parent_id
# from ECOLI_DATA
# where parent_id is not null
# ) a left outer join ECOLI_DATA b
# on a.parent_id = b.id
# where b.parent_id is not null
# order by a.id

SELECT a.id AS ID
FROM ECOLI_DATA a
JOIN ECOLI_DATA b ON a.parent_id = b.id
WHERE b.parent_id IS NOT NULL
ORDER BY a.id;
