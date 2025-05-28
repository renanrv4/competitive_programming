#include <bits/stdc++.h>

using namespace std;

#define MEGABYTE 10e5
#define ull unsigned long long

int main() {
    ull qtd_megabt; cin >> qtd_megabt;
    ull qtdmg = qtd_megabt * MEGABYTE * 8;
    ull qtd_qubits = (log(qtdmg) / log(2)) + 1;
    cout << qtd_qubits << "\n";
    return 0;
}