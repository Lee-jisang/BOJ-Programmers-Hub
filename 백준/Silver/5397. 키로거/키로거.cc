#include <iostream> 
#include <list> 
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        list<char> key;
        string a;
        cin >> a;
        auto it = key.begin();
        for (int j = 0; j < a.length(); j++) {  
            if (a[j] == '>') {
                if (it != key.end()) it++;
            }
            else if (a[j] == '<') {
                if (it != key.begin()) it--;
            }
            else if (a[j] == '-') {
                if (it != key.begin()) it = key.erase(--it);
            }
            else  key.insert(it, a[j]);   
        }
        for (auto iter = key.begin(); iter != key.end(); iter++) {
            cout << *iter;
        }
        cout << "\n";
    }
}