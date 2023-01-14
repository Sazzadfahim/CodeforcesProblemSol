#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, temp;
    long long int sum=0, mini=999999999;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>temp;
        sum+=temp;
        if(temp%2!=0 && temp<=mini)
        {
            mini=temp;
        }
    }
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        cout<<sum-mini;
    }

    return 0;
}
