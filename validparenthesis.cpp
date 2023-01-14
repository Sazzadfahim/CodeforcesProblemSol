
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i;
    stack<char> sta;
    for(i=0; i<s.length(); i++)
    {

        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            sta.push(s[i]);
        }
        else
        {
            if(s[i]=='}' && sta.top()=='{')
            {
                sta.pop();
            }
            else if(s[i]==')' && sta.top()=='(')
            {
                sta.pop();
            }
            else if((s[i]==']' && sta.top()=='[')){
                sta.pop();
            }
            else
               break;

        }
        //i++;

    }
    if(!(sta.empty()))
    {
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"True"<<endl;
    }

    return 0;
}
