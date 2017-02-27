#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i=0;
        scanf("%d",&n);
        if(n>=10 && n<20){
            int ans=0;
            ans=n%10;
            printf("%d 10\n",ans);
        }
        else if(n==20) printf("10 10\n");
        else{
            printf("0 %d\n",n);
        }
    }
    return 0;
}
