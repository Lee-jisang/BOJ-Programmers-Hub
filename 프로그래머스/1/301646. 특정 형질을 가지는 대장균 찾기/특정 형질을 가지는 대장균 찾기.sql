select count(*) as COUNT
from ecoli_data
where (genotype & 2) = 0 # 2를 포함하지않는 것을 표현할 때
  and ( genotype & 1 or genotype & 4)