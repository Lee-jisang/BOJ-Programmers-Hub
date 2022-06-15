#include <iostream>
using namespace std;
int main() {
    long long n;
    long long num = 1;
    int cnt = 1;
    while (cin >> n) {
        num = 1;
        cnt = 1;
        while (1) {
            num = num % n;
            if (num == 0) {
                break;
            }
            num = (num * 10) % n + 1 % n; //나머지 연산 공식 사용 
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
