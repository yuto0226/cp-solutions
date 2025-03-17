//Zero Judge a053
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int correct_amount=0;
  int sum=0;
  cin>>correct_amount;
  if (correct_amount >= 40) {
    sum = 100;
    goto print;
  }
  for (int i = 1; i <= correct_amount; i++) {
    if (i >= 0 && i <= 10){
      sum += 6;
    } else if (i >= 11 && i <= 20){
      sum += 2;
    } else if (i >= 21 && i <= 40){
      sum += 1;
    }
  }
  print : {
    cout<<sum;
  }
  return 0;
}
