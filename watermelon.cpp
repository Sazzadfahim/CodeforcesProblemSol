#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x<3)
    {
        cout<<"NO";
    }
    else if(x%2!=0 && x>2)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    cout<<endl;

    return 0;
}
