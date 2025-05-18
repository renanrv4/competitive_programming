#include <bits/stdc++.h>

using namespace std;

// CSES - 1141
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int> songs(n);
    map<int, int> map_songs;
    int seq_now = 0; int max_seq = 0;
    for(int i = 0; i < n; i++) {
        cin >> songs[i];
    }
    // Encontrando a maior sequência de números (músicas) distintos
    for(int j = 0; j < n; ++j) {
        if(map_songs.find(songs[j]) != map_songs.end() && map_songs[songs[j]] >= seq_now) {
            seq_now = map_songs[songs[j]] + 1;
        }
        map_songs[songs[j]] = j;
        max_seq = max(max_seq, j - seq_now + 1);
    }
    cout << max_seq << "\n";
    return 0;
}