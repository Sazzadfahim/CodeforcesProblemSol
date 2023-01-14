
#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int n,s,ans,i;
    s=0;
    cin>>n;
    int a[n];
    while (n--)
    {
        ans=0;
        for (i=0;i<3;i++)
        {
            cin>>a[i];
            if (a[i]==1)
                ans++;
        }
        if (ans>=2)
            s++;
    }
    cout<<s<<endl;
    return 0;
}
