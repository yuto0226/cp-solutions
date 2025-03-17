#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned long long f, o;
  while(scanf("%llu %llu", &f, &o)!=EOF){
    printf("%llu\n", f > o ? f - o : o - f);
  }
  return 0;
}
