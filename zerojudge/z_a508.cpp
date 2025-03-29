#include <stdio.h>

int main() {
  int rd_count = 0;    // 3's
  int rdp1_count = 0;  // 3+1's
  int rdp2_count = 0;  // 3+2's
  int input;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &input);
    rd_count += (input % 3 == 0);
    rdp1_count += (input % 3 == 1);
    rdp2_count += (input % 3 == 2);
  }
  printf("%d %d %d", rd_count, rdp1_count, rdp2_count);
  return 0;
}
