#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        char buff;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='(' || n[i]==')')
                continue;
            if(n[i]!='(' && n[i]!=')')
            {
                if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='^')
                   {
                    if(n[i+1]=='(')
                        buff=n[i];
                    if(n[i+1]!='(')
                    swap(n[i],n[i+1]);
                   }
                   cout<<n[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}