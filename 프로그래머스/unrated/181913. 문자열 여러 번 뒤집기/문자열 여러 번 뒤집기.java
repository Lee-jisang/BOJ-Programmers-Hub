class Solution {
    public String solution(String my_string, int[][] queries) {
        for(int i=0; i<queries.length; i++){
            for(int j=0; j<1; j++){
                //System.out.print(queries[i][j]+" ");
                String a = my_string.substring(queries[i][j],queries[i][j+1]+1);
                StringBuffer sb = new StringBuffer(a);
                StringBuffer sf = new StringBuffer(my_string);
                String reverse = sb.reverse().toString();
                sf.replace(queries[i][j],queries[i][j+1]+1,reverse);
                my_string = sf.toString();
                //System.out.print(my_string);              
            }
            //System.out.println();            
        }       
        return my_string;
    }
}