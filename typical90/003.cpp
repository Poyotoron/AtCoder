#include <bits/stdc++.h>
using namespace std;

vector<int> dfs(vector<vector<int>> &G, int start) {
    int N = G.size();
    vector<int> dist(N, -1);

    dist[start] = 0;

    stack<int> st({start});

    while (!st.empty()) {
        int src = st.top();
        st.pop();

        for (int dst: G[src]) {
            if (dist[dst] == -1) {
                st.push(dst);
                dist[dst] = dist[src] + 1;
            }
        }
    }

    return dist;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> G(N);

    for (int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    auto dist_from0 = dfs(G, 0);
    auto dist_fromv = dfs(G, distance(dist_from0.begin(), max_element(dist_from0.begin(), dist_from0.end())));
    
    cout << *max_element(dist_fromv.begin(), dist_fromv.end()) + 1 << endl;
    return 0;
}