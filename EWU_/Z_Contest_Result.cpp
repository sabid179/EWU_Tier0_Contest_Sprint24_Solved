#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    int B[M];
    int total = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < M; i++) {
        total += A[B[i] - 1];
    }
    cout << total << endl;
    return 0;
}