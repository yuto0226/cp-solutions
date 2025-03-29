#include <iostream>

int T, M, N, Q;
char graph[500][500] = {0};

bool pos_valid(int r, int c) {
  if (r >= M || r < 0 || c >= N || c < 0)
    return false;
  return true;
}

int largest_square(int r, int c) {
  int len = 1;
  char type = graph[r][c];
  int vector[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

  bool flag = true;
  int curr_r = r, curr_c = c;

  // std::cout << "center: (" << r << ", " << c << ")\n";

  while (flag) {
    len += 2;
    curr_r = r - len / 2;
    curr_c = c - len / 2;

    for (int dir = 0; dir < 4; dir++) {
      for (int i = 0; i < len - 1; i++) {
        curr_r += vector[dir][0];
        curr_c += vector[dir][1];
        // std::cout << "(r=" << curr_r << ", c=" << curr_c << ") "
        //           << (pos_valid(curr_r, curr_c) ? "valid" :
        //           "invalid")
        //           << "\n";

        if (!pos_valid(curr_r, curr_c) || graph[curr_r][curr_c] != type) {
          flag = false;
          break;
        }
      }
      if (!flag)
        break;
    }
  }

  return len - 2;
}

int main() {
  std::cin >> T;
  while (T--) {
    std::cin >> M >> N >> Q;
    for (int i = 0; i < M; i++)
      std::cin >> graph[i];

    std::cout << M << ' ' << N << ' ' << Q << '\n';
    int r, c;
    while (Q--) {
      std::cin >> r >> c;
      std::cout << largest_square(r, c) << '\n';
    }
  }
  return 0;
}
