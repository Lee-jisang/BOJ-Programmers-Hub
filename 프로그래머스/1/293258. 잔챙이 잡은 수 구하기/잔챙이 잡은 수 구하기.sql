# SELECT COUNT(*) AS FISH_COUNT
# FROM FISH_INFO
# WHERE LENGTH <= '10' || LENGTH IS NULL

select count(*) as FISH_COUNT
from fish_info
where length <= 10.0 || length is null #float type 일때 조건
;
