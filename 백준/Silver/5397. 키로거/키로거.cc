#include <iostream>
#include <list>
using namespace std;

int main(void) {

    int t;
    cin >> t;

    while (t--) {
        list<char> listChar;
        
        string key;
        cin >> key;

        auto it = listChar.begin();

        for (int i = 0; i < key.size(); i++) {
            if (key[i] == '<') {
                if (it != listChar.begin()) {
                    it--;
                }
            }
            else if (key[i] == '>') {
                if (it != listChar.end()) {
                    it++;
                }
            }
            else if (key[i] == '-') {
                if (it != listChar.begin()) {
                    it = listChar.erase(--it);
                }
            }
            else {
                listChar.insert(it, key[i]);
            }
        }
        for (it = listChar.begin(); it != listChar.end(); it++) {
            cout << *it;
        }
        cout << '\n';

    }

    return 0;
}