#include <bits/stdc++.h>

using namespace std;

// CodeForces - 1722C
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        // Vamos mapear as palavras com um vetor de tamanho 3 que 
        // possui um vetor para indicar as palavras que cada jogador digitou
        int n_words; cin >> n_words;
        vector<vector<string>> player_words(3, vector<string>(n_words));
        unordered_map<string, int> map_words;
        vector<int> points(3, 0);

        for(int j = 0; j < 3; j++) {
            for(int l = 0; l < n_words; l++) {
                cin >> player_words[j][l];
                map_words[player_words[j][l]]++;
            }
        }
        for(int p = 0; p < 3; p++) {
            for(int w = 0; w < n_words; w++) {
                if(map_words[player_words[p][w]] == 1) {
                    points[p] += 3;
                } else if (map_words[player_words[p][w]] == 2) {
                    points[p] += 1;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << "\n";
    }
    return 0;
}