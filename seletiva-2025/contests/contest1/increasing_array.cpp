#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vect(n);
    long long moves = 0; cin >> vect[0];
    for(int i = 1; i < n; i++) {
        cin >> vect[i];
        if(vect[i] < vect[i-1]) {
            moves += vect[i-1] - vect[i];
            vect[i] = vect[i-1];
        }
    }
    cout << moves << "\n";
    return 0;
}