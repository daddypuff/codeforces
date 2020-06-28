#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int up1,up2,low1,low2,tot_w1,tot_w2;
        low2=abs(c-d)/n;
        up2=(c+d)/n;
        low1=abs(a-b)/n;
        up1=a+b/n;
        tot_w1=n*low1;
        tot_w2=n*up1;
       if(tot_w1>=low2 || tot_w1<=up2)
        cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}