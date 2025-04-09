#include <bits/stdc++.h>

using namespace std;

// AtCoder - abc328_d
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string abc; cin >> abc;
    string abc_res;
    for(char c : abc) {
        abc_res += c;
        int str_size = abc_res.size();
        if(str_size >= 3 && abc_res[str_size-3] == 'A' && abc_res[str_size-2] == 'B' && abc_res[str_size-1] == 'C') {
            abc_res.pop_back(); abc_res.pop_back(); abc_res.pop_back();
        }
    }
    cout << abc_res << "\n";
    return 0;
}