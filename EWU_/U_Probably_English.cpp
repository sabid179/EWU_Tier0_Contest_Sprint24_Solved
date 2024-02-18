#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string W[N];
    bool should_print_yes = false;
    for (int i = 0; i < N; i++) {
        cin >> W[i];
        if (!W[i].compare("and") || !W[i].compare("not") || !W[i].compare("that") || !W[i].compare("the") || !W[i].compare("you")) {
            should_print_yes = true;
            break;
        }
    }
    if (should_print_yes) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}