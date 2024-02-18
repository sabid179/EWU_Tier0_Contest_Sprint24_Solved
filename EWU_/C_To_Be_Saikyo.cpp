#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N];
    int MAX = INT_MIN;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
        if (array[i] > MAX) MAX = array[i];
    }
    if (array[0] != MAX) {
        cout << ((MAX + 1) - array[0]) << endl;
    } else {
        int count = 0;
        for (int i = 1; i < N; i++) {
            if (array[i] == MAX) count++;
        }
        if (!count) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}