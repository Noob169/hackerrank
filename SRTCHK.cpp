#include <bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}

int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n]={0};
        int b[n]={0};
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        sort(a,a+n);
        if(check(a,b,n))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}