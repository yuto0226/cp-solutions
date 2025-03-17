#include <stdio.h>
char arr[1000];
int input;

void recursive(int l,int r,int n){
    if(l>input||r>l) return;
    if(n==input*2){
        arr[n]='\0';
        printf("%s\n",arr);
        return;
    }
    arr[n]='(',recursive(l+1,r,n+1);
    arr[n]=')',recursive(l,r+1,n+1);
}

int main(){
    while(scanf("%d",&input)!=EOF){
        recursive(0,0,0);
    }
    return 0;
}
