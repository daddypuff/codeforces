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
        int len=n.size(),temp=1,one=0,zero=0;
        len/=2;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='0')
                zero++;
            if(n[i]=='1') 
                one++;
        }
       // cout<<one<<" "<<zero<<"\n";
        int flag=min(zero,one);
        while(flag--)
           { 
                       for(int i=0;i<n.size()-1;i++)
                       {
                           if(n[i]!=n[i+1])
                           {
                               n.erase(i,1);
                               n.erase(i+1,1);
                               temp++;
                               break;
                           }
                           else continue;
                       }
                      // cout<<"Paneer Tikka \n";
            }
           // cout<<n<<"\n";
        if(temp & 1)
            cout<<"NET\n";
        else
            cout<<"DA\n";
    }
    return 0;
}