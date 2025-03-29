// Online Judge 10008
#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  int count[100] = {0};
  int max_count = 0;
  cin >> N;
  string line;
  getline(cin, line);
  while (N--) {
    getline(cin, line);

    // counting
    for (char c : line) {
      if (isalpha(c))
        count[toupper(c)]++;
      if (count[toupper(c)] > max_count)
        max_count = count[toupper(c)];
    }
  }

  // output
  for (int i = max_count; i > 0; i--) {
    for (int j = 'A'; j < 'Z' + 1; j++) {
      if (count[j] == i) {
        cout << (char)j << " " << count[j] << endl;
        count[j] = 0;
      }
    }
  }
  return 0;
}
