#include <bits/stdc++.h>

using namespace std;

#define ll long long

// https://codeforces.com/contest/339/problem/D

void build(int n, ll t[]) {
    bool is_or = true;
    for (int h = n - 1; h >= 0; --h) {
        int start = 1 << h;
        int end = 1 << (h + 1);
        for (int i = start; i < end; ++i) {
            if (is_or) {
                t[i] = t[i << 1] | t[i << 1 | 1];
            } else {
                t[i] = t[i << 1] ^ t[i << 1 | 1];
            }     
        }
        is_or = !is_or;
    }
}

void modify(int p, ll value, int n, ll t[]) {
    int idx = (1 << n) + p - 1;
    bool is_or = true;
    for(t[idx] = value; idx > 1; idx >>= 1) {
        if(is_or) {
            t[idx>>1] = t[idx] | t[idx^1];
        } else {
            t[idx>>1] = t[idx] ^ t[idx^1];
        }
        is_or = !is_or;
    }
}

int main() {
    int n, m; cin >> n >> m;
    ll t[1 << (n+1)];
    for(int i = 0; i < 1 << n; i++) {
       cin >> t[(1<<n) + i];     
    }
    build(n, t);
    for(int j = 0; j < m; j++) {
        int p; ll b; cin >> p >> b;
        modify(p, b, n, t);
        cout << t[1] << "\n";
    }
}