#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    string T;
    cin >> S;
    cin >> T;
    bool is_same = true;
    for (int i = 0; i < N; i++) {
        if ((S[i] == T[i]) || (S[i] == 'o' && T[i] == '0') || (S[i] == '0' && T[i] == 'o') || (S[i] == '1' && T[i] == 'l') || (S[i] == 'l' && T[i] == '1')) {
            is_same = true;
        } else {
            is_same = false;
            break;
        }
    }
    if (is_same) {
        cout << "Yes" << endl;
    } else cout <<"No" << endl;
    return 0;
}