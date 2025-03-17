// Online Judge 10929
#include <bits/stdc++.h>

using namespace std;

int main() {
  string n;
  while (cin >> n) {
    if (n == "0") break;
    int odd = 0, even = 0;
    for (int i = 0; i < n.size(); i++) {
      if (n[i] == ' ') continue;
      if (i % 2)
        odd += n[i] - '0';
      else
        even += n[i] - '0';
    }

    if (abs(odd - even) % 11)
      cout << n << " is not a multiple of 11." << endl;
    else
      cout << n << " is a multiple of 11." << endl;
  }
  return 0;
}
