// Chef likes to mix colors a lot. Recently, she was gifted N colors A1, A2, ..., AN by her friend.

// Chef wants to make the values of all her colors pairwise distinct, as they will 
//then look stunningly beautiful. In order to achieve that, she can perform the following mixing operation zero or more times:

//     Choose any two colors. Let's denote their values by x and y.
//     Mix the color with value x into the color with value y. After the mixing, 
//the value of the first color remains x, but the value of the second color changes to x + y.

// Find the minimum number of mixing operations Chef needs to perform 
//to make her colors beautiful.

/*ALGO:
1. Sort the array so that every element that is similar is present sequentially in the array (All 1s, 2s, etc. will appear together)
2. Find the number of non-distinct elements
3. The minimum number of ops needed will be equal to the number of non-distinct elements
4. This is because for every group of non-distinct elements (Say 5 1s), the first number (1) can be added to the maximum element of the
array to create a unique element(>max). The rest of the non-unique elements can then be cumulatively added to create unique elements
E.g: Consider a sorted sequence: 1 1 1 2 3 3 4 4 5 6
Here there are: 2 non-distinct 1s(excluding the first element of each type, which in this case is the first 1),
                1 non-distinct 3
                1 non-distinct 4
Thus total = 2+1+1= 5 non-distinct elements
Now, first non-distinct 1 (at a[1]) can be added to max element 6 to make 1+6= 7 (distinct element)
Second non-distinct 1 (at a[2]) can then be added to 7 at a[1] to make 8
Similar ops can be performed with 3 and 4
Thus total ops needed = 5 = number of non-distinct elements
*/


#include <bits/stdc++.h>
using namespace std;

int calculate(unsigned long long int a[],int n)
{
    int i,k=0;
    unsigned long long int c=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]==c)
        k++;
        else
        c=a[i];
    }
    return k;
}


int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned long long int a[n]={0};
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        cout<<calculate(a,n)<<endl;
    }
}