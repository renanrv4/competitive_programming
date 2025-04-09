#include <bits/stdc++.h>

using namespace std;

// AtCoder - abc329_b
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int max1 = 0; int max2 = 0;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        if(num > max1) {
            max2 = max1;
            max1 = num;
        } else if(num > max2 && num < max1) {
            max2 = num;
        }
    }
    cout << max2 << "\n";
    return 0;
}