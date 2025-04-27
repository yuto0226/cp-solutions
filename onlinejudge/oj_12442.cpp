#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited, processed;
vector<int> graph, dp;

int dfs(int u) {
    if (visited[u]) return 0;
    visited[u] = true;
    return dp[u] = 1 + dfs(graph[u]);
}

int main() {
    int T, N;
    cin >> T;
    for (int c = 0; c < T; c++) {
        cin >> N;

        // initialize variables
        int fcount = 0, fnum = -1; // forward count, forward number
        processed.assign(N + 1, false);
        graph.assign(N + 1, -1);
        dp.assign(N + 1, -1);

        // read input
        for (int i = 0, u, v; i < N; i++) {
            cin >> u >> v;
            graph[u] = v;
        }

        // process counting
        for (int i = 1; i <= N; i++) {
            if (processed[i]) continue;

            processed[i] = true;
            visited.assign(N + 1, false);

            if(dp[i] == -1) {
                dp[i] = dfs(i);
            }
            
            if (dp[i] > fcount || (dp[i] == fcount && i < fnum)) {
                fnum = i;
                fcount = dp[i];
            }
        }

        cout << "Case " << c + 1 <<": " << fnum << "\n";
    }
    return 0;
}