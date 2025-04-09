#include <bits/stdc++.h>

using namespace std;

// Função para checar se as torres satisfazem a condição de não possuir dois blocos de mesma cor adjacentes
bool isBeaultiful(string s) {
    for(int i = 1; i < s.size(); i++) {
        if(s[i-1] == s[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m; string t1, t2;
        cin >> n >> m >> t1 >> t2;
        bool res = false;
        for(int j = 0; j < 2; j++) {
            string tcomp1 = t1; string tcomp2 = t2;
            for(int l = 0; l < n; l++) {
                /* Checa se as torres satisfazem a condição
                O operador |= checa se "res" é true, se em algum momento ambas as torres retornarem true, res não vai mudar dali em diante*/ 
                res |= isBeaultiful(tcomp1) && isBeaultiful(tcomp2);
                if (!tcomp2.empty()) {
                    tcomp2.push_back(tcomp1.back());
                    tcomp1.pop_back();
                }
            }
            swap(n, m);
            swap(t1, t2);
        }
        cout << (res ? "YES" : "NO") << "\n";
    }

    return 0;
}
