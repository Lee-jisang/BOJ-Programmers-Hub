SELECT B.USER_ID, B.NICKNAME, A.TOTAL_SALES
FROM (SELECT WRITER_ID, SUM(PRICE) AS TOTAL_SALES
      FROM USED_GOODS_BOARD 
      WHERE STATUS = 'DONE'
      GROUP BY WRITER_ID
      HAVING SUM(PRICE) >=700000) A,
      USED_GOODS_USER B
WHERE A.WRITER_ID = B.USER_ID
ORDER BY A.TOTAL_SALES