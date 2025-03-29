// proof https://oeis.org/A062870
#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007
#define INPUT_MAX 1000001

vector<long long> factorial(INPUT_MAX, 1);

int main() {
  for (int i = 1; i < INPUT_MAX; i++) {
    factorial[i] = (factorial[i - 1] * i) % MOD;
  }

  int n;
  while (cin >> n) {
    long long result = factorial[n / 2] * factorial[n / 2] % MOD;
    if (n % 2) {
      result = n * result % MOD;
    }
    cout << result << endl;
  }

  return 0;
}
