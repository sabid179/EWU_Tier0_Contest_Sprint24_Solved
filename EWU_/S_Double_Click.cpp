#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 1; i < N; i++) {
        if (array[i] - array[i - 1] <= D) {
            cout << array[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}