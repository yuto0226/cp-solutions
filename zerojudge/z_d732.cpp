#include <stdio.h>

int  bin_search(int arr[],int target,int begin,int end){
    while(end-begin>0){
        int mid=(begin+end)/2;
        if(arr[mid]==target) return mid+1;
        if(arr[mid]>target) end=mid;
        else begin=mid;
    }
    return 0;
}

int main(){
    int n,k;
    int arr[100005];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<k;i++){
        int t;
        scanf("%d",&t);
        printf("%d\n",bin_search(arr,t,0,n));
    }
    return 0;
}
