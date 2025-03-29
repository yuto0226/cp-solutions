// ZeroJudge a010
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 2; i < n + 2; i++) {
    int count = 0;  // 次方
    while (n % i == 0) {
      n /= i;
      count += 1;
      // cout<<"["<<i<<"]"<<n<<endl;
    }
    if (count >= 2) {
      cout << i << "^" << count;
      if (n != 1) {
        cout << " * ";
      }
    }
    if (count == 1) {
      cout << i;
      if (n != 1) {
        cout << " * ";
      }
    }
    // cout<<"["<<i<<"]"<<n<<endl;
  }

  return 0;
}