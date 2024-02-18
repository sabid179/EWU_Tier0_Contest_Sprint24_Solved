#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[8];
    bool should_print_yes = true;
    for (int i = 0; i < 8; i++) {
        cin >> array[i];
        if (i != 0) {
            if (array[i] < array[i - 1]) {
                should_print_yes = false;
                break;
            }
        }
        if (array[i] < 100 || array[i] > 675) {
            should_print_yes = false;
            break;
        }
        if (array[i] % 25) {
            should_print_yes = false;
            break;
        }
    }
    if (should_print_yes) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;
    return 0;
}