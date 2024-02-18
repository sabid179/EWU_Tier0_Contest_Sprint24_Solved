#include <bits/stdc++.h>
using namespace std;

int main() {
    string temp;
    cin >> temp;
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] != 'a' && temp[i] != 'e' && temp[i] != 'i' && temp[i] != 'o' && temp[i] != 'u') {
            cout << temp[i];
        }
    }
    cout << endl;
    return 0;
}