// Zero Judge a104
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int input[1002];
  int n;
  while (cin >> n) {
    for (int i = 0; i < n; i++) {
      cin >> input[i];
    }
    sort(input, input + n);
    for (int i = 0; i < n; i++) {
      cout << input[i] << " ";
    }
    cout << endl;
  }

  return 0;
}