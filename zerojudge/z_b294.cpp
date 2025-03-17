//ZeroJudge b294
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    int sum=0;
    int num=0;
    for(int i=1;i<=n;i++){
        cin>>num;
        //cout<<"#"<<num<<"*"<<i<<"= "<<(num*i)<<endl;
        sum+=(num*i);
        //cout<<"sum= "<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}