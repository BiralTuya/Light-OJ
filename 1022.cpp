#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        double r,areac=0,areas=0,ans=0;
        double pi=2*acos(0.0);
        scanf("%lf",&r);
        areac=pi*r*r;
        areas=(2*r)*(2*r);
        ans=areas-areac;
        printf("Case %d: %.2lf\n",i,ans);
    }
    return 0;
}
