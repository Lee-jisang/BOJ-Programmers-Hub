#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {  
    vector<int> v;
    while(n!=0){
        v.push_back(n%3);
        n=n/3;
    }
    int sum=0;
    for(int i=v.size()-1; i>=0; i--){
        sum += pow(3,v.size()-1-i)*v[i];
    }
    return sum;
}