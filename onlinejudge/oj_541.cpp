#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while(cin>>n && n) {
        vector<vector<int>> bits(n, vector<int>(n));
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> bits[i][j];
            }
        }

        int c_cor, r_cor, c_save = 0, r_save = 0;
        for(int i = 0; i < n; i++) {
            int c_cnt, r_cnt;
            c_cnt = 0; r_cnt = 0;
            for(int j = 0; j < n; j++) {
                r_cnt += bits[i][j];
                c_cnt += bits[j][i];
            }

            if(c_cnt % 2 == 1) {
                c_cor = i;
                c_save++;
            }

            if(r_cnt % 2 == 1) {
                r_cor = i;
                r_save++;
            }
        }

        if(r_save == 0 && c_save == 0) {
            cout << "OK" << endl;
        } else if(r_save == 1 && c_save == 1) {
            cout << "Change bit (" << r_cor + 1 << "," << c_cor + 1 << ")" << endl;
        } else {
            cout << "Corrupt" << endl;
        }
    }
}