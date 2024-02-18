#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int array[N], idx = -1;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < N; i++) {
        if ((A + B) == array[i]) {
            idx = i;
            break;
        }
    }
    cout << (++idx) << endl;
    return 0;
}