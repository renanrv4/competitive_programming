#include <bits/stdc++.h>

using namespace std;

int main() {
    int qtd_bits; cin >> qtd_bits;
    string s1, s2;
    cin >> s1 >> s2;
    int qtd_decay_bits = 0;
    int qtd_superpos = 0;
    for(int i = 0; i < qtd_bits; i++) {
        if(s1[i] == '*') {
            qtd_superpos++;
            if(s2[i] != '*') {
                qtd_decay_bits++;
            }
        }
    }
    double res = qtd_decay_bits;
    cout << fixed << setprecision(2) << res/qtd_superpos << "\n";
    return 0;
}