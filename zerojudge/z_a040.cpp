#include <stdio.h>
#include <math.h>

bool armstrong(int n){
    int ori=n;
    int sum=0;
    int len=(log10(n)-(int)log10(n)>0)?log10(n)+1:log10(n);
    while(n/10!=0){
        sum+=pow(n%10,4);
        n/=10;
    }
    sum+=pow(n%10,4);
    if(sum==ori) return 1;
    return 0;
}

int main(){
    
    return 0;
}
