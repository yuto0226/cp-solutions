// Online Judge 100
#include <bits/stdc++.h>

using namespace std;

int f(int n) {
  int count = 0;
  while (true) {
    count++;
    if (n == 1) break;
    if (n % 2)
      n = 3 * n + 1;
    else
      n = n / 2;
  }
  return count;
}

int main() {
  f(22);
  int begin, end;
  while (cin >> begin >> end) {
    int max = 0;
    int b, e;
    if (begin > end)
      b = end, e = begin;
    else
      b = begin, e = end;

    for (int i = b; i <= e; i++) {
      int r = f(i);
      if (r > max) max = r;
    }
    cout << begin << " " << end << " " << max << endl;
  }
  return 0;
}
