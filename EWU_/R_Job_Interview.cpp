#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string temp;
    cin >> temp;
    bool is_good = false, is_poor = false;
    for (int i = 0; i < N; i++) {
        if (!is_good && temp[i] == 'o') {
            is_good = true;
        }
        if (!is_poor && temp[i] == 'x') {
            is_poor = true;
        }
    }
    if (!is_poor && is_good) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}