#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i+=2) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }
    cout << s << endl;
    return 0;
}