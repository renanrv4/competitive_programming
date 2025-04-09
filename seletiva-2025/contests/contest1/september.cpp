#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    for(int i = 0; i < 12; i++) {
        string word; cin >> word;
        if(word.size() == i + 1) {
            words.push_back(word);
        }
    }
    cout << words.size() << "\n";
    return 0;
}