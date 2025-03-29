// ZeroJudge a009
#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  for (int i = 0; i < str.size(); i++) {
    str[i] -= 7;
    cout << str[i];
  }
  return 0;
}