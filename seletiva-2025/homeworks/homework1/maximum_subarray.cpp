#include <bits/stdc++.h>

using namespace std;

// maximum subarray sum usando soma de prefixos - 

int main() {
    int n; cin >> n;
    vector<int> arr(n, 0);
    // Vetor da soma de prefixos
    vector<long int> ps(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ps[i + 1] = ps[i] + arr[i];
    }
    long int maxsum = arr[0];
    long int minPrefix = 0;
    for (int i = 1; i <= n; i++) {
        maxsum = max(maxsum, ps[i] - minPrefix);
        minPrefix = min(minPrefix, ps[i]);
    }
    
    cout << maxsum << "\n";
    return 0;
}
