#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string names[N];
    int age[N];
    int min_idx = 0, min_age = INT_MAX;
    for (int i = 0; i < N; i++) {
        cin >> names[i];
        cin >> age[i];
        if (age[i] < min_age) {
            min_age = age[i];
            min_idx = i;
        }
    }
    for (int i = min_idx; i < N; i++) {
        cout << names[i] << endl;
    }
    if (min_idx != 0) {
    for (int i = 0; i < min_idx; i++) {
        cout << names[i] << endl;
    }
    }
    return 0;
}