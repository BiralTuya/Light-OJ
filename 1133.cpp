#include<bits/stdc++.h>
using namespace std;

int a[110];

int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++){
        int n,m,s,d,div,x,y,temp=0;
        char op;
        scanf("%d %d",&n,&m);
        int j;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int k;
        for(k=0;k<m;k++){
            int hh;
            scanf("%c%d",&op,&hh);
            if(op=='S'){
                scanf("%d",&s);
                int q;
                for(q=0;q<n;q++){
                    a[q]+=s;
                }
            }
            if(op=='M'){
                scanf("%d",&d);
                int w;
                for(w=0;w<n;w++){
                    a[w]*=d;
                }
            }
            if(op=='D'){
                scanf("%d",&div);
                int e;
                for(e=0;e<n;e++){
                    a[e]/=div;
                }
            }
            vector<int>vector;
            if(op=='R'){
                int rr;
                for(rr=0;rr<n;rr++){
                    vector.push_back(rr);
                }
                reverse(vector.begin(),vector.end());
            }
            if(op=='P'){
                scanf("%d %d",&x,&y);
                temp=a[x];
                a[x]=a[y];
                a[y]=temp;
            }
        }
        printf("Case %d:\n",i);
        int p;
        for(p=0;p<n;p++){
            printf("%d",a[p]);
            if(p<(n-1)) printf(" ");
            if(p==(n-1)) printf("\n");
        }
    }
    return 0;
}
