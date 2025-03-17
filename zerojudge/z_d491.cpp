//ZeroJudge d491
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b) {
        int temp=a;
        a=b;
        b=temp;
    }
    int sum=0;
    for(int i=a;i<=b;i++){
        if(i%2==0) sum+=i;
    }
    cout<<sum;
    
    return 0;
}
