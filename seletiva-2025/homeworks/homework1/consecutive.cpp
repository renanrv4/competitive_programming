#include <bits/stdc++.h>

using namespace std;

// AtCoder - abc328_c
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, q; cin >> n >> q;
    string word; cin >> word;
    
    // Usando prefix_sum para percorrer o vetor uma única vez para obter o número de pares
    vector<int> prefix_sum(n, 0);
    for(int i = 1; i < n; i++) {
        if(word.at(i) == word.at(i-1)) {
            prefix_sum.at(i) = prefix_sum.at(i-1) + 1;
        } else {
            prefix_sum.at(i) = prefix_sum.at(i-1);
        }
    }

    for(int j = 0; j < q; j++) {
        int start, end; cin >> start >> end;
        int qtd_pairs = prefix_sum.at(end-1) - prefix_sum.at(start-1);
        cout << qtd_pairs << "\n";
    }

    return 0;
}