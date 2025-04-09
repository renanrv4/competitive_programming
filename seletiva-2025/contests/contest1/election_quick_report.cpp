#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> votes(n, 0);
    int last_winner = n+1, winner = -1;
    for(int i = 0; i < m; i++) {
        int candidate_num; cin >> candidate_num;
        votes[candidate_num-1]++;
        if(votes[candidate_num-1] > winner) {
            winner = votes[candidate_num-1];
            last_winner = candidate_num;
        } else if (votes[candidate_num-1] == winner) {
            if(last_winner > candidate_num) {
                last_winner = candidate_num;
            }
        }
        cout << last_winner << "\n";
    }
    return 0;
}