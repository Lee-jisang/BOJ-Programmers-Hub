-- 코드를 작성해주세요
select b.id as ID, b.genotype AS GENOTYPE, a.genotype as PARENT_GENOTYPE
from ECOLI_DATA a, ECOLI_DATA b
where a.id = b.parent_id
  and ((a.genotype & b.genotype) = a.genotype)
order by id

