#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str;
    cin >> str;
    int A = 0, B = 0, C = 0, i = 0;
    while (A == 0 || B == 0 || C == 0) {
        if (str[i] == 'A') A++;
        else if (str[i] == 'B') B++;
        else if (str[i] == 'C') C++;
        i++;
    }
    cout << i << endl;
    return 0;
}