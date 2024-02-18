#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i;
    for (i = 0; i < s.length(); i++) {
        if (s[i] < 91) break;
    }
    cout << (++i) << endl;
    return 0;
}