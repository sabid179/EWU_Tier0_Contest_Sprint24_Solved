#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, idx = 0;
    cin >> N;
    string str;
    cin >> str;
    char seq[3];
    for (int i = 0; i < N; i++) {
        if (str[i] == '|' || str[i] == '*') {
            seq[idx] = str[i];
            idx++;
        }
    }
    if (seq[0] == '|' && seq[1] == '*' && seq[2] == '|') {
        cout << "in" << endl;
    }
    else cout << "out" << endl;
    return 0;
}