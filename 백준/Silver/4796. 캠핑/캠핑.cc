#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int L, P, V;
    while (1) {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) return 0;

        if (L >= V % P) 
            cout << "Case " << i << ": " << (V / P) * L + (V % P) << "\n";       
        else 
            cout << "Case " << i << ": " << (V / P) * L + L << "\n";           
        i++;

    }

}