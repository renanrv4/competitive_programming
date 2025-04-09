#include <bits/stdc++.h>

using namespace std;

// SPOJ - ADAQUEUE
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    deque<int> ada_queue;
    bool reverse = false;
    for(int i = 0; i < n; i++) {
        string command; cin >> command;
        if(command == "back") {
            if(ada_queue.empty()) {
                cout << "No job for Ada?" << "\n";
            } else if (reverse) {
                cout << ada_queue.front() << "\n";
                ada_queue.pop_front();
            } else {
                cout << ada_queue.back() << "\n";
                ada_queue.pop_back();
            }
        } else if (command == "front") {
            if(ada_queue.empty()) {
                cout << "No job for Ada?" << "\n";
            } else if (reverse) {
                cout << ada_queue.back() << "\n";
                ada_queue.pop_back();
            } else {
                cout << ada_queue.front() << "\n";
                ada_queue.pop_front();
            }
        } else if (command == "reverse") {
            reverse = !reverse;
        } else if (command == "push_back") {
            int num; cin >> num;
            if(reverse) {
                ada_queue.push_front(num);
            } else {
                ada_queue.push_back(num);
            }
        } else if (command == "toFront") {
            int num; cin >> num;
            if(reverse) {
                ada_queue.push_back(num);
            } else {
                ada_queue.push_front(num);
            }
        } 
    }
    return 0;
}