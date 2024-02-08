#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; //숫자의 개수
    cin >> N; //1<=N<=100

    string s;
    cin >> s;

    // stoi(s) 문자열을 정수로 변환 
    // s[i]-48, 문자단위(char)를 정수로 변환    
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        sum= sum + (s[i] - 48);

    }

    cout << sum;


}