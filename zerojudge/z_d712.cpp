//ZeroJudge d713
#include <bits/stdc++.h>
using namespace std;
#define SIZE 1000000

int cycle(int n,int len){
    //printf("%d ",n);
    if(n==1) return len+1;
    if(n%2!=0) len=cycle(3*n+1,len+1);
    else len=cycle(n/2,len+1);
    return len;
}

int tree[SIZE<<2];

void print_tree(int tree[]){
    for(int i=0;i<SIZE<<2;i++){
        if(i%10==0) printf("\n[%3d] :",i);
        printf("%3d ",tree[i]);
    }
    printf("\n");
}

void build(int arr[],int vertex,int start,int end){
    if(start==end){
        tree[vertex]=arr[start];
        return;  
    }
    int mid=(start+end)/2;
    build(arr,vertex*2,start,mid);
    build(arr,vertex*2+1,mid+1,end);
    tree[vertex]=max(tree[vertex*2],tree[vertex*2+1]);
    print_tree(tree);
    printf("\n");
}

int query_max(int vertex,int start,int end,int l,int r){
    //printf("vertex=%2d, query [%2d, %2d] @ [%2d, %2d] tree[vertex]=%3d\n",vertex,l,r,start,end,tree[vertex]);
    if(l<=start&&r>=end) return tree[vertex];
    int mid=(start+end)/2;
    int result;
    if(r<=mid) return query_max(vertex*2,start,mid,l,r);
    if(l>mid) return query_max(vertex*2+1,mid+1,end,l,r);
    return max(query_max(vertex*2,start,mid,l,r),query_max(vertex*2+1,mid+1,end,l,r));
}

int arr[SIZE+2];
int main(){
    for(int i=1;i<SIZE;i++) arr[i]=cycle(i,0);
    build(arr,1,0,SIZE-1);
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d %d ",a,b);
        if(a>b) swap(a,b);
        printf("%d\n",query_max(1,0,SIZE-1,a,b));
    }
    return 0;
}