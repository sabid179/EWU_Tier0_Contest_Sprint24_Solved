#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (!str.compare("ACE") || !str.compare("BDF") || !str.compare("CEG") || !str.compare("DFA") || !str.compare("EGB") || !str.compare("FAC") || !str.compare("GBD")) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}