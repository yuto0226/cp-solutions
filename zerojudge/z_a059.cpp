// Zero Judge a049
#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
  int n = 0;
  cin >> n;

  int a, b;
  for (int i = 1; i <= n; i++) {
    cin >> a >> b;
    int sum = 0;
    for (int j = 0; j < b; j++) {
      if (j * j >= a && j * j <= b) {
        sum += (j * j);
        // cout<<"["<<j<<"]: "<<sum<<endl;
      } else if (j * j > b) {
        j = 1001;
      }
    }
    cout << "Case " << i << ": " << sum << endl;
  }

  return 0;
}
