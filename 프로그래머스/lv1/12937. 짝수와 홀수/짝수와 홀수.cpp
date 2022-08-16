#include <string>
#include <vector>
using namespace std;

string solution(int num) {
    if(abs(num)%2==1) return "Odd";
    else if(abs(num)%2==0) return "Even";
}