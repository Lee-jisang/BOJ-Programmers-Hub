--쌍따옴표x "NONE"x
--NVL 함수는 값이 NULL인 경우 지정값을 출력하고, NULL이 아니면 원래 값을 그대로 출력한다.
SELECT PT_NAME, PT_NO, GEND_CD, AGE, NVL(TLNO, 'NONE') 
FROM PATIENT
WHERE AGE <= 12 AND GEND_CD = 'W'
ORDER BY AGE DESC, PT_NAME;


