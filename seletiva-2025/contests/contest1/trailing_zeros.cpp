#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n_fatorial; cin >> n_fatorial;
    int n_zeros = 0;
    while(n_fatorial >= 5) {
        n_fatorial = n_fatorial/5;
        n_zeros += n_fatorial;
    }
    cout << n_zeros << "\n";
    return 0;
}