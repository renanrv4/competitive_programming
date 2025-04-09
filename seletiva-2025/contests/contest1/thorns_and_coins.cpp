#include <iostream>
#include <string>

using namespace std;

int main() {
    int testes; cin >> testes;
    for(int i = 0; i < testes; i++) {
        int n; cin >> n;
        int coins = 0; int thorns = 0;
        for(int j = 0; j < n; j++) {
            char space; cin >> space;
            if(thorns != 2) {
                if(space == '@') {
                    coins++;
                    thorns = 0;
                } else if (space == '*') {
                    thorns++;
                } else if (space == '.') {
                    thorns = 0;
                }
            }
        }
        cout << coins << "\n";
    }
    return 0;
}
