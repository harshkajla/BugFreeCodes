#include<stdio.h>
int main()
{
    int t,n,m,k,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&k);
        if((n==1&&m==2)||(n==2&&m==1)||(n==1&&m==1))
            ans=0;
        else if((n==1)||(m==1))
            ans=k;
        else if(k%2==0)
            ans = k/2;
        else
            ans= (k/2) + 1;
        printf("%d\n",ans);
    }
    return 0;
}
