#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,c=0,i;
    cin>>n>>d;
    int a[n]={0};
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    i=0;
    while(i<n-1)
    {
        if(a[i+1]-a[i]<=d)
        {
            c++;
            i+=2;
        }
        else
        i++;
    }
    cout<<c;
}