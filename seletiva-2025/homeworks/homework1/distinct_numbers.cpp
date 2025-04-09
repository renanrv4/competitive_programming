#include <bits/stdc++.h>

using namespace std;

// CSES - 1621
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    // Um set não possui elementos repetidos
    set<int> distinct_numbers;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        distinct_numbers.insert(num);
    }
    cout << distinct_numbers.size() << "\n";
    return 0;
}