#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> sequence_len; int num = 0;
    string input; cin >> input;
    for(char c : input) {
        if(c == '|') {
            sequence_len.push_back(num);
            num = 0;
        } else {
            num++;
        }
    }
    for(int i = 1; i < sequence_len.size(); i++) {
        cout << sequence_len[i] << " ";
    }
    return 0;
}