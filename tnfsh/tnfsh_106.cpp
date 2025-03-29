// TNFSH OJ 106
#include <bits/stdc++.h>
using namespace std;

int main() {
  int result = 1;
  for (int i = 0; result / 71 == 0; i++) {
    result = (result + 1) * 2;
  }
  if (result / 3 == 0)
    cout << "right\n";
  else
    cout << "left\n";
  return 0;
}
