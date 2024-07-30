#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool dfs(unordered_map<string, unordered_set<string>>& G, const string& start, const string& end, unordered_set<string>& visited) {
    visited.insert(start);
    cout << start << endl;

    if (start == end) {
        return true;
    }

    for (const string& next : G[start]) {
        if (visited.find(next) == visited.end()) {
            if (dfs(G, next, end, visited)) {
                return true;
            }
            cout << next << endl;
        }
    }

    return false;
}

int main() {
    unordered_map<string, unordered_set<string>> g = {
        {"A", {"B", "C"}},
        {"B", {"A", "D", "E"}},
        {"C", {"A", "F"}},
        {"D", {"B"}},
        {"E", {"B", "F"}},
        {"F", {"C", "E"}}
    };

    unordered_set<string> visited;
    cout << "Path exists: " << dfs(g, "A", "F", visited) << endl;

    return 0;
}
