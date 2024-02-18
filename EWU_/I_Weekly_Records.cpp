#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    N *= 7;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += array[i - 1];
        if (i % 7 == 0) {
            cout << sum << " ";
            sum = 0;
        }
    }
    cout << endl;
    return 0;
}