#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A < 4 && B < 4) {
        cout << "Yes" << endl;
    } else if (A > 3 && B > 3 && A < 7 && B < 7) {
        cout << "Yes" << endl;
    } else if (A > 6 && B > 6 && A < 10 && B < 10) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}