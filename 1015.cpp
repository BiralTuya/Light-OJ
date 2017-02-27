#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d\n",&t);
    for(int i=1;i<=t;i++){
        int n,ans=0;;
        scanf("%d",&n);
        int j;
        for(j=0;j<n;j++){
            int a;
            scanf("%d",&a);
            if(a>0) ans+=a;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
