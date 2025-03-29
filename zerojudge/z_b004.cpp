// Zero Judge b004
#include <iostream>
using namespace std;

int back[22] = {0};
int out[22] = {0};
int N, M;
int is_out(int);
int temp;
int printarr(int[]);

int main() {
  cin >> N >> M;
  int outNum = N - M;
  for (int i = 0; i < M; i++) {
    cin >> temp;
    back[temp] = temp;
    temp = 0;
  }
  // cout<<"\n";
  // printarr(back);
  // cout<<"\n";
  for (int i = 1; i <= N; i++) {
    if (back[i] > 0) {
      out[i] = 0;
      continue;
    } else {
      out[i] = i;
    }
  }
  for (int i = 0; i < 22; i++) {
    if (out[i] == 0) {
      continue;
    } else {
      cout << out[i] << " ";
    }
  }

  return 0;
}

int printarr(int arr[22]) {
  for (int i = 0; i < 22; i++) {
    cout << arr[i] << " ";
  }
}
