#include<bits/stdc++.h>
using namespace std;

int rem[10000];

int main(){
    int t;
    scanf("%d",&t);
    int k;
    for(k=1;k<=t;k++){
        long n,ans=0;
        int j,c=0,a1=0,i=0,y=0;
        scanf("%ld",&n);
        int g=n;
        while(1){
                n=g;
            while(n!=0){
                rem[i]=n%2;
                n=n/2;
                i++;
            }
            for(j=0;j<i;j++){
                if(rem[j]==1) c++;
            //printf("%d",rem[j]);
            }
            //cout<<a1<<c;
            if(a1==c){
                printf("Case %d: %d\n",k,n);
                break;
            }
            else{
                a1=c;
                c=0;
                g++;
            }
       }
    }
    return 0;
}
