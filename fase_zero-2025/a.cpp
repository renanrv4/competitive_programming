#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, g; cin >> c >> g;
    if(c == 1) {
        cout << "vivo e morto" << "\n";
    } else {
        if(g == 1) {
            cout << "vivo" << "\n";
        } else {
            cout << "morto" << "\n";
        }
    }
    return 0;
}