# -- 코드를 작성해주세요
select a.id as ID
from (
select id, parent_id
from ECOLI_DATA
where parent_id is not null
) a left outer join ECOLI_DATA b
on a.parent_id = b.id 
left outer join ECOLI_DATA c on b.parent_id = c.id
where b.parent_id is not null
  and c.parent_id is null
order by ID


