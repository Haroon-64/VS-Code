#include <iostream>
#include <unordered_set>
#include <queue>
#include <unordered_map>
using namespace std;

bool bfs(unordered_map<char, unordered_set<char>>& G, char start, char end) {
    queue<char> q;
    unordered_set<char> visited;

    q.push(start);
    visited.insert(start);

    while (!q.empty()) {
        char node = q.front();
        q.pop();
        cout << node << endl;

        if (node == end) {
            return true;
        }

        for (char next : G[node]) {
            if (visited.find(next) == visited.end()) {
                q.push(next);
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
