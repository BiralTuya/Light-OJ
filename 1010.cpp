#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        double m,n;
        int ans=0;
        scanf("%lf %lf",&m,&n);
        ans=int(ceil((m*n)/2));
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
