#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        long long w,ans=0;
        int flag=0;
        scanf("%lld",&w);
        int j;
        int k=w/2;
        for(j=2;j<k;j+=2){
            ans=w/j;
            if(ans%2!=0 && ans*j==w){
                printf("Case %d: %lld %d\n",i,ans,j);
                flag=1;
                break;
            }
        }
        if(flag==0) printf("Case %d: Impossible\n",i);
    }
    return 0;
}
