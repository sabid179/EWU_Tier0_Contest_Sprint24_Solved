#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int T = 0, A = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'T') T++;
        else A++;
    }
    if (T > A) {
        cout << "T" << endl;
    } else if (A > T) cout << "A" << endl;
    else {
        if (S[S.length() - 1] == 'A') {
            cout << "T" << endl;
        } else cout << "A" << endl;
    }
    return 0;
}