// ZeroJudge f312
#include <bits/stdc++.h>

using namespace std;

int main() {
  int A1, B1, C1, A2, B2, C2, n, ans = -2147483648;
  cin >> A1 >> B1 >> C1;
  cin >> A2 >> B2 >> C2;
  cin >> n;
  for (int x1 = 0; x1 <= n; x1++) {
    int x2 = n - x1;
    int y1 = A1 * x1 * x1 + B1 * x1 + C1;
    int y2 = A2 * x2 * x2 + B2 * x2 + C2;
    ans = max(ans, y1 + y2);
  }
  cout << ans;
  return 0;
}
