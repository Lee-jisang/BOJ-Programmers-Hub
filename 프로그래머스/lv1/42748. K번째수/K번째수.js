function solution(array, commands) {
    var answer = [];
    
    var temp = [];
    for(var i=0; i<commands.length; i++){
        temp = array.slice(commands[i][0]-1,commands[i][1]);
        temp.sort(function compare(a, b) {
            return a - b;
        });
        answer.push(temp[commands[i][2]-1]);
    }   
    return answer;
}