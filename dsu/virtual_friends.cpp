#include <bits/stdc++.h>

using namespace std;

class DSU {
    private: 
        vector<int> parents;
        vector<int> sizes;
    public:
        DSU(int size) {
            parents.resize(size); sizes.resize(size, 1);
            for(int i = 0; i < size; i++) {
                parents[i] = i;
            }
        }
        
        int find(int x) {
            if(parents[x] == x) {
                return x;
            } else {
                return parents[x] = find(parents[x]);
            }
        }

        bool union_(int x, int y) {
            int xr = find(x);
            int yr = find(y);
            if(xr == yr) { return false; }

            if(sizes[xr] < sizes[yr]) {
                swap(xr, yr); 
            }
            sizes[xr] += sizes[yr];
            parents[yr] = xr;
            return true;
        }

        bool connected(int x, int y) {
            return find(x) == find(y);
        }

        int get_size(int p) {
           return sizes[find(p)]; 
        }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<string, int> pl;
        int count=0;
        DSU ds(n*2 + 100);
        for(int i = 0; i < n; i++) {
            string a, b; cin >> a >> b;
            if(pl.find(a) == pl.end()) {
                pl[a] = count++;
            }
            if(pl.find(b) == pl.end()) {
                pl[b] = count++;
            }
            ds.union_(pl[a], pl[b]);
            cout << ds.get_size(pl[a]) << "\n";
        }
    }
    return 0;
}