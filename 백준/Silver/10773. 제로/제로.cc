#include<iostream>
#include<stack>
#include <vector>
using namespace std;

int main(void) {
    int k;
    cin >> k; //(1 ≤ K ≤ 100,000)

    stack<int> s;

    int sum = 0;
    
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        if (a == 0) {
            s.pop();
        }
        else {
            s.push(a);
        }
           
    }

    while (!s.empty()) {
        sum = sum + s.top();
        s.pop();
    }
   
    cout << sum;


}
