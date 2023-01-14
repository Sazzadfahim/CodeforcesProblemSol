#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j=0;
    long int sum=0;
    vector <int> temp_arr;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            sum+=arr[i];
            cout<<"Hello";
        }
        else
        {
            temp_arr[j]=arr[i];
            j++;
            cout<<"World";
        }
    }
    if(j%2==0)
    {
        for(i=0; i<j; i++){
            sum+=temp_arr[i];
        }
        cout<<"Thank ";
    }
    else {
       int mini=temp_arr[0];
       for(i=0; i<j; i++){
            if(temp_arr[i]<mini){
                mini=temp_arr[i];}
            sum+=temp_arr[i];

        }
        sum=sum-mini;
    }

    cout<<sum;


    return 0;
}

