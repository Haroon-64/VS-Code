#include <iostream>
#include <unordered_set>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

bool bfs(unordered_map<char, unordered_set<char>>& G, char start, char end) {
    queue<pair<char, vector<char>>> q;
    unordered_set<char> visited;

    q.push({start, {start}});
    visited.insert(start);

    while (!q.empty()) {
        auto [node, path] = q.front();
        q.pop();

        if (node == end) {
            cout << "Path from A to F: ";
            for (char c : path) {
                cout << c << " ";
            }
            cout << endl;
            return true;
        }

        for (char next : G[node]) {
            if (visited.find(next) == visited.end()) {
                vector<char> nextPath = path;
                nextPath.push_back(next);
                q.push({next, nextPath});
                visited.insert(next);
            }
        }
    }

    return false;
}

int main() {
    unordered_map<char, unordered_set<char>> g = {
        {'A', {'B', 'C'}},
        {'B', {'A', 'D', 'E'}},
        {'C', {'A', 'F'}},
        {'D', {'B'}},
        {'E', {'B', 'F'}},
        {'F', {'C', 'E'}}
    };

    cout << "Path exists: " << bfs(g, 'A', 'F') << endl;

    return 0;
}
