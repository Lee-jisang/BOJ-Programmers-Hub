#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int previous = 0;
    int current = 0;
    vector<string> x;
    x.clear();

    current = str.find('-');
    //find는 찾을게 없으면 npos를 리턴함
    while (current != string::npos) {
        string substring = str.substr(previous, current - previous);
        x.push_back(substring);
        previous = current + 1;
        current = str.find('-', previous);
    }
    x.push_back(str.substr(previous, current - previous));

    for (int i = 0; i < x.size(); i++) {
        cout << x[i][0];
    }


    return 0;
}