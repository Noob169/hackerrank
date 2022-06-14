#include <bits/stdc++.h>
using namespace std;

int find_min(int *a,int k)
{
    int i;
    for(i=9;i>=0;i--)
    {
        if(a[i]>0)
        {
            if(k<=0)
            return i;
            else if(a[i]>k)
            return i;
            else
            k-=a[i];
        }
    }
    return i;
}

int main()
{
    int t,k,i, a[10]={0};
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
        cin>>a[i];
        cin>>k;
        cout<<find_min(a,k)+1<<endl;
    }
}