#include <stdio.h>
#include <stdlib.h>


int eval();
int eval(int ans[],int j)
{
    int n,i=0,c=0,t=0,t2=0;
    char arr[500];
    scanf("%d",&n);
    fflush(stdin);
    fgets(arr,2*n,stdin);
    int ar[n],ar2[n],f[10]={0};
    while(arr[i]!='\0')
    {
        if(arr[i]>=48&&arr[i]<=57)
        {
            ar[c]=arr[i]-'0';
            ar2[c]=arr[i]-'0';
            c++;
        }
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]!=-1)
        {
            f[ar[i]]++;
            ar[i]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        t=ar2[i];
        ans[j]=t*f[t];
        f[t]--;
        j++;
    }
    ans[j]=-1;
    j++;
    return j;
}

int main()
{

    int t,n,j=0,k;
    int ans[50000]={0};
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
       j = eval(ans,j);
    }
    for(int i=0;i<j;i++)
    {
        if(ans[i]!=-1)
        printf("%d ",ans[i]);
        else
        printf("\n");
    }
}