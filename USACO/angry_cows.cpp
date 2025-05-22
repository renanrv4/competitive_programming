#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

bool check(vector<int> vect, int power, int num_vacas) {
    int fardos_ocupados = 0;
    int i = 0;
    while(i < vect.size()) {
        fardos_ocupados++;
        int alcance_p = vect[i] + 2 * power;
        while(i < vect.size() && vect[i] <= alcance_p) {
            i++;
        }
    }
    return fardos_ocupados <= num_vacas; 
}

int bs(vector<int> vect, int num_vacas) {
    int l = 0; int r = vect.size()-1;
    int res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(check(vect, m, num_vacas)) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main() {
    ifstream cin("angry.in");
    int n, k; cin >> n >> k;
    vector<int> hay_bales(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> hay_bales[i];
    } 
    sort(hay_bales.begin(), hay_bales.end());
    ofstream("angry.out") << bs(hay_bales, k) << "\n";
    return 0;
}