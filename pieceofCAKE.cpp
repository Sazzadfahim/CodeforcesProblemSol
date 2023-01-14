#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, a, b;
    cin>>n>>a>>b;

    n=n-a;
    if(n>b)
    {
        cout<<b+1;
    }
    else
    {
        cout<<n;
    }

    return 0;
}
