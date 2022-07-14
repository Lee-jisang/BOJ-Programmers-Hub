#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string o;
    cin >> o;

    if (o == "0") {
        cout << 0; return 0;
    }

    string sum = "";
    for (int i = 0; i < o.length(); i++) {
        switch (o[i])
        {
        case '0': {
            if (i == 0) {        
                break;
            }
            else {
                sum += "000";
                break;
            }
        }
        case '1': {
            if (i == 0) {
                sum += "1";
                break;
            }
            else {
                sum += "001";
                break;
            }
        }
        case '2': {
            if (i == 0) {
                sum += "10";
                break;
            }
            else {
                sum += "010";
                break;
            }
        }
        case '3': {
            if (i == 0) {
                sum += "11";
                break;
            }
            else {
                sum += "011";
                break;
            }
        }
        case '4': {
            sum += "100";
            break;
        }
        case '5': {
            sum += "101";
            break;
        }
        case '6': {
            sum += "110";
            break;
        }
        case '7': {
            sum += "111";
            break;
        }
        default:
            break;
        }
    }
    cout << sum;
}
