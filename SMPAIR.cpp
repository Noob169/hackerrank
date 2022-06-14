#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n,k=0;
cin>>t;
while(t--)
{
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<a[0]+a[1]<<endl;
    k=0;
}
return 0;
}
