#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;
    int array[N];
    int MIN = INT_MAX;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
        if (array[i] < MIN) {
            MIN = array[i];
        }
    }
    if ((MIN + Q) < P) cout << (MIN + Q) << endl;
    else cout << P << endl;
    return 0;
}