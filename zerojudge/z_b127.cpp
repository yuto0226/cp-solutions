//ZeroJudge b127
#include<iostream>
using namespace std;

int f(int n)
{
    if( n==1 or n==2 )
        return 1;
    if( n >= 3 )
        return f(n-1)+f(n-2);
}

int main()
{
    int n;
    while(cin>>n){
        cout << f(n+1) << endl;
    }
    return 0;
}