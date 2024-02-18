#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    bool should_print_yes = true;
    for (int i = 0; i < S.length() - 1; i++) {
        if (S[i] == S[i + 1]) {
            should_print_yes = false;
            break;
        }
    }
    if (should_print_yes) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}