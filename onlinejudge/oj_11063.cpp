#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int n, cnt = 1;
    while(cin >> n) {
        bool is_b2 = true;
        vector<int> seq(n);
        for(int i = 0; i < n; ++i) {
            cin >> seq[i];
            if(seq[i] <= 0 || (i > 0 && seq[i] <= seq[i - 1])) {
                is_b2 = false;
            }
        }

        if(!is_b2) {
            cout << "Case #" << cnt++ << ": " << "It is not a B2-Sequence.\n" << endl;
            continue;
        }

        unordered_set<int> sums;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++){
                int pair_sum = seq[i] + seq[j];
                if(sums.find(pair_sum) != sums.end()) {
                    is_b2 = false;
                    i = n; break;
                }

                sums.insert(pair_sum);
            }
        }

        if(is_b2) {
            cout << "Case #" << cnt++ << ": " << "It is a B2-Sequence.\n" << endl;
        } else {
            cout << "Case #" << cnt++ << ": " << "It is not a B2-Sequence.\n" << endl;
        }
    }

    return 0;
}
