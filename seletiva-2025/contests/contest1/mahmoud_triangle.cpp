#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> segments(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> segments[i];
    }
    sort(segments.rbegin(), segments.rend());
    for(int j = 0; j < n-2; j++) {
        if(segments[j] < (segments[j+1] + segments[j+2])) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}