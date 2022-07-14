#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (('a' <= s[i] && s[i] <= 'm') || ('A' <= s[i] && s[i] <= 'M')) 
            cout << char(s[i]+13);        
        else if (('n' <= s[i] && s[i] <= 'z') || ('N' <= s[i] && s[i] <= 'Z')) 
            cout << char(s[i]-13);        
        else 
            cout << s[i];       
    }
    return 0;
}
